package net.fathomsoft.nova.tree;

public class Type
{
	public String value;
	
	public byte dataType;
	public int arrayDimensions;
	
	public Type()
	{
		dataType = Value.POINTER;
	}
	
	public void setType(String value)
	{
		this.value = value;
	}
	
	public Type cloneTo(Type clone)
	{
		clone.value = value;
		clone.dataType = dataType;
		clone.arrayDimensions = arrayDimensions;
		
		return clone;
	}
	
	public Type clone()
	{
		return cloneTo(new Type());
	}
}