package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.util.Bounds;
import net.fathomsoft.nova.util.Location;
import net.fathomsoft.nova.util.Patterns;
import net.fathomsoft.nova.util.StringUtils;
import net.fathomsoft.nova.util.SyntaxUtils;

/**
 * MethodDeclaration extension that represents the declaration of an
 * external method node type. See {@link #decodeStatement(Node, String, Location, boolean)}
 * for more details on what correct inputs look like.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 9:10:53 PM
 * @version	v0.2.29 Aug 29, 2014 at 3:17:45 PM
 */
public class ExternalMethodDeclaration extends MethodDeclaration
{
	private String	alias;
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public ExternalMethodDeclaration(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.MethodDeclaration#isVirtual()
	 */
	@Override
	public boolean isVirtual()
	{
		return false;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.MethodDeclaration#isExternal()
	 */
	@Override
	public boolean isExternal()
	{
		return true;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.MethodDeclaration#containsBody()
	 */
	@Override
	public boolean containsBody()
	{
		return false;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.MethodDeclaration#generateCSourceName(java.lang.StringBuilder)
	 */
	@Override
	public StringBuilder generateCSourceName(StringBuilder builder)
	{
		return builder.append(alias);
	}
	
	/**
	 * Decode the given statement into a ExternalMethodDeclaration instance, if
	 * possible. If it is not possible, this method returns null.
	 * <br>
	 * Example inputs include:<br>
	 * <ul>
	 * 	<li>external int getAge(String name, int age)</li>
	 * 	<li>external int calculateArea(int width, int height)</li>
	 * 	<li>external void doNothing() as pointlessFunction</li>
	 * </ul>
	 * 
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		ExternalMethodDeclaration instance.
	 * @param location The location of the statement in the source code.
	 * @param require Whether or not to throw an error if anything goes
	 * 		wrong.
	 * @return The generated node, if it was possible to translated it
	 * 		into a Method.
	 */
	public static ExternalMethodDeclaration decodeStatement(Node parent, String statement, Location location, boolean require)
	{
		String methodSignature = findMethodSignature(statement, Patterns.EXTERNAL);
		
		if (methodSignature != null && methodSignature.length() > 0)
		{
			ExternalMethodDeclaration n = new ExternalMethodDeclaration(parent, location);
			
			String withAlias = methodSignature;
			methodSignature  = trimAlias(methodSignature);
			
			statement        = methodSignature;
			methodSignature  = n.formMethodSignature(methodSignature);
			
			MethodDeclaration method = NovaMethodDeclaration.decodeStatement(n, methodSignature, location.asNew(), require);
			
			if (method != null)
			{
				method.cloneTo(n);
				
				n.setExternal(true);
				n.alias = n.getName();
				n.setLocationIn(location);
				
				if (n.decodeAlias(withAlias, statement, require))
				{
					return n;
				}
			}
		}
		
		return null;
	}
	
	/**
	 * Form the Nova-style method signature.<br>
	 * For example:
	 * <blockquote><pre>
	 * String in  = "int getValue(String type)";
	 * String out = formMethodSignature(in);</pre></blockquote>
	 * The 'out' String would contain the value of "getValue(String type) -> int"
	 * 
	 * @param methodSignature The external type method signature.
	 * @return The Nova-style method signature.
	 */
	private String formMethodSignature(String methodSignature)
	{
		int paren, prev, end, start;
		
		paren = methodSignature.indexOf('(');
		
		prev  = StringUtils.findNextLetterIndex(methodSignature, paren - 1, -1);
		end   = StringUtils.findNextLetterIndex(methodSignature, prev - 1, -1, true);
		end   = StringUtils.findNextLetterIndex(methodSignature, end - 1, -1);
		start = StringUtils.findNextLetterIndex(methodSignature, end - 1, -1, true);
		
		if (end < 0)
		{
			SyntaxMessage.error("External method definition missing return type", this);
		}
		
		Bounds symbols = StringUtils.findGroupedCharsBounds(methodSignature, end + 1, StringUtils.SYMBOLS_CHARS, StringUtils.WHITESPACE);
		
		if (symbols.isValid())
		{
			end = symbols.getEnd();
		}
		
		String type = methodSignature.substring(start + 1, end + 1);
		
		methodSignature = methodSignature.substring(0, start + 1) + methodSignature.substring(end + 1);
		
		if (!type.equals("void"))
		{
			methodSignature += " -> " + type;
		}
		
		return StringUtils.trimSurroundingWhitespace(methodSignature);
	}
	
	/**
	 * Trim the alias signature off of the external method declaration.<br>
	 * For example:
	 * <blockquote><pre>
	 * String in  = "int getValue(String type) as ext_getValue";
	 * String out = trimAlias(in);</pre></blockquote>
	 * The 'out' String would contain "int getValue(String type)"
	 * 
	 * @param methodSignature The external method declaration signature to
	 * 		trim the alias from.
	 * @return The trimmed method signature.
	 */
	private static String trimAlias(String methodSignature)
	{
		int paren = methodSignature.lastIndexOf(')');
		int index = StringUtils.findLastWordIndex(methodSignature, "as");
		
		if (index <= paren)
		{
			return methodSignature;
		}
		
		return methodSignature.substring(0, StringUtils.findNextNonWhitespaceIndex(methodSignature, index - 1, -1) + 1);
	}
	
	/**
	 * Decode the alias name for the external method.<br>
	 * For example:
	 * <blockquote><pre>
	 * external int externalMethod() as myAlias</pre></blockquote>
	 * The above declaration declares an external method that can be
	 * called as "myAlias()" and returns an integer result.
	 * 
	 * @param statement The statement containing the method declaration.
	 * @param methodSignature The signature of the external method.
	 * @param require Whether or not to throw an error if anything goes
	 * 		wrong.
	 * @return Whether or not the alias was successfully decoded.
	 */
	private boolean decodeAlias(String statement, String methodSignature, boolean require)
	{
		String nameChange = statement.substring(methodSignature.length());
		
		nameChange = StringUtils.trimSurroundingWhitespace(nameChange);
		
		if (nameChange.length() <= 0)
		{
			return true;
		}
		
		iterateWords(nameChange);
		
		return true;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#interactWord(java.lang.String, net.fathomsoft.nova.util.Bounds, java.lang.String, java.lang.String, net.fathomsoft.nova.tree.Node.ExtraData)
	 */
	@Override
	public void interactWord(String word, Bounds bounds, String leftDelimiter, String rightDelimiter, ExtraData extra)
	{
		if (extra.getWordNumber() == 0)
		{
			if (!word.equals("as"))
			{
				fail(word, bounds);
			}
		}
		else if (extra.getWordNumber() == 1 && extra.isLastWord())
		{
			if (SyntaxUtils.isValidIdentifier(word))
			{
				setName(word);
			}
		}
		else
		{
			fail(word, bounds);
		}
	}
	
	/**
	 * Output an error because the word iteration failed.
	 * 
	 * @param word The word that failed to be decoded.
	 * @param bounds The Bounds of the word.
	 */
	private void fail(String word, Bounds bounds)
	{
		Location newLoc = new Location(getLocationIn());
		newLoc.setBounds(bounds.getStart(), bounds.getEnd());
		
		SyntaxMessage.error("Unknown text '" + word + "'", this, newLoc);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.variables.VariableDeclaration#validate(int)
	 */
	@Override
	public Node validate(int phase)
	{
		MethodDeclaration methods[] = getParentClass().getMethods(getName());
		
		if (methods.length > 1)
		{
			SyntaxMessage.error("Non-external method with name '" + alias + "' already exists", this);
		}
		
		return super.validate(phase);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location)
	 */
	@Override
	public ExternalMethodDeclaration clone(Node temporaryParent, Location locationIn)
	{
		ExternalMethodDeclaration node = new ExternalMethodDeclaration(temporaryParent, locationIn);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given {@link ExternalMethodDeclaration} with the data that is in
	 * the specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public ExternalMethodDeclaration cloneTo(ExternalMethodDeclaration node)
	{
		super.cloneTo(node);
		
		return node;
	}
	
	/**
	 * Test the {@link ExternalMethodDeclaration} class type to make sure everything
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