package net.fathomsoft.nova.tree.variables;

import net.fathomsoft.nova.Nova;
import net.fathomsoft.nova.tree.ClassDeclaration;
import net.fathomsoft.nova.tree.Identifier;
import net.fathomsoft.nova.tree.InstanceDeclaration;
import net.fathomsoft.nova.tree.LocalDeclaration;
import net.fathomsoft.nova.tree.Method;
import net.fathomsoft.nova.tree.Program;
import net.fathomsoft.nova.tree.SyntaxTree;
import net.fathomsoft.nova.tree.Node;
import net.fathomsoft.nova.tree.Value;
import net.fathomsoft.nova.tree.exceptionhandling.Exception;
import net.fathomsoft.nova.util.Location;

/**
 * Identifier extension that represents the use of a variable
 * type. Harnesses the needed information of each variable, such as
 * whether or not it is constant, external, or an array, and its type.
 * 
 * @author	Braden Steffaniak
 * @since	v0.1 Jan 5, 2014 at 9:02:42 PM
 * @version	v0.2.13 Jun 17, 2014 at 8:45:35 AM
 */
public class Variable extends Identifier
{
	private boolean				constantVal, external, forceOriginal;
	
	private static final String	NULL_TEXT	= "0";
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public Variable(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	/**
	 * Get whether or not the variable is external. For more information
	 * on external variables, see {@link #setExternal(boolean)}.
	 * 
	 * @return Whether or not the variable is external.
	 */
	public boolean isExternal()
	{
		if (getParent() instanceof Field)
		{
			Field field = (Field)getParent();
			
			return field.isExternal();
		}
		
		return external;
	}
	
	/**
	 * Set whether or not the variable is external. A variable is external
	 * if it is referenced from a language outside of Nova. For example,
	 * a variable from the C language. Furthermore, a variable is external
	 * if it begins with an externally imported C file's name.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * import "externalFile.h";
	 * 
	 * ...
	 * 
	 * public static void main(String args[])
	 * {
	 *	// This is the external variable declaration.
	 * 	externalFile.externalType varName;
	 * 	
	 * 	// This is the external variable assignment.
	 * 	varName = externalFile.variableInstance;
	 * }</pre></blockquote>
	 * In this example, 'externalFile' is the C header file that is
	 * imported. 'variableInstance' is the name of a variable that
	 * is contained within the imported header file.<br>
	 * 
	 * @param external Whether or not the variable will be external.
	 */
	public void setExternal(boolean external)
	{
		this.external = external;
		
		forceOriginal = true;
	}
	
	/**
	 * Get whether or not the variable's value is constant. To
	 * see more detail, look at {@link #setConstant(boolean)}.
	 * 
	 * @return Whether or not the variable's value is constant.
	 */
	public boolean isConstant()
	{
		return constantVal;
	}
	
	/**
	 * Get the C equivalent of the 'constant' keyword.
	 * 
	 * @return The C equivalent of the 'constant' keyword.
	 */
	public String getConstantText()
	{
		return "const";
	}
	
	/**
	 * Set whether or not the variable's value is constant.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * private constant int MAX_PEOPLE = 10;</pre></blockquote>
	 * This variable is constant, as defined by the 'constant' keyword.
	 * 
	 * @param constVal Whether or not the variable's value
	 * 		is constant.
	 */
	public void setConstant(boolean constVal)
	{
		this.constantVal = constVal;
	}
	
	/**
	 * Set the name of the Variable.
	 * 
	 * @see net.fathomsoft.nova.tree.Identifier#setName(java.lang.String)
	 * 
	 * @param name The String to set as the new name.
	 */
	public void setName(String name)
	{
		setName(name, false);
	}
	
	/**
	 * Set the name of the Variable. You specify whether or not you want
	 * the output in the C language to be the original given name,
	 * or if it will differentiate it depending on its scope. 
	 * 
	 * @param name The String to set as the new name.
	 * @param forceOriginal Whether or not the name will be output in the
	 * 		c code verbatim.
	 */
	public void setName(String name, boolean forceOriginal)
	{
		this.forceOriginal = forceOriginal;
		
		super.setName(name);
	}
	
	/**
	 * Whether or not you want the output in the C language to be the
	 * original given name, or if it will differentiate it depending on
	 * its scope. 
	 * 
	 * @param forceOriginal Whether or not the name will be output in the
	 * 		c code verbatim.
	 */
	public void setForceOriginalName(boolean forceOriginal)
	{
		this.forceOriginal = forceOriginal;
	}
	
	/**
	 * Set a specified attribute to true.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * private static int index;</pre></blockquote>
	 * <u><code>private</code></u> sets the visibility of the declaration
	 * to private. <u><code>static</code></u> sets the variable as static.
	 * 
	 * @param attribute The attribute to set true.
	 */
	public void setAttribute(String attribute)
	{
		setAttribute(attribute, -1);
	}
	
	/**
	 * Set a specified attribute to true.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * private static int index;</pre></blockquote>
	 * <u><code>private</code></u> is the first attribute (index: 0) that
	 * sets the visibility of the declaration to private.
	 * "<u><code>static</code></u>" is the second attribute (index: 1) that
	 * sets the variable as static.
	 * 
	 * @param attribute The attribute to set true.
	 * @param argNum The index of the attribute in the order that it
	 * 		came in.
	 */
	public boolean setAttribute(String attribute, int argNum)
	{
		if (attribute.equals("constant"))
		{
			setConstant(true);
		}
		else
		{
			return false;
		}
		
		return true;
	}
	
	/**
	 * Compare the specified variable with the given one to see if they
	 * come from the same declaration.
	 * 
	 * @param other The variable to compare with.
	 * @return Whether or not the variables come from the same
	 * 		declaration.
	 */
	public boolean isSameVariable(Variable other)
	{
		Variable first  = getDeclaration();
		Variable second = other.getDeclaration();
		
		return first == second;
	}
	
	/**
	 * Get the text that represents the java 'null' in the C language.
	 * 
	 * @return The text that represents the java 'null' in the C language.
	 */
	public static String getNullText()
	{
		return NULL_TEXT;
	}
	
	/**
	 * Generate the representation of when the variable is being used, in
	 * action, rather than being declared.<br>
	 * <br>
	 * For example:<br>
	 * <blockquote><pre>
	 * Person p;
	 * p.getName();</pre></blockquote>
	 * The first line shows the declaration of the Variable. The second
	 * line demonstrates a "variable use" for the "p" variable.
	 * Essentially, the "variable use" output is exactly what it says,
	 * what the variable looks like when it is being used to do something.
	 * 
	 * @return What the variable looks like when it is being used to do
	 * 		something.
	 */
	public String generateUseOutput()
	{
		return generateUseOutput(false);
	}
	
	/**
	 * Generate the representation of when the variable is being used, in
	 * action, rather than being declared.<br>
	 * <br>
	 * For example:<br>
	 * <blockquote><pre>
	 * Person p;
	 * p.getName();</pre></blockquote>
	 * The first line shows the declaration of the Variable. The second
	 * line demonstrates a "variable use" for the "p" variable.
	 * Essentially, the "variable use" output is exactly what it says,
	 * what the variable looks like when it is being used to do something.
	 * 
	 * @param pointer Whether or not the variable is to be accessed by a
	 * 		pointer.
	 * @return What the variable looks like when it is being used to do
	 * 		something.
	 */
	public String generateUseOutput(boolean pointer)
	{
		StringBuilder builder = new StringBuilder();
		
		if (!isSpecialFragment())
		{
			builder.append(generateDataTypeOutput());
		}
		
		Field field = null;
		
		Node parent = getParent();
		
		if (this instanceof ArrayAccess)
		{
			Variable node = SyntaxTree.getExistingNode(parent, getName());
			
			if (node instanceof Field)
			{
				field = (Field)node;
			}
		}
		else if (parent instanceof Array)
		{
			Variable node = SyntaxTree.getExistingNode(parent.getParent(), getName());
			
			if (node instanceof Field)
			{
				field = (Field)node;
			}
		}
		else if (this instanceof Field)
		{
			field = (Field)this;
		}
		
		if (field != null && !field.isExternal())
		{
			if (!field.isStatic())
			{
				Value ref = getReferenceNode();
				
				if (ref.isContainingClass(this))
				{
					if (pointer)
					{
						builder.append('(').append('*');
					}
					
					builder.append(Method.getObjectReferenceIdentifier());
					
					if (pointer)
					{
						builder.append(')');
					}
					
					builder.append("->");
			
					if (field.getVisibility() == Field.PRIVATE)
					{
						builder.append("prv").append("->");
					}
				}
			}
		}
		
		builder.append(generateCSourceName());
		
		return builder.toString();
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCHeader()
	 */
	@Override
	public String generateCHeader()
	{
		return generateCSource();
	}

	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSource()
	 */
	@Override
	public String generateCSource()
	{
		StringBuilder builder = new StringBuilder();
		
		if (isDeclaration())
		{
			if (isConstant())
			{
				builder.append(getConstantText()).append(' ');
			}
			
			builder.append(generateCTypeOutput());
	
			if (isReference())
			{
				builder.append('&');
			}
			else if (isPointer())
			{
				builder.append('*');
			}
			if (isArray())
			{
				builder.append(getArrayText());
			}
			if (!isPrimitiveType() && !isExternalType())
			{
				builder.append('*');
			}
			
			builder.append(' ').append(generateCSourceFragment());//generateCSourceName());//generateCSourceFragment());
		}
		else
		{
			builder.append(generateCSourceFragment());
		}
		
		builder.append(';').append('\n');
		
		return builder.toString();
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateCSourceFragment()
	 */
	@Override
	public String generateCSourceFragment()
	{
		if (isSpecialFragment())
		{
			return generateSpecialFragment();
		}
		
		return generateUseOutput() + generateChildrenCSourceFragment();
		
//		return generateCSourceName();
	}
	
	/**
	 * Generate a variable name that will be used to keep the variables
	 * in their own "namespace" per-say.
	 * 
	 * @return The name of the variable that will be output to the C
	 * 		source output.
	 */
	public String generateCSourceName()
	{
		String name = getName();
		
		if (forceOriginal || isExternal())
		{
			return name;
		}
		
		ClassDeclaration clazz = getDeclaringClassDeclaration();
		
		if (this instanceof InstanceDeclaration)
		{
			InstanceDeclaration node = (InstanceDeclaration)this;
			
			if (node.isStatic())
			{
				return "static_" + Nova.LANGUAGE_NAME.toLowerCase() + "_" + clazz.generateUniquePrefix() + "_" + name;
			}
		}
		
		String str = Nova.LANGUAGE_NAME.toLowerCase() + "_";
		
		Variable existing = SyntaxTree.getExistingNode(getParent(), name);
		
		if (this instanceof Field || existing instanceof Field)
		{
			str += clazz.generateUniquePrefix();
		}
		else
		{
			LocalDeclaration declaration = (LocalDeclaration)existing;
			
			str += declaration.getScopeID();
		}
		
		str += "_" + name;
		
		return str;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#generateNovaInput(boolean)
	 */
	@Override
	public String generateNovaInput(boolean outputChildren)
	{
//		if (isSpecialFragment())
//		{
//			return getChild(0).generateNovaInput();
//		}
		
		StringBuilder builder = new StringBuilder();
		
		builder.append(getName());
		
		if (outputChildren)
		{
			Identifier accessed = getAccessedNode();
			
			if (accessed != null)
			{
				builder.append('.').append(accessed.generateNovaInput());
			}
		}
		
		return builder.toString();
	}
	
	/**
	 * Generate a String for the code used to free memory of the
	 * specified variable.
	 * 
	 * @return The generated String for the code.
	 */
	public String generateFreeOutput()
	{
		if (isConstant())
		{
			return "";
		}
		
		StringBuilder builder = new StringBuilder();
		
		if (isPrimitiveType() || isExternalType())
		{
			if (!isPrimitive())
			{
				builder.append("NOVA_FREE(").append(generateUseOutput(true)).append(");\n");
			}
		}
		else
		{
			builder.append(Nova.LANGUAGE_NAME.toLowerCase()).append("_del_").append(getType()).append('(').append('&').append(generateUseOutput(true)).append(", ").append(Exception.EXCEPTION_DATA_IDENTIFIER).append(");\n");
		}
		
		return builder.toString();
	}
	
	/**
	 * Get the ClassDeclaration instance that declared this variable.
	 * 
	 * @return The ClassDeclaration instance that declared this variable.
	 */
	public ClassDeclaration getDeclaringClassDeclaration()
	{
		Variable var = getDeclaration();
		
		return var.getClassDeclaration();
	}
	
	/**
	 * Get he Instance/LocalDeclaration that declares the
	 * specified variable.
	 * 
	 * @return The Instance/LocalDeclaration that declares the
	 * 		specified variable.
	 */
	public Variable getDeclaration()
	{
		Node    parent  = getParent();
		Program program = parent.getProgram();
		
		if (this instanceof Method)
		{
			return getClassDeclaration();
		}
		if (this instanceof LocalDeclaration)
		{
			return this;
		}
		if (isAccessed())
		{
			Value value = (Value)parent;
			
			ClassDeclaration clazz = program.getClassDeclaration(value.getType());
			
			return clazz.getField(getName());
		}
		// If the 'this.' part of the variable access was auto-removed.
		else if (this instanceof Field)
		{
			return getClassDeclaration().getField(getName());
		}
		
		return SyntaxTree.getExistingNode(parent, getName());
	}
	
	/**
	 * Get whether or not the Variable instance represents a
	 * declaration of a local variable.
	 * 
	 * @return Whether or not the instance represents a local variable
	 * 		declaration.
	 */
	public boolean isDeclaration()
	{
		if (this instanceof LocalDeclaration)
		{
			return true;
		}
		if (this instanceof InstanceDeclaration)
		{
			if (getAccessedNode() == null && (getParent().containsScope() || getParent() instanceof InstanceFieldList || getParent() instanceof StaticFieldList))
			{
				return true;
			}
		}
		
		return false;
	}
	
	/**
	 * Get whether or not the specified variable is being used as an
	 * action.<br>
	 * <br>
	 * For example:
	 * <blockquote><pre>
	 * //Scenario 1
	 * Node node;
	 * 
	 * //Scenario 2
	 * node.getParent();</pre></blockquote>
	 * <ul>
	 * 	<li>
	 * 		In scenario 1, the variable is a declaration, NOT an active
	 * 		variable.
	 * 	</li>
	 * 	<li>
	 * 		In scenario 2, the variable is an active variable because it is
	 * 		being used to access the "<code>getParent()</code>" method.
	 * 	</li>
	 * <ul>
	 * 
	 * @return Whether or not the specified variable is being used as an
	 * 		action.
	 */
	public boolean isActiveVariable()
	{
		return this instanceof LocalVariable || this instanceof Field;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location)
	 */
	@Override
	public Variable clone(Node temporaryParent, Location locationIn)
	{
		Variable node = new Variable(temporaryParent, locationIn);
		
		return cloneTo(node);
	}
	
	/**
	 * Fill the given Variable with the data that is in the
	 * specified node.
	 * 
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public Variable cloneTo(Variable node)
	{
		super.cloneTo(node);
		
		node.constantVal     = constantVal;
		node.external        = external;
		node.forceOriginal   = forceOriginal;
		
		return node;
	}
}
