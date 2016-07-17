#pragma once
#ifndef FILE_nova_standard_datastruct_list_Nova_IntArrayIterator_NOVA
#define FILE_nova_standard_datastruct_list_Nova_IntArrayIterator_NOVA

typedef struct nova_standard_datastruct_list_Nova_IntArrayIterator nova_standard_datastruct_list_Nova_IntArrayIterator;


#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
#include <nova/standard/exception/nova_standard_exception_Nova_ExceptionData.h>
#include <nova/standard/exception/nova_standard_exception_Nova_Exception.h>
#include <nova/standard/exception/nova_standard_exception_Nova_DivideByZeroException.h>
#include <nova/standard/io/nova_standard_io_Nova_Console.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Number.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Byte.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Short.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Int.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Long.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Float.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Double.h>
#include <nova/standard/primitive/nova_standard_primitive_Nova_Null.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Char.h>
#include <nova/standard/primitive/nova_standard_primitive_Nova_Bool.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_Array.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_IntRange.h>
#include <nova/standard/gc/nova_standard_gc_Nova_GC.h>
#include <nova/standard/nova_standard_Nova_Object.h>
#include <nova/standard/nova_standard_Nova_String.h>
#include <nova/standard/nova_standard_Nova_System.h>
#include <nova/standard/math/nova_standard_math_Nova_Math.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_IntArray.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_Iterator.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_NoSuchElementException.h>


typedef struct nova_standard_datastruct_list_Extension_VTable_IntArrayIterator nova_standard_datastruct_list_Extension_VTable_IntArrayIterator;
struct nova_standard_datastruct_list_Extension_VTable_IntArrayIterator
{
	nova_Interface_VTable itable;
	long_long (*nova_standard_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_Nova_Object_virtual1_Nova_toString)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_operators_Nova_Equals_virtual0_Nova_equals)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
	nova_standard_datastruct_list_Nova_Iterator* (*nova_standard_datastruct_list_Nova_Iterator_virtual0_Nova_reset)(nova_standard_datastruct_list_Nova_IntArrayIterator*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext)(nova_standard_datastruct_list_Nova_IntArrayIterator*, nova_standard_exception_Nova_ExceptionData*);
	int (*nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next)(nova_standard_datastruct_list_Nova_IntArrayIterator*, nova_standard_exception_Nova_ExceptionData*);
};

extern nova_standard_datastruct_list_Extension_VTable_IntArrayIterator nova_standard_datastruct_list_Extension_VTable_IntArrayIterator_val;


CCLASS_CLASS
(
	nova_standard_datastruct_list_Nova_IntArrayIterator, 
	
	nova_standard_datastruct_list_Extension_VTable_IntArrayIterator* vtable;
	int nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_position;
	struct Private* prv;
)

void nova_standard_datastruct_list_Nova_IntArrayIteratorNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_list_Nova_IntArrayIterator* nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_IntArrayIterator(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_array);
void nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_destroy(nova_standard_datastruct_list_Nova_IntArrayIterator** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_this(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_array);
nova_standard_datastruct_list_Nova_Iterator* nova_standard_datastruct_list_Nova_IntArrayIterator_0_Nova_reset(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
char nova_standard_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_hasNext(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
int nova_standard_datastruct_list_Nova_IntArrayIterator_Accessor_Nova_next(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_super(nova_standard_datastruct_list_Nova_IntArrayIterator* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif
