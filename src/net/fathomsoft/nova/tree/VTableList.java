package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.ValidationResult;
import net.fathomsoft.nova.util.Location;

/**
 * {@link TypeList} extension that represents
 * 
 * @author	Braden Steffaniak
 */
public class VTableList extends TypeList<VTable>
{
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public VTableList(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	public ExtensionVTable getExtensionVTable()
	{
		return (ExtensionVTable)getChild(super.getNumDefaultChildren() + 0);
	}
	
	public InterfaceVTable getInterfaceVTable()
	{
		return (InterfaceVTable)getChild(super.getNumDefaultChildren() + 1);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#validate(int)
	 */
	@Override
	public ValidationResult validate(int phase)
	{
		ValidationResult result = super.validate(phase);
		
		if (result.skipValidation())
		{
			return result;
		}
		
		if (getNumVisibleChildren() <= 0)
		{
			ExtensionVTable extension = new ExtensionVTable(this, Location.INVALID);
			InterfaceVTable inter     = new InterfaceVTable(this, Location.INVALID);
			
			addChild(extension);
			addChild(inter);
		}
		
		return result;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public VTableList clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		VTableList node = new VTableList(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public VTableList cloneTo(VTableList node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link VTableList} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public VTableList cloneTo(VTableList node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		return node;
	}
	
	/**
	 * Test the {@link VTableList} class type to make sure everything
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