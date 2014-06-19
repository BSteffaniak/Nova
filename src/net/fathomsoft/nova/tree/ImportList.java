package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.util.Location;

/**
 * Node extension that contains children of the type Import.
 * Contains all of a files imports.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Apr 2, 2014 at 8:49:52 PM
 * @version	v0.2.14 Jun 18, 2014 at 10:11:40 PM
 */
public class ImportList extends Node
{
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public ImportList(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * Get whether or not the given location has been imported.
	 * 
	 * @param importLocation The location of the import.
	 * @return Whether or not the given location has been imported.
	 */
	public boolean containsImport(String importLocation)
	{
		return getImport(importLocation) != null;
	}
	
	/**
	 * Get the Import node with the given import location, if it exists.
	 * 
	 * @param importLocation The location of the import.
	 * @return The Import with the specified import location, if it
	 * 		exists.
	 */
	public Import getImport(String importLocation)
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			Import child = (Import)getChild(i);
			
			if (importLocation.equals(child.getLocationNode().getName()))
			{
				return child;
			}
		}
		
		return null;
	}
	
	/**
	 * Get whether or not the given location is an external C import.
	 * 
	 * @return Whether or not the given location is an external C import.
	 */
	public boolean isExternal(String importLocation)
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			Import child = (Import)getChild(i);
			
			if (child.isExternal() && child.getLocationNode().getName().equals(importLocation))
			{
				return true;
			}
		}
		
		return false;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCHeader(StringBuilder)
	 */
	@Override
	public StringBuilder generateCHeader(StringBuilder builder)
	{
		FileDeclaration file = getFileDeclaration();
		
		for (int i = 0; i < getNumChildren(); i++)
		{
			Import node = (Import)getChild(i);
			
			if (node.isExternal() || !file.getName().equals(node.getLocationNode().getName()))
			{
				node.generateCSource(builder);
			}
		}
		
		return builder;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSource(StringBuilder)
	 */
	@Override
	public StringBuilder generateCSource(StringBuilder builder)
	{
		FileDeclaration file = getFileDeclaration();

		Import importNode = Import.decodeStatement(this, "import \"" + file.getName() + "\"", getLocationIn(), true, false);
		
		return importNode.generateCSource(builder);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location)
	 */
	@Override
	public ImportList clone(Node temporaryParent, Location locationIn)
	{
		ImportList node = new ImportList(temporaryParent, locationIn);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given ImportList with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public ImportList cloneTo(ImportList node)
	{
		super.cloneTo(node);
		
		return node;
	}
}
