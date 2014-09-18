package net.fathomsoft.nova.tree;

import java.util.HashMap;

import net.fathomsoft.nova.Nova;
import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.util.Location;

/**
 * Node extension that represents a whole Nova program. The
 * purpose of this Node is to keep track of each FileDeclaration within
 * a compiled program and contain methods to manipulate the
 * FileDeclarations.
 * 
 * @author	Braden Steffaniak
 * @since	v0.2 Apr 14, 2014 at 11:52:33 PM
 * @version	v0.2.26 Aug 6, 2014 at 2:48:50 PM
 */
public class Program extends Node
{
	private SyntaxTree	tree;
	
	private Nova		controller;
	
	private final HashMap<String, Integer>	files = new HashMap<String, Integer>();
	
	/**
	 * Instantiate and initialize a Program that contains a reference
	 * to the compiler's controller.
	 * 
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 * 
	 * @param controller The controller of the compiler.
	 */
	public Program(Nova controller, SyntaxTree tree)
	{
		super(null, null);
		
		this.controller = controller;
		this.tree       = tree;
	}
	
	/**
	 * Override addChild(Node) method to make it synchronized. Needs
	 * to be synchronized so that the threads dont try to write their
	 * file nodes to the Program at the same time and end up creating
	 * empty spaces in the tree.
	 * 
	 * @see net.fathomsoft.nova.tree.Node#addChild(Node)
	 */
	public synchronized void addChild(Node child)
	{
		FileDeclaration file = (FileDeclaration)child;
		
		files.put(file.getName(), getNumChildren());
		
		super.addChild(child);
	}
	
	/**
	 * Add Imports for all of the classes within the same package as the
	 * given FileDeclaration.
	 */
	public void addAutoImports()
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			FileDeclaration child = (FileDeclaration)getChild(i);
			
			child.addAutoImports();
		}
	}
	
	/**
	 * Add Imports for all of the classes within the same package as the
	 * given FileDeclaration.
	 * 
	 * @param file The FileDeclaration to add the Imports to.
	 */
	public void addAutoImports(FileDeclaration file)
	{
		String dir = file.getFile().getParent();
		
		for (int i = 0; i < getNumChildren(); i++)
		{
			FileDeclaration child = (FileDeclaration)getChild(i);
			
			if (file != child && dir.equals(child.getFile().getParent()))
			{
				file.addImport(child.getName());
			}
		}
	}
	
	/**
	 * Get the compiler's controller. The controller is used for
	 * logging, error output, and other compiler options.
	 * 
	 * @return The compiler's controller instance.
	 */
	public Nova getController()
	{
		return controller;
	}
	
	/**
	 * Get the Program's ClassDeclaration with the specified name.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * public class Person
	 * {
	 * 	
	 * 	...
	 * 	
	 * }</pre></blockquote>
	 * <br>
	 * A call like: "<code>getClass("Person")</code>" would return the
	 * ClassDeclaration for the "<code>Person</code>" class.
	 * 
	 * @param className The name of the class to search for.
	 * @return The ClassDeclaration for the class, if it exists.
	 */
	public ClassDeclaration getClassDeclaration(String className)
	{
		if (!files.containsKey(className))
		{
			return null;
		}
		
		FileDeclaration node = (FileDeclaration)getChild(files.get(className));
		
		return node.getClassDeclaration(className);
	}
	
	/**
	 * Get the Program's FileDeclaration with the specified name.
	 * 
	 * @param filename The name of the file to search for.
	 * @return The FileDeclaration for the file, if it exists.
	 */
	public FileDeclaration getFile(String filename)
	{
		return (FileDeclaration)getChild(files.get(filename));
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCHeader(StringBuilder)
	 */
	@Override
	public StringBuilder generateCHeader(StringBuilder builder)
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			getChild(i).generateCHeader();
		}
		
		return builder;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSource(StringBuilder)
	 */
	@Override
	public StringBuilder generateCSource(StringBuilder builder)
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			getChild(i).generateCSource();
		}
		
		return builder;
	}
	
	/**
	 * Format the C Header output to follow syntactical rules.
	 */
	public void formatCHeaderOutput()
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			FileDeclaration fileDeclaration = (FileDeclaration)getChild(i);
			
			fileDeclaration.formatCHeaderOutput();
		}
	}
	
	/**
	 * Format the C Source output to follow syntactical rules.
	 */
	public void formatCSourceOutput()
	{
		for (int i = 0; i < getNumChildren(); i++)
		{
			FileDeclaration fileDeclaration = (FileDeclaration)getChild(i);
			
			fileDeclaration.formatCSourceOutput();
		}
	}
	
	/**
	 * Format the C Header and Source output to follow syntactical rules.
	 */
	public void formatCOutput()
	{
		formatCHeaderOutput();
		formatCSourceOutput();
	}
	
	/**
	 * Get the phase that the SyntaxTree is currently decoding in.
	 * 
	 * @return The phase that the SyntaxTree is currently decoding in.
	 */
	public int getPhase()
	{
		return tree.getPhase();
	}
	
	public static Program generateTemporaryProgram(Nova controller)
	{
		return controller.getTree().getRoot();
	}
	
	public static Program generateTemporaryHierarchy(Nova controller)
	{
		return generateTemporaryProgram(controller);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public Program clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		Program node = new Program(controller, tree);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given {@link Program} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public Program cloneTo(Program node)
	{
		super.cloneTo(node);
		
		node.controller = controller;
		
		return node;
	}
	
	/**
	 * Test the Program class type to make sure everything
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