package net.fathomsoft.fathom.tree.exceptionhandling;

import net.fathomsoft.fathom.error.SyntaxMessage;
import net.fathomsoft.fathom.tree.BinaryOperatorNode;
import net.fathomsoft.fathom.tree.IfStatementNode;
import net.fathomsoft.fathom.tree.TreeNode;
import net.fathomsoft.fathom.tree.variables.LocalVariableNode;
import net.fathomsoft.fathom.util.Bounds;
import net.fathomsoft.fathom.util.Location;
import net.fathomsoft.fathom.util.Patterns;
import net.fathomsoft.fathom.util.Regex;

/**
 * 
 * 
 * @author	Braden Steffaniak
 * @since	Mar 22, 2014 at 4:01:44 PM
 * @since	v
 * @version	Mar 22, 2014 at 4:01:44 PM
 * @version	v
 */
public class CatchNode extends ExceptionHandlingNode
{
	public CatchNode()
	{
		
	}
	
	public LocalVariableNode getException()
	{
		return (LocalVariableNode)getChild(0);
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateJavaSourceOutput()
	 */
	@Override
	public String generateJavaSourceOutput()
	{
		return null;
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateCHeaderOutput()
	 */
	@Override
	public String generateCHeaderOutput()
	{
		return null;
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateCSourceOutput()
	 */
	@Override
	public String generateCSourceOutput()
	{
		StringBuilder builder = new StringBuilder();
		
		builder.append("CATCH ").append('(').append("1").append(')').append('\n');
		builder.append('{').append('\n');
		
		for (int i = 0; i < getChildren().size(); i++)
		{
			TreeNode child = getChild(i);
			
			if (child != getException())
			builder.append(child.generateCSourceOutput());
		}
		
		builder.append('}').append('\n');
		
		return builder.toString();
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#generateCSourceFragment()
	 */
	@Override
	public String generateCSourceFragment()
	{
		return null;
	}
	
	public static CatchNode decodeStatement(TreeNode parent, String statement, Location location)
	{
		if (Regex.matches(statement, 0, Patterns.PRE_CATCH))
		{
			CatchNode n = new CatchNode();
			
			Bounds bounds = Regex.boundsOf(statement, Patterns.POST_CATCH);
			
			if (bounds.getStart() >= 0)
			{
				String contents = statement.substring(bounds.getStart(), bounds.getEnd());
				
				Location newLoc = new Location();
				newLoc.setLineNumber(location.getLineNumber());
				newLoc.setOffset(location.getOffset() + bounds.getStart());
				
				LocalVariableNode exception = LocalVariableNode.decodeStatement(parent, contents, newLoc);
				
				if (exception != null)
				{
					n.addChild(exception);
					
					return n;
				}
				
				SyntaxMessage.error("Incorrect Exception declaration", newLoc);
			}
			else
			{
				SyntaxMessage.error("Catch declaration missing Exception type", location);
			}
		}
		
		return null;
	}

	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#clone()
	 */
	@Override
	public CatchNode clone()
	{
		CatchNode clone = new CatchNode();
		
		for (int i = 0; i < getChildren().size(); i++)
		{
			TreeNode child = getChild(i);
			
			clone.addChild(child.clone());
		}
		
		return clone;
	}
}