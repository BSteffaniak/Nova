package net.fathomsoft.fathom.tree;

import net.fathomsoft.fathom.error.SyntaxMessage;
import net.fathomsoft.fathom.util.Bounds;
import net.fathomsoft.fathom.util.Location;
import net.fathomsoft.fathom.util.SyntaxUtils;

/**
 * 
 * 
 * @author	Braden Steffaniak
 * @since	Jan 5, 2014 at 9:52:01 PM
 * @since	v
 * @version	Jan 5, 2014 at 9:52:01 PM
 * @version	v
 */
public class ParameterNode extends LocalVariableNode
{
//	private String	type;
	private String	defaultValue;
	
	public ParameterNode()
	{
		
	}
	
//	public String getType()
//	{
//		return type;
//	}
//	
//	public void setType(String type)
//	{
//		this.type = type;
//	}
	
	public String getDefaultValue()
	{
		return defaultValue;
	}
	
	public void setDefaultValue(String defaultValue)
	{
		this.defaultValue = defaultValue;
	}

	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateJavaSourceOutput()
	 */
	@Override
	public String generateJavaSourceOutput()
	{
		return getType() + " " + getName();
	}

	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateCHeaderOutput()
	 */
	@Override
	public String generateCHeaderOutput()
	{
		return generateCSourceOutput();
	}

	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateCSourceOutput()
	 */
	@Override
	public String generateCSourceOutput()
	{
		StringBuilder builder = new StringBuilder();
		
		builder.append(getType());
		
		if (isArray())
		{
			builder.append(getArrayText());
		}
		
		if (!SyntaxUtils.isPrimitiveType(getType()))
		{
			builder.append(getPointerText());
		}
		
		builder.append(' ').append(getName());
		
		return builder.toString();
	}
	
	public static ParameterNode decodeStatement(TreeNode parentNode, String statement, final Location location)
	{
		LocalVariableNode node = LocalVariableNode.decodeStatement(parentNode, statement, location);
		
		ParameterNode n = new ParameterNode();
		n.setArrayDimensions(node.getArrayDimensions());
		n.setName(node.getName());
		n.setType(node.getType());
		
		return n;
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#clone()
	 */
	@Override
	public ParameterNode clone()
	{
		ParameterNode clone = new ParameterNode();
		clone.setName(getName());
		clone.setConst(isConst());
		clone.setArrayDimensions(getArrayDimensions());
		clone.setType(getType());
		clone.setReference(isReference());
		clone.setPointer(isPointer());
		clone.setDefaultValue(getDefaultValue());
		
		for (int i = 0; i < getChildren().size(); i++)
		{
			TreeNode child = getChild(i);
			
			clone.addChild(child.clone());
		}
		
		return clone;
	}
}