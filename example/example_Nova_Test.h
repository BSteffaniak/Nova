#pragma once
#ifndef FILE_example_Nova_Test_NOVA
#define FILE_example_Nova_Test_NOVA

typedef struct example_Nova_Test example_Nova_Test;

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
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_Stack.h>

typedef struct nova_VTable_example_Nova_Test
{
	long (*nova_standard_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_Nova_Object_virtual0_Nova_toString)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_Nova_Object_virtual0_Nova_equals)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
} nova_VTable_example_Nova_Test;

extern nova_VTable_example_Nova_Test nova_VTable_example_Nova_Test_val;

CCLASS_CLASS
(
	example_Nova_Test, 
	
	nova_VTable_example_Nova_Test* vtable;
)

void example_Nova_TestNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
example_Nova_Test* example_Nova_Test_2_Nova_construct(example_Nova_Test* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Test_Nova_destroy(example_Nova_Test** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Test_Nova_main(example_Nova_Test* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String** l0_Nova_args);
void example_Nova_Test_2_Nova_this(example_Nova_Test* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void example_Nova_Test_Nova_super(example_Nova_Test* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif