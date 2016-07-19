#include <precompiled.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_IntRangeIterator.h>

nova_standard_datastruct_list_Extension_VTable_IntRangeIterator nova_standard_datastruct_list_Extension_VTable_IntRangeIterator_val =
{
	{
		0,
		0,
		(nova_standard_datastruct_list_Nova_Iterator*(*)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*))nova_standard_datastruct_list_Nova_IntRangeIterator_0_Nova_reset,
		(char(*)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*))nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext,
		(nova_standard_Nova_Object*(*)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*))nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next,
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
		(char(*)(nova_standard_operators_Nova_Equals*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_standard_Nova_Object_0_Nova_getHashCodeLong,
	nova_standard_Nova_Object_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
	nova_standard_datastruct_list_Nova_IntRangeIterator_0_Nova_reset,
	nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext,
	nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next,
};


CCLASS_PRIVATE
(
	nova_standard_datastruct_list_Nova_IntRange* nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range;
	
)



void nova_standard_datastruct_list_Nova_IntRangeIteratorNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_datastruct_list_Nova_IntRangeIterator* nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_IntRangeIterator(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntRange* nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range)
{
	CCLASS_NEW(nova_standard_datastruct_list_Nova_IntRangeIterator, this);
	this->vtable = &nova_standard_datastruct_list_Extension_VTable_IntRangeIterator_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_super(this, exceptionData);
	
	{
		nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_this(this, exceptionData, nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range);
	}
	
	return this;
}

void nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_destroy(nova_standard_datastruct_list_Nova_IntRangeIterator** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	nova_standard_datastruct_list_Nova_IntRange_Nova_destroy(&(*this)->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range, exceptionData);
	NOVA_FREE((*this)->prv);
	
	
	NOVA_FREE(*this);
}

void nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_this(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntRange* nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range)
{
	this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range = nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range;
	nova_standard_datastruct_list_Nova_Iterator_virtual0_Nova_reset((nova_standard_datastruct_list_Nova_Iterator*)(this), exceptionData);
}

nova_standard_datastruct_list_Nova_Iterator* nova_standard_datastruct_list_Nova_IntRangeIterator_0_Nova_reset(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position = (this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_start < this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_end) ? this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_start : (int)(this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_start - 1);
	return (nova_standard_datastruct_list_Nova_Iterator*)this;
}

char nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_hasNext(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return (char)(this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_start < this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_end) ? (this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position < this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_end) : (this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position >= this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_end);
}


int nova_standard_datastruct_list_Nova_IntRangeIterator_Accessor_Nova_next(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(this), exceptionData))
	{
		return (this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_start < this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range->nova_standard_datastruct_list_Nova_IntRange_Nova_end) ? this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position++ : this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position--;
	}
	THROW(2, nova_standard_datastruct_list_Nova_NoSuchElementException_0_Nova_NoSuchElementException(0, exceptionData));
	return (int)nova_null;
}


void nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_super(nova_standard_datastruct_list_Nova_IntRangeIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_position = 0;
	this->prv->nova_standard_datastruct_list_Nova_IntRangeIterator_Nova_range = (nova_standard_datastruct_list_Nova_IntRange*)nova_null;
}

