#pragma once
#ifndef FILE_nova_standard_datastruct_Nova_BinaryNode_NOVA
#define FILE_nova_standard_datastruct_Nova_BinaryNode_NOVA

typedef struct nova_standard_datastruct_Nova_BinaryNode nova_standard_datastruct_Nova_BinaryNode;

#include <Nova.h>
#include <ExceptionHandler.h>
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
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_Array.h>
#include <nova/standard/gc/nova_standard_gc_Nova_GC.h>
#include <nova/standard/nova_standard_Nova_Object.h>
#include <nova/standard/nova_standard_Nova_String.h>
#include <nova/standard/nova_standard_Nova_System.h>
#include <nova/standard/math/nova_standard_math_Nova_Math.h>
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_ArrayList.h>
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_Node.h>
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_Comparable.h>

typedef struct nova_VTable_nova_standard_datastruct_Nova_BinaryNode
{
	long (*nova_standard_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_Nova_Object_virtual0_Nova_toString)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_Nova_Object_virtual0_Nova_equals)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
} nova_VTable_nova_standard_datastruct_Nova_BinaryNode;

extern nova_VTable_nova_standard_datastruct_Nova_BinaryNode nova_VTable_nova_standard_datastruct_Nova_BinaryNode_val;

CCLASS_CLASS
(
	nova_standard_datastruct_Nova_BinaryNode, 
	
	nova_VTable_nova_standard_datastruct_Nova_BinaryNode* vtable;
	nova_standard_Nova_Object* nova_standard_datastruct_Nova_Node_Nova_data;
	nova_standard_datastruct_Nova_ArrayList* nova_standard_datastruct_Nova_Node_Nova_children;
)

void nova_standard_datastruct_Nova_BinaryNodeNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_Nova_BinaryNode* nova_standard_datastruct_Nova_BinaryNode_2_Nova_construct(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_Nova_BinaryNode* nova_standard_datastruct_Nova_BinaryNode_3_Nova_construct(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_Object* l0_Nova_data);
void nova_standard_datastruct_Nova_BinaryNode_Nova_destroy(nova_standard_datastruct_Nova_BinaryNode** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_BinaryNode_Nova_this(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_BinaryNode_0_Nova_this(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_Object* l0_Nova_data);
void nova_standard_datastruct_Nova_BinaryNode_1_Nova_this(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_Object* l0_Nova_data, int l0_Nova_size);
void nova_standard_datastruct_Nova_BinaryNode_Nova_addChild(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_Object* l0_Nova_data);
nova_standard_datastruct_Nova_BinaryNode* nova_standard_datastruct_Nova_BinaryNode_Accessor_Nova_left(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_Nova_BinaryNode* nova_standard_datastruct_Nova_BinaryNode_Accessor_Nova_right(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_BinaryNode_Nova_super(nova_standard_datastruct_Nova_BinaryNode* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif
