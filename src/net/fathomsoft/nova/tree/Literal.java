package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.ValidationResult;
import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.util.Location;
import net.fathomsoft.nova.util.StringUtils;
import net.fathomsoft.nova.util.SyntaxUtils;

/**
 * Value extension that represents a literal within the code. For
 * example, a number literal and a String literal.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 10:34:30 PM
 * @version	v0.2.41 Dec 17, 2014 at 7:48:17 PM
 */
public class Literal extends IValue implements Accessible
{
	private String	value;
	
	public static final String	NULL_IDENTIFIER     = "null";
	public static final String	TRUE_IDENTIFIER     = "true";
	public static final String	FALSE_IDENTIFIER    = "false";
	
	public static final String  GARBAGE_IDENTIFIER  = "nova_garbageData";
	
//	public static final String	C_NULL_OUTPUT		= "(Object*)0";
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public Literal(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	@Override
	public String getGenericReturnType()
	{
		if (isGenericType())
		{
			return getGenericTypeParameter().getDefaultType();
		}
		
		return getType();
	}
	
	/**
	 * Get the value of the literal.
	 * 
	 * @return The value of the literal.
	 */
	public String getValue()
	{
		return value;
	}
	
	/**
	 * Set the value of the literal. If the literal's value is set within
	 * an external context, the value will be generated in a c syntax sort
	 * of way.
	 * 
	 * @param value The value to set the literal as.
	 */
	public void setValue(String value)
	{
		this.value = value;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateNovaInput(StringBuilder, boolean)
	 */
	@Override
	public StringBuilder generateNovaInput(StringBuilder builder, boolean outputChildren)
	{
		if (!isWithinExternalContext() && isStringInstantiation())
		{
			return builder.append("new String(").append(value).append(')');
		}
		
		return builder.append(value);
	}
	
	/**
	 * Get the data type that the literal represents.<br>
	 * see {@link net.fathomsoft.nova.tree.Value#getDataType()} for
	 * more information on what possible data types there are.
	 * 
	 * @return The data type that the literal represents.
	 */
	public byte getDataType()
	{
		if (SyntaxUtils.isStringLiteral(value) && (!isStringInstantiation() || isWithinExternalContext()))
		{
			return 1;
		}
		
		return super.getDataType();
	}
	
	@Override
	public Value getReturnedNode()
	{
		return Accessible.super.getReturnedNode();
	}
	
	/**
	 * Get whether or not the value of the literal is an
	 * instantiation of a String from a String constructor.
	 * 
	 * @return Whether or not the value of the literal is an
	 * 		instantiation of a String from a String constructor.
	 */
	private boolean isStringInstantiation()
	{
		if (SyntaxUtils.isStringLiteral(value))
		{
			if (getParent() instanceof MethodCallArgumentList)
			{
				MethodCall node = (MethodCall)getAncestorOfType(MethodCall.class);
				
				if ("String".equals(node.getName()))
				{
					return false;
				}
			}
			
			return true;
		}
		
		return false;
	}
	
	public static boolean isNullLiteral(Node node)
	{
		return node instanceof Literal && ((Literal)node).value.equals(NULL_IDENTIFIER);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCHeader(StringBuilder)
	 */
	@Override
	public StringBuilder generateCHeader(StringBuilder builder)
	{
		return generateCSource(builder);
	}

	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSource(StringBuilder)
	 */
	@Override
	public StringBuilder generateCSource(StringBuilder builder)
	{
		return generateCSourceFragment(builder).append(";\n");
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSourceFragment(StringBuilder)
	 */
	@Override
	public StringBuilder generateCSourceFragment(StringBuilder builder)
	{
		if (isSpecialFragment())
		{
			return generateSpecialFragment(builder);
		}
		
		return generateCUseOutput(builder);
	}
	
	@Override
	public StringBuilder generateCUseOutput(StringBuilder builder)
	{
		if (!isWithinExternalContext() && isStringInstantiation())
		{
			Instantiation str = Instantiation.decodeStatement(getParent(), "new String(" + value + ")", getLocationIn(), true);
			
			return str.generateCSourceFragment(builder);
		}
		else if (isNullLiteral(this))
		{
			return generateCNullOutput(builder);
		}
		else if (value.equals(TRUE_IDENTIFIER))
		{
			return builder.append(1);
		}
		else if (value.equals(FALSE_IDENTIFIER))
		{
			return builder.append(0);
		}
		else if (SyntaxUtils.isInteger(value))
		{
			long l = Long.parseLong(value);
			
			if (l == Long.MIN_VALUE)
			{
				return builder.append("(").append(l + 1).append("LL").append(" - 1)");
			}
			else if (l > Integer.MAX_VALUE || l <= Integer.MIN_VALUE)
			{
				return builder.append(value).append("LL");
			}
		}
		
		return builder.append(value);
	}
	
	/**
	 * @see #decodeStatement(Node, String, Location, boolean)
	 * 
	 * @param mustBeLiteral Whether or not the statement must be a literal
	 * 		to decode.
	 */
	public static Value decodeStatement(Node parent, String statement, Location location, boolean require, boolean mustBeLiteral)
	{
		if (mustBeLiteral && !SyntaxUtils.isLiteral(parent, statement))
		{
			return null;
		}
		
		return decodeStatement(parent, statement, location, require);
	}
	
	/**
	 * Decode the given statement into a Literal instance, if
	 * possible. If it is not possible, this method returns null.
	 * <br>
	 * Example inputs include:<br>
	 * <ul>
	 * 	<li>123</li>
	 * 	<li>-321</li>
	 * 	<li>121.32</li>
	 * 	<li>'a'</li>
	 * 	<li>'\''</li>
	 * 	<li>"Text String"</li>
	 * </ul>
	 * 
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		Literal instance.
	 * @param location The location of the statement in the source code.
	 * @param require Whether or not to throw an error if anything goes wrong.
	 * @return The generated node, if it was possible to translated it
	 * 		into a Literal.
	 */
	public static Value decodeStatement(Node parent, String statement, Location location, boolean require)
	{
		String literalType = SyntaxUtils.getLiteralTypeName(parent, statement);
		
		if (literalType != null || parent.isWithinExternalContext())
		{
			Literal n = new Literal(parent, location);
			n.setValue(statement);
			
			if (literalType != null)
			{
				n.setType(literalType);
				
				if (literalType.equals("String"))
				{
					String expression = formatStringExpressions(statement);
					
					if (!expression.equals(statement))
					{
						return SyntaxTree.decodeValue(parent, expression, location, require);
					}
				}
			}
			
			return n;
		}
		else if (require)
		{
			SyntaxMessage.error("Could not decode literal '" + statement + "'", parent, location);
		}
		
		return null;
	}
	
	private static String formatStringExpressions(String str)
	{
		int index = str.indexOf("#{");
		int end = 0;
		int lastEnd = -1;
		
		StringBuilder builder = new StringBuilder();
		
		while (index >= 0 && end >= 0)
		{
			end = SyntaxUtils.findCharInBaseScope(str, '}', index + 2);
			
			if (end > index)
			{
				String expression = str.substring(index + 2, end).trim();
				
				if (index > 1)
				{
					builder.append(str.substring(lastEnd + 1, index)).append("\" + ");
				}
				
				builder.append('(').append(expression).append(')');
				
				if (end < str.length() - 2)
				{
					builder.append(" + \"");
				}
				else
				{
					return builder.toString();
				}
				
				index = str.indexOf("#{", end + 1);
			}
			
			lastEnd = end;
		}
		
		if (end > 0)
		{
			builder.append(str.substring(end + 1));
			
			return builder.toString();
		}
		
		return str;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#validate(int)
	 */
	@Override
	public ValidationResult validate(int phase)
	{
		if (value.equals(NULL_IDENTIFIER))
		{
			if (getParent() instanceof BinaryOperation)
			{
				BinaryOperation node = (BinaryOperation)getParent();
				
				Value side = null;
				
				if (!node.isComparison())
				{
					if (node.getParent() instanceof BinaryOperation)
					{
						node = (BinaryOperation)node.getParent();
						
						side = node.getLeftOperand();
					}
				}
				else
				{
					if (node.getLeftOperand() == this)
					{
						side = node.getRightOperand();
					}
					else
					{
						side = node.getLeftOperand();
					}
				}
				
				setType(side.getReturnedNode().getType());
			}
			else if (getAncestorOfType(Return.class) != null)
			{
				getParentMethod().cloneTo(this, false);
			}
		}
		
		return super.validate(phase);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public Literal clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		Literal node = new Literal(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public Literal cloneTo(Literal node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link Literal} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public Literal cloneTo(Literal node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		node.value = value;
		
		return node;
	}
	
	/**
	 * Test the Literal class type to make sure everything
	 * is working properly.
	 * 
	 * @return The error output, if there was an error. If the test was
	 * 		successful, null is returned.
	 */
	public static String test(TestContext context)
	{
		
		
		return null;
	}
}