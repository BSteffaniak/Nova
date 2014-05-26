/**
 * The Nova Programming Language. Write Explosive Code.
 * Copyright (C) 2014  Braden Steffaniak <BradenSteffaniak@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * The Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package net.fathomsoft.nova.tree;

/**
 * TreeNode extension that represents the initialization section of the
 * for loop. For instance: "for (int i = 0; i < 10; i++)" the first
 * section containing "int i = 0" is the initialization section.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 10:01:46 PM
 * @version	v0.2.7 May 25, 2014 at 9:16:48 PM
 */
public class LoopInitializationNode extends TreeNode
{
	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#TreeNode(TreeNode)
	 */
	public LoopInitializationNode(TreeNode temporaryParent)
	{
		super(temporaryParent);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.TreeNode#clone(TreeNode)
	 */
	@Override
	public LoopInitializationNode clone(TreeNode temporaryParent)
	{
		LoopInitializationNode node = new LoopInitializationNode(temporaryParent);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given LoopInitializationNode with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public LoopInitializationNode cloneTo(LoopInitializationNode node)
	{
		super.cloneTo(node);
		
		return node;
	}
}