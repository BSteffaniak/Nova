package net.fathomsoft.nova.tree;

import net.fathomsoft.nova.TestContext;
import net.fathomsoft.nova.ValidationResult;
import net.fathomsoft.nova.error.SyntaxMessage;
import net.fathomsoft.nova.util.Location;
import net.fathomsoft.nova.util.StringUtils;
import net.fathomsoft.nova.util.SyntaxUtils;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.function.BiFunction;
import java.util.function.Function;

/**
 * {@link Node} extension that represents
 *
 * @author	Braden Steffaniak
 */
public class ExternalCodeBlock extends Node implements ScopeAncestor
{
	private String ending;
	private String[] bounds;
	
	public String target;
	
	private int	uniqueID;
	
	private static HashMap<Integer, Scope> scopes = new HashMap<>();
	
	public static final String IDENTIFIER =  "external";
	
	/**cNode
	 * @see net.fathomsoft.nova.tree.Node#Node(Node, Location)
	 */
	public ExternalCodeBlock(Node temporaryParent, Location locationIn)
	{
		super(temporaryParent, locationIn);
	}
	
	@Override
	public int getUniqueID()
	{
		return ++uniqueID;
	}
	
	@Override
	public HashMap<Integer, Scope> getScopes()
	{
		return scopes;
	}
	
	/*private String replaceExternalInterpolations(String contents)
	{
		StringBuilder builder = new StringBuilder();
		
		int index = SyntaxUtils.findStringOutsideOfQuotes(contents, "${", 0);
		int end = 0;
		
		while (index >= 0)
		{
			builder.append(contents.substring(end, index));
			
			end = SyntaxUtils.findEndingBrace(contents, index + 2) + 1;
			
			String value = contents.substring(index + 2, end - 1).trim();
			
			builder.append(value);
			
			index = SyntaxUtils.findStringOutsideOfQuotes(contents, "${", end);
		}
		
		return builder.append(contents.substring(end)).toString();
	}*/
	
	public void setContents(String contents)
	{
		if (target != null && !target.equals(getProgram().getController().target))
		{
			return;
		}
		
		ArrayList<String> bounds = new ArrayList<>();
		
		int index = SyntaxUtils.findStringOutsideOfQuotes(contents, "#{", 0);
		int end = 0;
		
		while (index >= 0)
		{
			bounds.add(contents.substring(end, index));
			
			end = SyntaxUtils.findEndingBrace(contents, index + 2) + 1;
			
			String value = contents.substring(index + 2, end - 1).trim();
			
			//value = replaceExternalInterpolations(value);
			addChild(SyntaxTree.decodeScopeContents(getParent(), value, getLocationIn()), this);
			
			index = SyntaxUtils.findStringOutsideOfQuotes(contents, "#{", end);
		}
		
		ending = contents.substring(end);
		
		this.bounds = bounds.toArray(new String[0]);
	}
	
	public String joinContents(Function<Node, String> func)
	{
		String output = "";
		
		for (int i = 0; i < getNumVisibleChildren(); i++)
		{
			output += bounds[i] + func.apply(getVisibleChild(i));
		}
		
		return output + ending;
	}
	
	/**
	 * Decode the given statement into a {@link ExternalCodeBlock} instance, if
	 * possible. If it is not possible, this method returns null.<br>
	 * <br>
	 * Example inputs include:<br>
	 * <ul>
	 * 	<li></li>
	 * 	<li></li>
	 * 	<li></li>
	 * </ul>
	 *
	 * @param parent The parent node of the statement.
	 * @param statement The statement to try to decode into a
	 * 		{@link ExternalCodeBlock} instance.
	 * @param location The location of the statement in the source code.
	 * @param require Whether or not to throw an error if anything goes wrong.
	 * @return The generated node, if it was possible to translated it
	 * 		into a {@link ExternalCodeBlock}.
	 */
	public static ExternalCodeBlock decodeStatement(Node parent, String statement, Location location, boolean require)
	{
		String word = StringUtils.findNextWord(statement);
		
		if (word != null && word.equals(IDENTIFIER))
		{
			ExternalCodeBlock n = new ExternalCodeBlock(parent, location);
			
			String target = StringUtils.findNextWord(statement, word.length() + 1);
			
			if (target != null)
			{
				n.target = target.toLowerCase();
			}
			
			return n;
		}
		
		return null;
	}
	
	@Override
	public ValidationResult validate(int phase)
	{
		ValidationResult result = super.validate(phase);
		
		if (result.skipValidation())
		{
			return result;
		}
		
		if (phase == SyntaxTree.PHASE_PRE_GENERATION)
		{
			if (target != null && !target.equals(getProgram().getController().target))
			{
				detach();
				
				result.skipCycle = true;
			}
		}
		
		return result;
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#clone(Node, Location, boolean)
	 */
	@Override
	public ExternalCodeBlock clone(Node temporaryParent, Location locationIn, boolean cloneChildren)
	{
		ExternalCodeBlock node = new ExternalCodeBlock(temporaryParent, locationIn);
		
		return cloneTo(node, cloneChildren);
	}
	
	/**
	 * @see net.fathomsoft.nova.tree.Node#cloneTo(Node)
	 */
	public ExternalCodeBlock cloneTo(ExternalCodeBlock node)
	{
		return cloneTo(node, true);
	}
	
	/**
	 * Fill the given {@link ExternalCodeBlock} with the data that is in the
	 * specified node.
	 *
	 * @param node The node to copy the data into.
	 * @return The cloned node.
	 */
	public ExternalCodeBlock cloneTo(ExternalCodeBlock node, boolean cloneChildren)
	{
		super.cloneTo(node, cloneChildren);
		
		return node;
	}
	
	/**
	 * Test the {@link ExternalCodeBlock} class type to make sure everything
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