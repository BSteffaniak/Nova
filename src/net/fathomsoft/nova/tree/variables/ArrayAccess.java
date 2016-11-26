package net.fathomsoft.nova.tree.variables;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.tree.*;
import net.fathomsoft.nova.util.*;

/**
 * Value extension that keeps track of any time an array is being
 * accessed. For example, the statement: "args[34]" is an array access.
 * Obviously the previous code segment does nothing, however these nodes
 * will be intertwined with method calls, assignments, if statements, etc.
 * 
 * @author	Braden Steffaniak
 * @since	v0.2 Mar 24, 2014 at 10:45:29 PM
 * @version	v0.2.36 Oct 13, 2014 at 12:16:42 AM
 */
public class ArrayAccess extends Node implements ArrayCompatible
{
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public ArrayAccess(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
		
		Dimensions dimensions = new Dimensions(this, locationIn);
		
		addChild(dimensions);
	}
	
	@Override
	public Dimensions getDimensions()
	{
		return (Dimensions)getChild(super.getNumDefaultChildren() + 0);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#getNumDefaultChildren()
	 */
	@Override
	public int getNumDefaultChildren()
	{
		return super.getNumDefaultChildren() + 1;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateNovaInput(StringBuilder, boolean)
	 */
	@Override
	public StringBuilder generateNovaInput(StringBuilder builder, boolean outputChildren)
	{
		return getDimensions().generateNovaInput(builder);
	}

	/**
	 * Decode the given statement into an ArrayAccess if possible.
	 * If it is not possible, the method will return null.<br>
	 * <br>
	 * An example input would be: "args[34]"
	 * 
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		ArrayAccess instance.
	 * @param location The location of the statement in the source code.
	 * @param require Whether or not to throw an error if anything goes
	 * 		wrong.
	 * @return The generated node, if it was possible to translated it
	 * 		into a ArrayAccess.
	 */
	public static Node decodeStatement(Node parent, String statement, Location location, boolean require)
	{
		if (SyntaxUtils.isValidArrayAccess(statement))
		{
			ArrayAccess n  = new ArrayAccess(parent, location);
			
			Bounds idBounds    = Regex.boundsOf(statement, Patterns.IDENTIFIER);
			
			String indexData   = statement;
			
			Bounds indexBounds = Regex.boundsOf(indexData, Patterns.ARRAY_BRACKETS_DATA);
			
			int    current     = indexBounds.getEnd() + 1;
			
			MethodCall overloadCall = null;
			MethodCall previousCall = null;
			
			while (current > 0)
			{
				String data = indexData.substring(indexBounds.getStart(), indexBounds.getEnd());
				
				if (!((Value)parent).getReturnedNode().isPrimitiveArray())
				{
					Value reference = ((Value)parent).getReturnedNode();
					
					ClassDeclaration clazz = reference.getTypeClass(false);
					
					if (!clazz.containsArrayBracketOverload())
					{
						reference.getTypeClass(false);
						SyntaxMessage.error("Type '" + clazz.getName() + "' does not implement array brackets", n);
					}
					
					if (!clazz.getArrayBracketOverload().alreadyDecoded())
					{
						reference.getTypeClass().getArrayBracketOverload().decodeShorthandAccessor();
					}
					
					MethodCall call = MethodCall.decodeStatement(reference, "get(" + data + ")", location, require, false, clazz.getArrayAccessorMethod());
					
					if (overloadCall == null)
					{
						overloadCall = call;
					}
					if (previousCall != null)
					{
						previousCall.setAccessedNode(call);
					}
					
					parent = call;
					previousCall = call;
				}
				else
				{
					Location newLoc = location.asNew();
					newLoc.setOffset(idBounds.getEnd() + location.getOffset());
					
					Node created = Literal.decodeStatement(n, data, newLoc, require, true);
					
					if (created == null)
					{
						created = SyntaxTree.decodeScopeContents(n.getAncestorWithScope(), data, newLoc, require);
						
						if (created == null)
						{
							SyntaxMessage.queryError("Unknown array access index '" + data + "'", n, newLoc, require);
							
							return null;
						}
					}
					
					n.addDimension(created);
				}
				
				indexBounds = Regex.boundsOf(indexData, current, Patterns.ARRAY_BRACKETS_DATA);
				current     = indexBounds.getEnd() + 1;
			}
			
			if (overloadCall != null)
			{
				return overloadCall;
			}
			
			return n;
		}
		
		return null;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public ArrayAccess clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		ArrayAccess node = new ArrayAccess(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public ArrayAccess cloneTo(ArrayAccess node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link ArrayAccess} with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public ArrayAccess cloneTo(ArrayAccess node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		return node;
	}
	
	/**
	 * Test the ArrayAccess class type to make sure everything
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