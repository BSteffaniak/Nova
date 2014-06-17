package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.util.Location;
import net.fathomsoft.nova.util.SyntaxUtils;

/**
 * LocalVariableNode extension that represents a Parameter of a method.
 * See {@link #decodeStatement(TreeNode, String, Location, boolean, boolean)} for more
 * details on what correct inputs look like.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 9:52:01 PM
 * @version	v0.2.13 Jun 17, 2014 at 8:45:35 AM
 */
public class ParameterNode extends LocalDeclarationNode
{
	private TreeNode	defaultValue;
	
	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#TreeNode(TreeNode, Location)
	 */
	public ParameterNode(TreeNode temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * Get the default value of the parameter, if no value is passed to
	 * the method.
	 * 
	 * @return The value that the parameter will be set to, if no value is
	 * 		passed to a method.
	 */
	public TreeNode getDefaultValue()
	{
		return defaultValue;
	}
	
	/**
	 * Set the default value of the parameter, if no value is passed to
	 * the method.
	 * 
	 * @param defaultValue The value that the parameter will be set to,
	 * 		if no value is passed to a method.
	 */
	public void setDefaultValue(TreeNode defaultValue)
	{
		this.defaultValue = defaultValue;
	}

	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#generateJavaSource()
	 */
	@Override
	public String generateJavaSource()
	{
		return getType() + " " + getName();
	}

	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#generateCHeader()
	 */
	@Override
	public String generateCHeader()
	{
		return generateCSource();
	}

	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#generateCSource()
	 */
	@Override
	public String generateCSource()
	{
		StringBuilder builder = new StringBuilder();
		
		if (isConstant())
		{
			builder.append(getConstantText()).append(' ');
		}
		
		builder.append(generateCTypeOutput());
		
		if (isArray())
		{
			builder.append(getArrayText());
		}
		
		if (isPointer())
		{
			builder.append('*');
		}
		else if (isReference())
		{
			builder.append('&');
		}
		
		if (!SyntaxUtils.isPrimitiveType(getType()) && !isExternalType())
		{
			builder.append('*');
		}
		
		builder.append(' ').append(generateCSourceName());
		
		return builder.toString();
	}
	
	/**
	 * Decode the given statement into a ParameterNode instance, if
	 * possible. If it is not possible, this method returns null.
	 * A parameter node is essentially a variable declaration, but in
	 * the context of a method declaration.<br>
	 * <br>
	 * Example inputs include:<br>
	 * <ul>
	 * 	<li>String name</li>
	 * 	<li>int age</li>
	 * 	<li>TreeNode parent</li>
	 * </ul>
	 * 
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		ParameterNode instance.
	 * @param location The location of the statement in the source code.
	 * @param require Whether or not to throw an error if anything goes wrong.
	 * @param scope Whether or not the given statement is the beginning of
	 * 		a scope.
	 * @return The generated node, if it was possible to translated it
	 * 		into a ParameterNode.
	 */
	public static ParameterNode decodeStatement(TreeNode parent, String statement, Location location, boolean require, boolean scope)
	{
		LocalDeclarationNode node = LocalDeclarationNode.decodeStatement(parent, statement, location, require, scope);
		
		if (node == null)
		{
//			SyntaxMessage.error("Could not asdf", parent, location);
			return null;
		}
		
		ParameterNode n = new ParameterNode(parent, location);
		node.cloneTo(n);
		
		return n;
	}
}