package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.tree.variables.FieldDeclaration;
import net.fathomsoft.nova.util.Location;

/**
 * {@link Node} extension that represents
 * 
 * @author	Braden Steffaniak
 * @since	v0.2.37 Oct 18, 2014 at 9:00:50 PM
 * @version	v0.2.39 Dec 7, 2014 at 3:17:17 AM
 */
public abstract class PropertyMethod extends BodyMethodDeclaration
{
	public static final String PARAMETER_NAME = "value";
	
	private boolean disabled;
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public PropertyMethod(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, new Location(locationIn.getLineNumber() + temporaryParent.getLocationIn().getLineNumber(), locationIn.getOffset(), locationIn.getStart(), locationIn.getEnd()));
	}
	
	public FieldDeclaration getParentField()
	{
		return (FieldDeclaration)getAncestorOfType(FieldDeclaration.class);
	}
	
	public boolean isDisabled()
	{
		return disabled;
	}
	
	public void setDisabled(boolean disabled)
	{
		this.disabled = disabled;
	}
	
	@Override
	public NovaMethodDeclaration[] getOverridingMethods()
	{
		if (isDisabled())
		{
			return new NovaMethodDeclaration[0];
		}
		
		return super.getOverridingMethods();
	}
	
	@Override
	public NovaMethodDeclaration getOverriddenMethod()
	{
		if (isDisabled())
		{
			return null;
		}
		
		return super.getOverriddenMethod();
	}
	
	@Override
	public StringBuilder generateCSourceName(StringBuilder builder, String uniquePrefix)
	{
		return super.generateCSourceName(builder, getMethodPrefix());
	}
	
	@Override
	public StringBuilder generateCHeader(StringBuilder builder)
	{
		if (isDisabled())
		{
			return builder;
		}
		
		return super.generateCHeader(builder);
	}
	
	@Override
	public StringBuilder generateCSource(StringBuilder builder)
	{
		if (isDisabled())
		{
			return builder;
		}
		
		return super.generateCSource(builder);
	}
	
	@Override
	public StringBuilder generateCSourcePrototype(StringBuilder builder)
	{
		if (isDisabled())
		{
			return builder;
		}
		
		return super.generateCSourcePrototype(builder);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public PropertyMethod cloneTo(PropertyMethod node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link PropertyMethod} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public PropertyMethod cloneTo(PropertyMethod node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		node.disabled = disabled;
		
		return node;
	}
	
	/**
	 * Test the {@link PropertyMethod} class type to make sure everything
	 * is working properly.
	 * 
	 * @return The error output, if there was an error. If the test was
	 * 		successful, null is returned.
	 */
	public static String test(TestContext context)
	{
		
		
		return null;
	}
	
	public abstract String getMethodPrefix();
}