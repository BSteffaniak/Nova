package net.fathomsoft.nova.tree.variables;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.tree.*;
import net.fathomsoft.nova.tree.generics.GenericTypeArgument;
import net.fathomsoft.nova.tree.generics.GenericTypeArgumentList;
import net.fathomsoft.nova.tree.generics.GenericTypeParameter;
import net.fathomsoft.nova.tree.generics.GenericTypeParameterDeclaration;
import net.fathomsoft.nova.util.Location;

/**
 * {@link IIdentifier} extension that represents
 *
 * @author	Braden Steffaniak
 */
public class ObjectReference extends Variable
{
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public ObjectReference(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
		
		GenericTypeArgumentList args = new GenericTypeArgumentList(this, locationIn.asNew());
		
		addChild(0, args, this);
	}
	
	@Override
	public ClassDeclaration getTypeClass()
	{
		return getParentClass();
	}
	
	public ObjectReference(CallableMethod method)
	{
		this((Node)method);
	}
	
	@Override
	public GenericTypeArgument getGenericTypeArgumentFromParameter(GenericTypeParameter param)
	{
		if (param.getParentMethod() != null)
		{
			return null;
		}
		
		GenericTypeParameterDeclaration params = getParentClass().getGenericTypeParameterDeclaration();
		
		for (int i = 0; i < params.getNumVisibleChildren(); i++)
		{
			if (params.getVisibleChild(i).getName().equals(param.getType()))
			{
				return getGenericTypeArgumentList().getVisibleChild(i);
			}
		}
		
		GenericTypeArgument arg = new GenericTypeArgument(this, null);
		arg.setTypeValue(param.getDefaultType());
		
		return arg;
	}
	
	@Override
	public GenericTypeArgumentList getGenericTypeArgumentList()
	{
		return (GenericTypeArgumentList)getChild(0);
	}
	
	public ObjectReference(MethodDeclaration method)
	{
		this((Node)method);
	}
	
	private ObjectReference(Node method)
	{
		super(method, method.getLocationIn().asNew());
		
		String   identifier = getObjectReferenceIdentifier((CallableMethod)method);
		Variable var        = SyntaxTree.getUsableExistingNode(method, identifier, method.getLocationIn());
		
		if (var != null)
		{
			//var.cloneTo(this, false);
			setDeclaration(var.getDeclaration());
			
			addChild(0, var.getGenericTypeArgumentList().clone(this, getLocationIn().asNew()), this);
		}
		else
		{
			setDeclaration(method.getParentClass());//.cloneTo(this, false);
			
			addChild(0, new GenericTypeArgumentList(this, getLocationIn()), this);
		}
	}
	
	@Override
	public Accessible getReferenceNode()
	{
		return null;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public ObjectReference clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		ObjectReference node = new ObjectReference(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public ObjectReference cloneTo(ObjectReference node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link ObjectReference} with the data that is in the
	 * specified node.
	 *
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public ObjectReference cloneTo(ObjectReference node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		return node;
	}
	
	/**
	 * Test the {@link ObjectReference} class type to make sure everything
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