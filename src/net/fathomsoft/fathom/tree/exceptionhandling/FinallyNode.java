/**
 * The Fathom Programming Language. Write Unbelievable Code.
 *  Copyright (C) 2014  Braden Steffaniak <BradenSteffaniak@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package net.fathomsoft.fathom.tree.exceptionhandling;

import net.fathomsoft.fathom.tree.TreeNode;
import net.fathomsoft.fathom.util.Location;
import net.fathomsoft.fathom.util.Patterns;
import net.fathomsoft.fathom.util.Regex;

/**
 * ExceptionHandlingNode extension that represents the declaration of a
 * finally node type. See {@link #decodeStatement(TreeNode, String, Location)}
 * for more details on what correct inputs look like.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Mar 22, 2014 at 4:02:21 PM
 * @version	v0.2 Apr 7, 2014 at 7:58:42 PM
 */
public class FinallyNode extends ExceptionHandlingNode
{
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
		
		builder.append("FINALLY").append('\n');
		builder.append('{').append('\n');
		
		for (int i = 0; i < getChildren().size(); i++)
		{
			TreeNode child = getChild(i);
			
			builder.append(child.generateCSourceOutput());
		}
		
		builder.append('}').append('\n');
		builder.append("END_TRY;").append('\n');
		
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
	
	/**
	 * Decode the given statement into a FinallyNode instance, if
	 * possible. If it is not possible, this method returns null.
	 * <br>
	 * The only correct input is "finally"
	 * 
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		FinallyNode instance.
	 * @param location The location of the statement in the source code.
	 * @return The generated node, if it was possible to translated it
	 * 		into a FinallyNode.
	 */
	public static FinallyNode decodeStatement(TreeNode parent, String statement, Location location)
	{
		if (Regex.matches(statement, 0, Patterns.FINALLY))
		{
			FinallyNode n = new FinallyNode();
			
			return n;
		}
		
		return null;
	}
	
	/**
	 * @see net.fathomsoft.fathom.tree.TreeNode#clone()
	 */
	@Override
	public FinallyNode clone()
	{
		FinallyNode node = new FinallyNode();
		
		return clone(node);
	}
	
	/**
	 * Fill the given FinallyNode with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public FinallyNode clone(FinallyNode node)
	{
		super.clone(node);
		
		for (int i = 0; i < getChildren().size(); i++)
		{
			TreeNode child = getChild(i);
			
			node.addChild(child.clone());
		}
		
		return node;
	}
}