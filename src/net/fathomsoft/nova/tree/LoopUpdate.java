package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.util.Location;

/**
 * Node extension that represents the update section of the for loop.
 * For instance: "for (int i = 0; i &lt; 10; i++)" the last section
 * containing "i++" is the update section.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 10:03:37 PM
 * @version	v0.2.26 Aug 6, 2014 at 2:48:50 PM
 */
public class LoopUpdate extends Node
{
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public LoopUpdate(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public LoopUpdate clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		LoopUpdate node = new LoopUpdate(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public LoopUpdate cloneTo(LoopUpdate node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link LoopUpdate} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public LoopUpdate cloneTo(LoopUpdate node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		return node;
	}
	
	/**
	 * Test the LoopUpdate class type to make sure everything
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