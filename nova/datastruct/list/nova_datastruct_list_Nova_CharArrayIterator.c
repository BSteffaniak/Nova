#include <precompiled.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArrayIterator.h>



nova_datastruct_list_Extension_VTable_CharArrayIterator nova_datastruct_list_Extension_VTable_CharArrayIterator_val =
{
	{
		0,
		0,
		(nova_datastruct_list_Nova_Iterator*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_CharArrayIterator_0_Nova_reset,
		(char(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext,
		(nova_Nova_Object*(*)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*))nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
	nova_datastruct_list_Nova_CharArrayIterator_0_Nova_reset,
	nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext,
	nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next,
};


CCLASS_PRIVATE
(
	nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayIterator_Nova_array;
	
)



void nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_list_Nova_CharArrayIterator* nova_datastruct_list_Nova_CharArrayIterator_Nova_CharArrayIterator(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayIterator_Nova_array)
{
	CCLASS_NEW(nova_datastruct_list_Nova_CharArrayIterator, this);
	this->vtable = &nova_datastruct_list_Extension_VTable_CharArrayIterator_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_list_Nova_CharArrayIterator_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_list_Nova_CharArrayIterator_Nova_this(this, exceptionData, nova_datastruct_list_Nova_CharArrayIterator_Nova_array);
	}
	
	return this;
}

void nova_datastruct_list_Nova_CharArrayIterator_Nova_destroy(nova_datastruct_list_Nova_CharArrayIterator** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_datastruct_list_Nova_CharArray_Nova_destroy(&(*this)->prv->nova_datastruct_list_Nova_CharArrayIterator_Nova_array, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_list_Nova_CharArrayIterator_Nova_this(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_CharArray* nova_datastruct_list_Nova_CharArrayIterator_Nova_array)
{
	this->prv->nova_datastruct_list_Nova_CharArrayIterator_Nova_array = nova_datastruct_list_Nova_CharArrayIterator_Nova_array;
	nova_datastruct_list_Nova_Iterator_virtual0_Nova_reset((nova_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

nova_datastruct_list_Nova_Iterator* nova_datastruct_list_Nova_CharArrayIterator_0_Nova_reset(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_CharArrayIterator_Nova_position = (int)(0);
	return (nova_datastruct_list_Nova_Iterator*)this;
}

char nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_hasNext(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return (char)this->prv->nova_datastruct_list_Nova_CharArrayIterator_Nova_array->nova_datastruct_list_Nova_Array_Nova_count > this->nova_datastruct_list_Nova_CharArrayIterator_Nova_position;
}


char nova_datastruct_list_Nova_CharArrayIterator_Accessor_Nova_next(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_datastruct_list_Nova_Iterator*)(this), exceptionData))
	{
		return (char)(intptr_t)nova_datastruct_list_Nova_Array_virtual1_Nova_get((nova_datastruct_list_Nova_Array*)(this->prv->nova_datastruct_list_Nova_CharArrayIterator_Nova_array), exceptionData, this->nova_datastruct_list_Nova_CharArrayIterator_Nova_position++);
	}
	THROW(2, nova_datastruct_list_Nova_NoSuchElementException_0_Nova_NoSuchElementException(0, exceptionData));
	return (char)0;
}


void nova_datastruct_list_Nova_CharArrayIterator_Nova_super(nova_datastruct_list_Nova_CharArrayIterator* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_datastruct_list_Nova_CharArrayIterator_Nova_position = 0;
	this->prv->nova_datastruct_list_Nova_CharArrayIterator_Nova_array = (nova_datastruct_list_Nova_CharArray*)nova_null;
}

