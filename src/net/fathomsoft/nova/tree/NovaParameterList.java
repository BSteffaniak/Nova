package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.Nova;
import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.util.Location;

/**
 * Node extension that represents a list of parameters for a nova
 * method.
 * 
 * @author	Braden Steffaniak
 * @since	v0.2.38 Nov 11, 2014 at 3:44:42 PM
 * @version	v0.2.38 Dec 6, 2014 at 5:19:17 PM
 */
public class NovaParameterList extends ParameterList<Parameter>
{
	private ReturnParameterList returnParameters;
	
	public NovaParameterList(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
		
		returnParameters = new ReturnParameterList(this, locationIn.asNew());
	}
	
	public int getNumReturnParameters()
	{
		return returnParameters.getNumVisibleChildren();
	}
	
	public void addReturnParameter(String type)
	{
		Parameter p = Parameter.decodeStatement(this, type + " ret" + (returnParameters.getNumVisibleChildren() + 1), getLocationIn().asNew(), true, false);
		p.setForceOriginalName(true);
		p.validateType();
		
		if (p.getDataType() == Value.VALUE)
		{
			p.setDataType(Value.POINTER);
		}
		else if (p.getDataType() == Value.POINTER)
		{
			p.setDataType(Value.DOUBLE_POINTER);
		}
		
		returnParameters.addChild(p);
	}
	
	public Value[] getReturnTypes()
	{
		Value[] types = new Value[getNumReturnParameters()];
		
		for (int i = 0; i < returnParameters.getNumVisibleChildren(); i++)
		{
			types[i] = returnParameters.getVisibleChild(i);
		}
		
		return types;
	}
	
	@Override
	public StringBuilder generateParameters(StringBuilder builder, boolean header)
	{
		super.generateParameters(builder, header);
		
		if (returnParameters.getNumVisibleChildren() > 0)
		{
			builder.append(", ");
			
			returnParameters.generateParameters(builder, header);
		}
		
		return builder;
	}
	
	@Override
	public Parameter getParameter(int parameterIndex)
	{
		Parameter param = super.getParameter(parameterIndex);
		
		if (param == null)
		{
			param = returnParameters.getVisibleChild(parameterIndex - getNumVisibleChildren());
		}
		
		return param;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public NovaParameterList clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		NovaParameterList node = new NovaParameterList(temporaryParent, locationIn);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given {@link NovaParameterList} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public NovaParameterList cloneTo(NovaParameterList node)
	{
		super.cloneTo(node);
		
		node.returnParameters = returnParameters.clone(node, getLocationIn().asNew(), true);
		
		return node;
	}
	
	/**
	 * Test the NovaParameterList class type to make sure everything
	 * is working properly.
	 * 
	 * @return The error output, if there was an error. If the test was
	 * 		successful, null is returned.
	 */
	public static String test(TestContext context)
	{
		
		
		return null;
	}
	
	private static class ReturnParameterList extends ParameterList<Parameter>
	{
		public ReturnParameterList(Node temporaryParent, Location locationIn)
		{
			super(temporaryParent, locationIn);
			
			slaughterEveryLastChild();
		}
		
		@Override
		public int getParameterOffset()
		{
			return 0;
		}
		
		/**
		 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
		 */
		@Override
		public ReturnParameterList clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
		{
			ReturnParameterList node = new ReturnParameterList(temporaryParent, locationIn);
			
			return cloneTo(node);
		}
		
		/**
		 * Fill the given {@link ReturnParameterList} with the data that is in the
		 * specified node.
		 * 
		 * @param node The node to copy the data into.
		 * @return The cloned node.
		 */
		public ReturnParameterList cloneTo(ReturnParameterList node)
		{
			super.cloneTo(node);
			
			return node;
		}
	}
}