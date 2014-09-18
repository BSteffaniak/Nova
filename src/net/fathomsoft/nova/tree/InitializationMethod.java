package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.util.Location;

/**
 * {@link BodyMethodDeclaration} extension that represents
 * 
 * @author	Braden Steffaniak
 * @since	v0.2.27 Aug 6, 2014 at 5:12:43 PM
 * @version	v0.2.28 Aug 20, 2014 at 12:10:45 AM
 */
public class InitializationMethod extends BodyMethodDeclaration
{
	public static final String	SUPER_IDENTIFIER = "super";
	public static final String	IDENTIFIER       = ParameterList.OBJECT_REFERENCE_IDENTIFIER;
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public InitializationMethod(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * Get whether or not the specified Method has overridden a method
	 * from a super class
	 * 
	 * @return Whether or not the specified Method has overridden a
	 * 		method from a super class.
	 */
	public boolean doesOverride()
	{
		return false;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.NovaMethodDeclaration#isOverridden()
	 */
	@Override
	public boolean isOverridden()
	{
		return false;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.NovaMethodDeclaration#isVirtual()
	 */
	@Override
	public boolean isVirtual()
	{
		return false;
	}
	
	public void createFrom(Constructor constructor)
	{
		String name   = getParentClass(true).generateTemporaryMethodName();
		String params = constructor.getParameterList().generateNovaInput().toString();
		
		NovaMethodDeclaration method = decodeStatement(getParentClass(true), "public " + name + '(' + params + ')', getLocationIn(), true);
		
		method.setName(ParameterList.OBJECT_REFERENCE_IDENTIFIER);
		method.cloneTo(this);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public InitializationMethod clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		InitializationMethod node = new InitializationMethod(temporaryParent, locationIn);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given {@link InitializationMethod} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public InitializationMethod cloneTo(InitializationMethod node)
	{
		super.cloneTo(node);
		
		return node;
	}
	
	/**
	 * Test the {@link InitializationMethod} class type to make sure everything
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