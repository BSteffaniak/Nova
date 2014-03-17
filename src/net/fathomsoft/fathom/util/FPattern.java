/**
 * The Fathom Programming Language. Write Unbelievable Code.
 *  Copyright (C) 2014  Braden Steffaniak <BradenSteffaniak@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package net.fathomsoft.fathom.util;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

/**
 * Class used to parse data with a compiled pattern.
 * 
 * @author	Braden Steffaniak
 * @since	Mar 10, 2014 at 8:20:09 PM
 * @since	v0.1
 * @version	Mar 10, 2014 at 8:20:09 PM
 * @version	v0.1
 */
public class FPattern
{
	private int											mode;
	
	private CollectionCase								start, brokeAt;

	private static final HashMap<String, Collection<?>>	collections;
	
	private static final char							SPECIAL_CHARS[];
	
	private static final int							PRE_MODE = 0, MAIN_MODE = 1, POST_MODE = 2;
	
	private static final String							keys[];
	
	/**
	 * Initialize the static data.
	 */
	static
	{
		SPECIAL_CHARS = new char[] { '`', '*', '+', '?', '"', '|', '-', '(', ')', '[', ']' };
		
		collections = new HashMap<String, Collection<?>>();

		insertCollection("`~",          new Character[]  {  }, true);
		insertCollection("`.",          new Character[]  { '\n', '\r' }, true);
		insertCollection("`s",          new Character[]  { '\n', '\t', ' ',  '\r' });
		insertCollection("`S",          new Collection[] { collections.get("`s") }, true);
		insertCollection("a-z",         new Character[]  { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' });
		insertCollection("A-Z",         new Character[]  { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' });
		insertCollection("0-9",         new Character[]  { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' });
		insertCollection("`alph",       new Collection[] { collections.get("a-z"), collections.get("A-Z") });
		insertCollection("`ALPH",       new Collection[] { collections.get("`alph") }, true);
		insertCollection("`alphanum",   new Collection[] { collections.get("`alph"), collections.get("0-9") });
		insertCollection("`ALPHANUM",   new Collection[] { collections.get("`alphanum") }, true);
		insertCollection("`2startps",   new String[]     { "((" });
		insertCollection("`2endps",     new String[]     { "))" });
		insertCollection("`identifier", new Collection[] { collections.get("`alphanum"), createCollection("", new Character[] { '_', '*', '&' }, false) });
		
		keys = collections.keySet().toArray(new String[0]);
	}
	
	/**
	 * Insert a collection into the standard collections used for all
	 * of the patterns.
	 * 
	 * @param key The key used to access the collection.
	 * @param array The array of data that the collection encompasses.
	 */
	private static <E> void insertCollection(String key, E array[])
	{
		insertCollection(key, array, false);
	}
	
	/**
	 * Insert a collection into the standard collections used for all
	 * of the patterns.
	 * 
	 * @param key The key used to access the collection.
	 * @param array The array of data that the collection encompasses.
	 * @param opposite Whether or not the pattern should be tested for or
	 * 		against the data in the array.
	 */
	private static <E> void insertCollection(String key, E array[], boolean opposite)
	{
		Collection<?> collection = createCollection(key, array, opposite);
		
		collections.put(key, collection);
	}
	
	/**
	 * Create a collection with the specified key and data.
	 * 
	 * @param key The key used to access the Collection.
	 * @param array The array holding the data that the Collection
	 * 		will hold.
	 * @param opposite Whether or not the pattern should be tested for or
	 * 		against the data in the array.
	 * @return The new Collection that was created based on the given
	 * 		data.
	 */
	private static <E> Collection<E> createCollection(String key, E array[], boolean opposite)
	{
		Class<?> type = array.getClass().getComponentType();
		
		Collection<E> collection = new Collection<E>(type, key, opposite);
		
		HashSet<E> set = new HashSet<E>();
		
		for (int i = 0; i < array.length; i++)
		{
			set.add(array[i]);
		}
		
		collection.setSet(set);
		
		return collection;
	}
	
	/**
	 * Create a TierPattern instance from the given pattern.
	 * 
	 * @param pattern The pattern describing what the TierPattern instance
	 * 		will look for in the data.
	 */
	public FPattern(String pattern)
	{
		String modes[] = divideModes(pattern);
		
		CollectionCase current = start;
		
		for (int i = 0; i < modes.length; i++)
		{
			CollectionCase newCase = compile(modes[i], PRE_MODE + i);
			
			if (current == null)
			{
				start = newCase;
			}
			else
			{
				current.getLast(true).setNext(newCase);
			}
			
			current = newCase;
		}
		
		current = start;
		
		while (current != null)
		{
			CollectionCase inner = current.getChild();
			
			while (inner != null)
			{
				inner = inner.getNext();
			}
			
			current = current.getNext();
		}
	}
	
	/**
	 * Compile the pattern for quick searching.<br>
	 * <br>
	 * The modes include:<br>
	 * <ul>
	 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
	 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
	 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
	 * </ul>
	 * 
	 * @param pattern The pattern to compile into usable data.
	 * @param mode The mode that is compiling.
	 * @return The first CollectionCase in the pattern.
	 */
	private CollectionCase compile(String pattern, int mode)
	{
		return compile(null, pattern, mode);
	}
	
	/**
	 * Compile the pattern for quick searching.<br>
	 * <br>
	 * The modes include:<br>
	 * <ul>
	 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
	 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
	 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
	 * </ul>
	 * 
	 * @param parent The parent CollectionCase of this pattern.
	 * @param pattern The pattern to compile into usable data.
	 * @param mode The mode that is compiling.
	 * @return The first CollectionCase in the pattern.
	 */
	private CollectionCase compile(CollectionCase parent, String pattern, int mode)
	{
		CollectionCase start   = null;
		CollectionCase current = null;
		CollectionCase prev    = null;

		int index = 0;

		while (index < pattern.length())
		{
			int startIndex = index;

			char c = pattern.charAt(index);

			if (c == '`' || c == '"' || c == '[' || c == '(')
			{
				current = getCollectionCase(index, parent, pattern, mode);
				
				index += current.getKey().length();

				boolean condensed = false;

				if (prev != null)
				{
					if (prev.getKey().equals(current.getKey()))
					{
						if (prev.bounds.end >= 0)
						{
							prev.bounds.start++;
							prev.bounds.end++;
							//prev.condensed = true;

							condensed = true;
						}
					}
				}
				
				if (!condensed)
				{
					if (prev != null)
					{
						prev.setNext(current);
					}
				
					prev = current;
				}
			}
			else if (prev != null)
			{
				if (c == '*')
				{
					prev.setBounds(0, -1);
				}
				else if (c == '+')
				{
					prev.bounds.end = -1;
				}
				else if (c == '?')
				{
					prev.setBounds(0, 1);
				}
				else if (containsChar(c, SPECIAL_CHARS))
				{

				}

				index++;
			}

			if (index == startIndex)
			{
				for (int i = 0; i < keys.length; i++)
				{
					String key = c + "";

					if (keys[i].equals(key))
					{
						current = createCollectionCase(parent, collections.get(key), mode);
						current.setKey(key);

						index += current.getKey().length();
						
						if (prev != null)
						{
							prev.setNext(current);
						}
						
						prev = current;
						
						break;
					}
				}
			}
			
			if (start == null && current != null)
			{
				start = current;
			}

			if (index == startIndex)
			{
				throw new TierExpressionException("Unexpected character type of '" + c + "' at offset: " + index);
			}
		}

		return start;
	}
	
	/**
	 * Create a CollectionCase instance from the given Collection
	 * instance.<br>
	 * <br>
	 * The modes include:<br>
	 * <ul>
	 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
	 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
	 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
	 * </ul>
	 * 
	 * @param parent The parent CollectionCase of this pattern.
	 * @param collection The Collection instance to create the
	 * 		CollectionCase from.
	 * @param mode The mode that is compiling.
	 * @return The new CollectionCase instance.
	 */
	private CollectionCase createCollectionCase(CollectionCase parent, Collection<?> collection, int mode)
	{
		CollectionCase colCase = new CollectionCase(mode);
		colCase.setParent(parent);
		colCase.addCollection(collection);
		
		return colCase;
	}
	
	/**
	 * Get the CollectionCase that is described at the specified index
	 * in the pattern. Creates the CollectionCase if necessary.<br>
	 * <br>
	 * The modes include:<br>
	 * <ul>
	 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
	 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
	 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
	 * </ul>
	 * 
	 * @param index The index to start the search at.
	 * @param parent The parent CollectionCase of this pattern.
	 * @param pattern The pattern String to search in.
	 * @param mode The mode that is compiling.
	 * @return The next CollectionCase at the specified index.
	 */
	private CollectionCase getCollectionCase(int index, CollectionCase parent, String pattern, int mode)
	{
		int  startIndex = index;

		char c          = pattern.charAt(index++);

		/* If the pattern is starting to describe a pre-defined
		 * Collection.
		 */
		if (c == '`')
		{
			if (index < pattern.length())
			{
				c = pattern.charAt(index++);

				while (!containsChar(c, SPECIAL_CHARS))
				{
					if (index >= pattern.length())
					{
						index = pattern.length() + 1;

						break;
					}

					c = pattern.charAt(index++);
				}

				String key = pattern.substring(startIndex, index - 1);

				CollectionCase colCase = createCollectionCase(parent, collections.get(key), mode);
				colCase.setKey(key);

				return colCase;
			}
			else
			{
				throw new TierExpressionException("Gravemark cannot end the statement; at offset: " + index);
			}
		}
		/* If A String literal is being used as a Collection.
		 */
		else if (c == '"')
		{
			if (index < pattern.length())
			{
				c = pattern.charAt(index++);

				while (true)
				{
					if (c == '"')
					{
						if (index > 0)
						{
							int count = 1;

							while (pattern.charAt(index - count - 1) == '\\')
							{
								count++;
							}

							// If it is the ending quotation.
							if (count % 2 == 1)
							{
								break;
							}
						}
					}

					if (index >= pattern.length())
					{
						throw new TierExpressionException("Missing end of starting quotation at offset " + startIndex);
					}

					c = pattern.charAt(index++);
				}

				String key   = pattern.substring(startIndex, index);
				String value = key.substring(1, key.length() - 1);

				if (value.length() > 0)
				{
					String data[] = new String[] { value };

					Collection<String> collection = createCollection(key, data, false);

					CollectionCase colCase = createCollectionCase(parent, collection, mode);
					colCase.setKey(key);
					colCase.setCumulative(false);

					return colCase;
				}
			}
			else
			{
				throw new TierExpressionException("Quotation cannot end the statement; at offset: " + index);
			}
		}
		else if (c == '(')
		{
			if (index < pattern.length())
			{
				index = StringUtils.findEndingMatch(pattern, index - 1, '(', ')', '\\') + 1;

				if (index <= 0)
				{
					throw new TierExpressionException("Missing end of starting parenthesis at offset " + startIndex);
				}

				String key   = pattern.substring(startIndex, index);
				String value = key.substring(1, key.length() - 1);

				CollectionCase colCase = new CollectionCase(mode);
				colCase.setParent(parent);
				colCase.setKey(key);
				colCase.setCumulative(true);
				colCase.setChild(compile(colCase, value, mode));

				return colCase;
			}
			else
			{
				throw new TierExpressionException("Starting parenthesis cannot end the statement; at offset: " + index);
			}
		}
		/* If a character matcher is being used as a Collection.
		 */
		else if (c == '[')
		{
			if (index < pattern.length())
			{
				index = StringUtils.findEndingMatch(pattern, index - 1, '[', ']', '\\') + 1;

				if (index <= 0)
				{
					throw new TierExpressionException("Missing end of starting bracket at offset " + startIndex);
				}

				String key   = pattern.substring(startIndex, index);
				String value = key.substring(1, key.length() - 1);

				if (value.length() > 0)
				{
					CollectionCase colCase = new CollectionCase(mode);
					colCase.setKey(key);
					colCase.setCumulative(false);

					ArrayList<Character> chars = new ArrayList<Character>();

					int     i   = 0;

					while (i < value.length())
					{
						char current = value.charAt(i);

						chars.add(current);

						if (current == '-')
						{
							if (i > 0 && i < value.length() - 1)
							{
								Collection<?> alph = collections.get("`alphanum");

								char prev = value.charAt(i - 1);
								char next = value.charAt(i + 1);

								if (alph.isMatch(prev) && alph.isMatch(next))
								{
									chars.remove(chars.size() - 1);
									chars.remove(chars.size() - 1);

									if (!colCase.containsCollection(alph))
									{
										colCase.addCollection(alph);
									}

									i++;
								}
							}
						}
						else if (current == '\\')
						{
							if (i < value.length() - 1)
							{
								char next = value.charAt(i + 1);

								if (containsChar(next, SPECIAL_CHARS))
								{
									chars.remove(chars.size() - 1);
								}
							}
						}

						i++;
					}

					Character data[] = chars.toArray(new Character[0]);

					Collection<Character> collection = createCollection(key, data, false);

					colCase.addCollection(collection);

					return colCase;
				}
			}
			else
			{
				throw new TierExpressionException("Bracket statement cannot end the statement; at offset: " + index);
			}
		}

		throw new TierExpressionException("Unknown symbol at offset: " + (index - 1));
	}
	
	/**
	 * Get the index of the first String that matches the pattern.
	 * 
	 * @param data The data to search for the pattern in.
	 * @return The index of the start of the match that was found.
	 */
	public int indexOf(String data)
	{
		return indexOf(data, 0);
	}
	
	/**
	 * Get the index of the String that matches the pattern after the
	 * given index.
	 * 
	 * @param data The data to search for the pattern in.
	 * @param index The index to start the search at.
	 * @return The index of the start of the match that was found.
	 */
	public int indexOf(String data, int index)
	{
		Bounds bounds = boundsOf(data, index);
		
		if (bounds == null)
		{
			return -1;
		}
		
		return bounds.start;
	}
	
	/**
	 * Get the bounds of the first String that matches the pattern.
	 * 
	 * @param data The data to search for the pattern in.
	 * @return A Bounds instance containing the start and end points
	 * 		of the match that was found.
	 */
	public Bounds boundsOf(String data)
	{
		return boundsOf(data, 0);
	}
	
	/**
	 * Get the bounds of the String that matches the pattern after the
	 * given index.
	 * 
	 * @param data The data to search for the pattern in.
	 * @param index The index to start the search at.
	 * @return A Bounds instance containing the start and end points
	 * 		of the match that was found.
	 */
	public Bounds boundsOf(String data, int index)
	{
		Bounds bounds = new Bounds();
		
		while (index < data.length())
		{
			bounds.start = -1;
			bounds.end   = -1;
			
			CollectionCase current = start;
			
			int startIndex = index;
			
			while (current != null)
			{
				if (brokeAt == null || current == brokeAt)
				{
					if (current.getMode() >= MAIN_MODE && bounds.getStart() < 0)
					{
						bounds.start = index;
					}
					
					int length = matchLength(data, index, current);
					
					if (length >= 0)
					{
						index += length;
					}
					else
					{
						index = startIndex + 1;
						
						// Needed.
						bounds.start = -1;
						bounds.end   = -1;
						
						break;
					}
					
					CollectionCase next = current.getNext();
					
					if ((next == null || next.getMode() == POST_MODE && current.getMode() < POST_MODE) && bounds.getEnd() < 0)
					{
						bounds.end = index;
					}
				}
				
				current = current.getNext();
			}
			
			if (bounds.getStart() >= 0 && bounds.getEnd() >= bounds.getStart())
			{
				return bounds;
			}
		}
		
		return null;
	}
	
	private int matchCollections(String data, int index, CollectionCase test)
	{
		return matchCollections(data, index, test, null);
	}
	
	private int matchCollections(String data, int index, CollectionCase test, Collection<?> exclude)
	{
		Iterator<Collection<?>> i = test.iterator();
		
		while (i.hasNext())
		{
			Collection<?> col = i.next();
//			if (index >= 318 && index < 360)System.out.println(col.key);
			
//			if (col == exclude)
//			{
//				continue;
//			}
			
			int length = matchLength(data, index, test, col, col.isOpposite());
			
			if (brokeAt != null)
			{
				return length;
			}
			else if (length > 0)
			{
				int next = matchCollections(data, index + length, test, col);
				
				if (next < 0)
				{
					next = 0;
				}
				
				return length + next;
			}
		}
		
		return -1;
	}
	
	public int matchLength(String data, int index, CollectionCase test)
	{
		if (test.getNumCollections() > 0)
		{
			int length = matchCollections(data, index, test);
			
			if (length < 0 && test.getBounds().isOptional())
			{
				return 0;
			}
			
			return length;
		}
		
		int value = 0;
		
		for (int i = 0; i < test.getBounds().getEnd() || test.getBounds().isEndless(); i++)
		{
			CollectionCase child = test.getChild();
			
			while (child != null)
			{
				int length = matchLength(data, index, child);
				
				value += length;
				index += length;
//				if(value > 0)System.out.println(data.substring(index - value, index));
				if (brokeAt != null)
				{
					if (isWithinList(brokeAt, child))
					{
						child = brokeAt;
						
						length = matchLength(data, index, brokeAt);
						
						value += length;
						index += length;
					}
					else
					{
						return value;
					}
				}
				
				if (length < 0)
				{
					if (value < 0)
					{
						return -1;
					}
					
					return value + 1;
				}
	//			else if (length == 0)
	//			{
	//				return 0;
	//			}
				
				child = child.getNext();
			}
		}
		
		return value;
	}
	
	public int matchLength(String data, int index, CollectionCase parent, Collection<?> collection, boolean opposite)
	{
		brokeAt = null;
		
		Bounds bounds = parent.getBounds();
		
		int x = bounds.getStart();
		int y = bounds.getEnd();
		
		if (collection.getType() == Character.class)
		{
			int count = 0;

			while ((count < y || bounds.isEndless()) && count + index < data.length())
			{
				char c = data.charAt(index + count);

				if (collection.isMatch(c, opposite))
				{
					count++;

					if (count >= bounds.getStart() && bounds.isOptional() && count + index < data.length())
					{
						brokeAt = checkForBreak(data, index + count, parent);
						
						if (brokeAt != null)
						{
							return count;
						}
					}
				}
				else
				{
					break;
				}
			}

			if (count >= x && (count <= y || bounds.isEndless()))
			{
				return count;
			}
		}
		else if (collection.getType() == String.class)
		{
			int count = 0;
			int times = 0;

			while (times <= y || bounds.isEndless())
			{
				Iterator<?> iterator = collection.getSet().iterator();
				
				while (iterator.hasNext())
				{
					String  str   = (String)iterator.next();
					
					boolean found = !opposite;
					
					for (int i = 0; i < str.length() && index + i < data.length() && found; i++)
					{
						if (str.charAt(i) != data.charAt(index + i))
						{
							found = opposite;
							
							break;
						}
						
						count++;
					}
//					if (index >= 318 && index < 322)
//						{
//						index = index;
//						System.out.println(data.substring(index, index + 10));
//						}
					if (found)
					{
						times++;
						
//						if (times >= y && !bounds.isEndless())
//						{
//							break;
//						}
						
						if (opposite)
						{
							if (count > 0)
							{
								index += count; // + 1?
							}
							else
							{
								index++;
							}
						}
						else
						{
							index += count;
						}
					}
					else if (times < x)
					{
						return -1;
					}
					
					if (times >= bounds.getStart() && bounds.isOptional() && count + index < data.length())
					{
						brokeAt = checkForBreak(data, index + count, parent);
						
						if (brokeAt != null)
						{
							return count;
						}
					}
					
					if (!found)
					{
						return count;
					}
				}
			}
			
			if (times >= x)
			{
				return count;
			}
			
			return -1;
		}
		else if (collection.getType() == Collection.class)
		{
			Iterator<?> iterator = collection.getSet().iterator();

			while (iterator.hasNext())
			{
				Collection<?> col = (Collection<?>)iterator.next();

				boolean opp = col.isOpposite();

				if (opposite)
				{
					opp = !opp;
				}

				int size = matchLength(data, index, parent, col, opp);

				if (size >= 0)// && !cumulative)
				{
					return size;
				}
//				else if (size < 0 && cumulative)
//				{
//					return -1;
//				}
			}
		}
		else
		{
			throw new TierExpressionException("Unexpected condition type of '" + collection.getType().getSimpleName() + "'");
		}

		return -1;
	}
	
	private static CollectionCase checkForBreak(String data, int index, CollectionCase test)
	{
		char newC = data.charAt(index);
		
		CollectionCase current = test.getNext();
		
		while (current != null)
		{
			if (!current.getBounds().isOptional() && current.isMatch(newC))
			{
				return current;
			}
			
			if (!current.getBounds().isOptional())
			{
				break;
			}
			
			CollectionCase next = current.getNext();
			
			if (next == null)
			{
				if (current.getParent() != null)
				{
					next = current.getParent().getNext();
				}
			}
			
			current = next;
		}
		
		return null;
	}
	
	private static boolean isWithinList(CollectionCase needle, CollectionCase haystack)
	{
		CollectionCase current = haystack;
		
		while (current != null)
		{
			if (current == needle)
			{
				return true;
			}
			
			current = current.getNext();
		}
		
		return false;
	}
	
	/**
	* Search the specified arrays for the given char.
	* 
	* @param c The char to search through the arrays for.
	* @param arrays The list of arrays to search for a match in.
	* @return Whether or not the arrays contain the char.
	*/
	private static boolean containsChar(char c, char[] ... arrays)
	{
		for (int i = 0; i < arrays.length; i++)
		{
			for (int j = 0; j < arrays[i].length; j++)
			{
				if (arrays[i][j] == c)
				{
					return true;
				}
			}
		}

		return false;
	}
	
	/**
	 * Divides the given pattern into its three modes.<br>
	 * <br>
	 * The modes include:<br>
	 * <ul>
	 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
	 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
	 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
	 * </ul>
	 * 
	 * @param pattern The Pattern to split into separate modes.
	 * @return A String array containing the three modes respectively.
	 */
	private String[] divideModes(String pattern)
	{
		String modes[] = new String[3];
		
		int index = 0;
		int lastI = 0;
		int mode  = 0;

		index = StringUtils.findEndingMatch(pattern, index, '(', ')', '\\');
		
		while (index >= 0)
		{
			modes[mode++] = pattern.substring(lastI + 1, index);
			
			lastI = index + 1;
			
			index = StringUtils.findEndingMatch(pattern, index + 1, '(', ')', '\\');
		}
		
		if (modes[2] == null && modes[1] == null)
		{
			modes[2] = modes[1];
			modes[1] = modes[0];
			modes[0] = null;
		}
		
		for (int j = 0; j < modes.length; j++)
		{
			if (modes[j] == null)
			{
				modes[j] = "";
			}
		}
		
		return modes;
	}
	
	/**
	 * Class used to store data about a start and end location.
	 * 
	 * @author	Braden Steffaniak
	 * @since	Feb 9, 2014 at 9:53:05 PM
	 * @since	v0.1
	 * @version	Feb 9, 2014 at 9:53:05 PM
	 * @version	v0.1
	 */
	static class Bounds
	{
		private int	start, end;
		
		/**
		 * The start position of the Bounds.
		 * 
		 * @return The start position.
		 */
		public int getStart()
		{
			return start;
		}
		
		/**
		 * The end position of the Bounds.
		 * 
		 * @return The end position.
		 */
		public int getEnd()
		{
			return end;
		}
		
		/**
		 * Get whether or not the bounds are endless.
		 * 
		 * @return Whether or not the bounds will search endlessly.
		 */
		public boolean isEndless()
		{
			return end < 0;
		}
		
		/**
		 * Get whether or not the bounds are optional.
		 * 
		 * @return Whether or not the bounds will search optionally.
		 */
		public boolean isOptional()
		{
			return start == 0;
		}
		
		/**
		 * Generate a String representation of the Bounds Object
		 * containing the start and end position of the Bounds.
		 * 
		 * @see java.lang.Object#toString()
		 * 
		 * @return A String representation of the Bounds Object.
		 */
		public String toString()
		{
			return "[" + start + ", " + end + "]";
		}
	}
	
	/**
	 * Class used for organizing a Collection used for testing
	 * if there is a match in a given String.
	 * 
	 * @author	Braden Steffaniak
	 * @since	Feb 10, 2014 at 4:01:41 PM
	 * @since	v0.1
	 * @version	Feb 10, 2014 at 4:01:41 PM
	 * @version	v0.1
	 */
	private static class CollectionCase
	{
		private boolean						cumulative;
		
		private int							mode;
		
		private String						key;
		
		private Bounds						bounds;
		
		private CollectionCase				next;
		private CollectionCase				parent, child;
		
//		private Class<?>					type;
		
		private ArrayList<Collection<?>>	collections;
		
		/**
		 * Create the collection case and initialize the data to the
		 * default values.<br>
		 * <br>
		 * The modes include:<br>
		 * <ul>
		 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
		 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
		 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
		 * </ul>
		 * 
		 * @param mode The mode that is compiling.
		 */
		public CollectionCase(int mode)
		{
			this.bounds      = new Bounds();
			this.collections = new ArrayList<Collection<?>>();
			
			setCumulative(false);
			setBounds(1, 1);
			setMode(mode);
		}
		
		/**
		 * Get the mode in which the CollectionCase is testing within.<br>
		 * <br>
		 * The modes include:<br>
		 * <ul>
		 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
		 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
		 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
		 * </ul>
		 * 
		 * @return The mode in which the CollectionCase is testing within.
		 */
		public int getMode()
		{
			return mode;
		}
		
		/**
		 * Set the mode that the CollectionCase is testing within.<br>
		 * <br>
		 * The modes include:<br>
		 * <ul>
		 * 	<li><b>PRE_MODE:</b> The Patterns pre-condition data.</li>
		 * 	<li><b>MAIN_MODE:</b> The Patterns main data.</li>
		 * 	<li><b>POST_MODE:</b> The Patterns post-condition data.</li>
		 * </ul>
		 * 
		 * @param mode The mode the CollectionCase is testing within.
		 */
		public void setMode(int mode)
		{
			this.mode = mode;
		}
		
		/**
		 * Get the CollectionCase instance that is next in the pattern
		 * after this one.
		 * 
		 * @return The next CollectionCase tested after this one.
		 */
		public CollectionCase getNext()
		{
			return next;
		}
		
		/**
		 * Set the next CollectionCase to be tested after this one.
		 * 
		 * @param next The next CollectionCase to be tested after this one.
		 */
		public void setNext(CollectionCase next)
		{
			this.next = next;
		}
		
		/**
		 * Get the CollectionCase instance that is the parent of the
		 * specified CollectionCase.
		 * 
		 * @return The parent CollectionCase of this one.
		 */
		public CollectionCase getParent()
		{
			return parent;
		}
		
		/**
		 * Set the parent CollectionCase of this one.
		 * 
		 * @param next The parent CollectionCase of this one.
		 */
		public void setParent(CollectionCase parent)
		{
			this.parent = parent;
		}
		
		/**
		 * Get the last CollectionCase in the list of cases.
		 * 
		 * @return The reference to the last CollectionCase in the current
		 * 		pattern.
		 */
		public CollectionCase getLast()
		{
			return getLast(false);
		}
		
		/**
		 * Get the last CollectionCase in the list of cases.
		 * 
		 * @return inclusive Whether or not to return this CollectionCase
		 * 		if it is the last.
		 * @return The reference to the last CollectionCase in the current
		 * 		pattern.
		 */
		public CollectionCase getLast(boolean inclusive)
		{
			CollectionCase current = this;
			
			if (!inclusive)
			{
				current = current.getNext();
			}
			
			while (current != null)
			{
				CollectionCase next = current.getNext();
				
				if (next == null)
				{
					return current;
				}
				
				current = next;
			}
			
			return null;
		}
		
		/**
		 * Get the child CollectionCase of this Case, if it exists.
		 * 
		 * @return The child CollectionCase instance.
		 */
		public CollectionCase getChild()
		{
			return child;
		}
		
		/**
		 * Set the child CollectionCase to this Case.
		 * 
		 * @param child The new child to set fpr the CollectionCase.
		 */
		public void setChild(CollectionCase child)
		{
			this.child = child;
		}
		
		/**
		 * Get whether or not the Collections are tested in a cumulative
		 * manner, or an 'OR' manner.
		 * 
		 * @return Whether or not the Collections are cumulative.
		 */
		public boolean isCumulative()
		{
			return cumulative;
		}
		
		/**
		 * Set whether or not the Collections are tested in a cumulative
		 * manner, or an 'OR' manner.
		 * 
		 * @param cumulative Whether or not to set as cumulative.
		 */
		public void setCumulative(boolean cumulative)
		{
			this.cumulative = cumulative;
		}
		
		/**
		 * Get the String that represents the Key value in the String
		 * pattern that was compiled.
		 * 
		 * @return The String that represents the Key value in the String
		 * 		pattern that was compiled.
		 */
		public String getKey()
		{
			return key;
		}
		
		/**
		 * Set the String that represents the Key value in the String
		 * pattern that was compiled.
		 * 
		 * @param key The key String.
		 */
		public void setKey(String key)
		{
			this.key = key;
		}
		
		/**
		 * Get the number of Collections that are tested in the case.
		 * 
		 * @return The number of Collections that are tested in the case.
		 */
		public int getNumCollections()
		{
			return collections.size();
		}
		
		/**
		 * Get whether the CollectionCase contains the specific
		 * Collection.
		 * 
		 * @param collection The Collection to check if it exists.
		 * @return Whether or not the Collection case contains the
		 * 		Collection.
		 */
		public boolean containsCollection(Collection<?> collection)
		{
			return collections.contains(collection);
		}
		
		/**
		 * Add the specified Collection to the list of Collections that
		 * are needed to pass the case.
		 * 
		 * @param collection The Collection instance to add.
		 */
		public void addCollection(Collection<?> collection)
		{
//			if (type != null)
//			{
//				if (type != collection.getType())
//				{
//					throw new TierExpressionException("Expected Collection to be of type: " + type.getSimpleName() + "; instead, found type: " + collection.getType().getSimpleName());
//				}
//			}
//			else
//			{
//				type = collection.getType();
//			}
			
			collections.add(collection);
		}
		
//		/**
//		 * Get the type of data that the CollectionCase tests for, or
//		 * against.
//		 * 
//		 * @return The Class instance that represents the data type.
//		 */
//		public Class<?> getType()
//		{
//			return type;
//		}
		
		/**
		 * Get the Bounds that the Collection requires to be fulfilled.
		 * 
		 * @return The Bounds instance.
		 */
		public Bounds getBounds()
		{
			return bounds;
		}
		
		/**
		 * Set the Bounds that the Collection requires to be fulfilled.
		 * 
		 * @param x The least amount of repetition required for the
		 * 		Collection to be fulfilled.
		 * @param y The most amount of repetition required for the
		 * 		Collection to be fulfilled.
		 */
		public void setBounds(int x, int y)
		{
			bounds.start = x;
			bounds.end = y;
		}
		
		/**
		 * Get the iterator for the Collections.
		 * 
		 * @return The Iterator instance for the Collections.
		 */
		public Iterator<Collection<?>> iterator()
		{
			return collections.iterator();
		}
		
		/**
		 * Check whether or not the specified Object given matches any
		 * of the data.
		 * 
		 * @param test The Object to test for, or against, the
		 * 		CollectionCase.
		 * @return Whether or not it matches the Collections criteria.
		 */
		public boolean isMatch(Object test)
		{
			for (int i = 0; i < collections.size(); i++)
			{
				Collection<?> collection = collections.get(i);
				
				if (collection.isMatch(test))
				{
					return true;
				}
			}
			
			return false;
		}
	}
	
	/**
	 * Class used to hold related information with a common descriptor.
	 * 
	 * @author	Braden Steffaniak
	 * @since	Feb 9, 2014 at 4:12:07 PM
	 * @since	v0.1
	 * @version	Feb 9, 2014 at 4:12:07 PM
	 * @version	v0.1
	 */
	private static class Collection<E>
	{
		private boolean		opposite;
		
		private String		key;
		
		private Class<?>	type;
		
		private HashSet<E>	data;
		
//		/**
//		 * Create a Collection with the specified Class type.
//		 * 
//		 * @param type The Class type of the data stored.
//		 */
//		public Collection(Class<?> type)
//		{
//			this.type = type;
//		}
		
		/**
		 * Create a Collection with the specified Class type that is
		 * described by the given key.
		 * 
		 * @param type The Class type of the data stored.
		 * @param key The String value that describes the data stored.
		 * @param opposite Whether or not to test for, or against the
		 * 		data.
		 */
		public Collection(Class<?> type, String key, boolean opposite)
		{
			this.type   = type;
			
			setOpposite(opposite);
			setKey(key);
		}
		
		/**
		 * Get the type of data that the Collection tests for, or
		 * against.
		 * 
		 * @return The Class instance that represents the data type.
		 */
		public Class<?> getType()
		{
			return type;
		}
		
		/**
		 * Get the key String value; the short String that describes the
		 * data that is stored in the Collection.
		 * 
		 * @return The key String value.
		 */
		public String getKey()
		{
			return key;
		}
		
		/**
		 * Set the String value used to describe the data that is stored
		 * in the Collection.
		 * 
		 * @param key The String value to set as the new key.
		 */
		public void setKey(String key)
		{
			this.key = key;
		}
		
		/**
		 * Get the HashSet that is used to store the data that is related.
		 * 
		 * @return The HashSet of related data.
		 */
		public HashSet<E> getSet()
		{
			return data;
		}
		
		/**
		 * Set the HashSet that is used to store the data that is related.
		 * 
		 * @param data The new HashSet of related data.
		 */
		public void setSet(HashSet<E> data)
		{
//			Iterator i = data.iterator();
//			
//			if (i.hasNext())
//			{
//				type = i.next().getClass();
//			}
			
			this.data = data;
		}
		
		/**
		 * Get whether the Collection tests for, or against the stored
		 * data.
		 * 
		 * @return Whether the Collection tests for, or against the stored
		 * 		data.
		 */
		public boolean isOpposite()
		{
			return opposite;
		}
		
		/**
		 * Set whether the Collection tests for, or against the stored
		 * data. 
		 * 
		 * @param opposite Whether the Collection tests for, or against
		 * 		the stored data.
		 */
		public void setOpposite(boolean opposite)
		{
			this.opposite = opposite;
		}
		
		/**
		 * Check whether or not the specified Object given matches any
		 * of the data.
		 * 
		 * @param test The Object to test for, or against, the Collection.
		 * @return Whether or not it matches the Collections criteria.
		 */
		public boolean isMatch(Object test)
		{
			return isMatch(test, opposite);
		}
		
		/**
		 * Check whether or not the specified Object given matches any
		 * of the data.
		 * 
		 * @param test The Object to test for, or against, the Collection.
		 * @param opposite An explicit value for whether to check for, or
		 * 		against the data. Overrides whatever value is in the
		 * 		Collection.opposite.
		 * @return Whether or not it matches the Collections criteria.
		 */
		public boolean isMatch(Object test, boolean opposite)
		{
			return matchLength(test, opposite) >= 0;
		}
		
		/**
		 * Get the length of the match between the test Object and the
		 * Collection data.
		 * 
		 * @param test The Object to test for, or against, the Collection.
		 * @param opposite An explicit value for whether to check for, or
		 * 		against the data. Overrides whatever value is in the
		 * 		Collection.opposite.
		 * @return The length of the match between the test Object and
		 * 		the Collection data.
		 */
		public int matchLength(Object test, boolean opposite)
		{
			boolean matched = false;
			
			if (type == Collection.class)
			{
				Iterator<E> i = data.iterator();
				
				while (i.hasNext())
				{
					Collection<?> collection = (Collection<?>)i.next();
					
					if (collection.isMatch(test) != opposite)
					{
						matched = true;
					}
				}
			}
			
			if (!matched && data.contains(test) != opposite)
			{
				matched = true;
			}
			
			if (matched)
			{
				if (test instanceof String)
				{
					return ((String)test).length();
				}
				else if (test instanceof Character)
				{
					return 1;
				}
			}
			
			return -1;
		}
	}
}
