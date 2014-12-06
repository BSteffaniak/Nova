#pragma once
#ifndef FILE_nova_standard_datastruct_Nova_Bounds_NOVA
#define FILE_nova_standard_datastruct_Nova_Bounds_NOVA

typedef struct nova_standard_datastruct_Nova_Bounds nova_standard_datastruct_Nova_Bounds;

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

typedef struct nova_VTable_nova_standard_datastruct_Nova_Bounds
{
	long (*nova_standard_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_datastruct_Nova_Bounds_virtual0_Nova_toString)(nova_standard_datastruct_Nova_Bounds*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_datastruct_Nova_Bounds_virtual0_Nova_equals)(nova_standard_datastruct_Nova_Bounds*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_Nova_Bounds*);
} nova_VTable_nova_standard_datastruct_Nova_Bounds;

extern nova_VTable_nova_standard_datastruct_Nova_Bounds nova_VTable_nova_standard_datastruct_Nova_Bounds_val;

CCLASS_CLASS
(
	nova_standard_datastruct_Nova_Bounds, 
	
	nova_VTable_nova_standard_datastruct_Nova_Bounds* vtable;
	int nova_standard_datastruct_Nova_Bounds_Nova_start;
	int nova_standard_datastruct_Nova_Bounds_Nova_end;
)

void nova_standard_datastruct_Nova_BoundsNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_Nova_Bounds* nova_standard_datastruct_Nova_Bounds_2_Nova_construct(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_Nova_Bounds* nova_standard_datastruct_Nova_Bounds_3_Nova_construct(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_start, int l0_Nova_end);
void nova_standard_datastruct_Nova_Bounds_Nova_destroy(nova_standard_datastruct_Nova_Bounds** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Bounds_Nova_this(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Bounds_0_Nova_this(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_start, int l0_Nova_end);
nova_standard_Nova_String* nova_standard_datastruct_Nova_Bounds_Nova_extractString(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* l0_Nova_source);
nova_standard_Nova_String* nova_standard_datastruct_Nova_Bounds_Nova_extractPreString(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* l0_Nova_source);
nova_standard_Nova_String* nova_standard_datastruct_Nova_Bounds_Nova_extractPostString(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* l0_Nova_source);
nova_standard_Nova_String* nova_standard_datastruct_Nova_Bounds_Nova_trimString(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* l0_Nova_source);
char nova_standard_datastruct_Nova_Bounds_Nova_isEndless(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
char nova_standard_datastruct_Nova_Bounds_Nova_isOptional(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
int nova_standard_datastruct_Nova_Bounds_Nova_length(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
char nova_standard_datastruct_Nova_Bounds_Nova_isValid(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Bounds_Nova_setInvalid(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
char nova_standard_datastruct_Nova_Bounds_0_Nova_equals(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_Nova_Bounds* l0_Nova_bounds);
nova_standard_Nova_String* nova_standard_datastruct_Nova_Bounds_0_Nova_toString(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Bounds_Nova_cloneTo(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_Nova_Bounds* l0_Nova_bounds);
nova_standard_datastruct_Nova_Bounds* nova_standard_datastruct_Nova_Bounds_Nova_clone(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Bounds_Nova_super(nova_standard_datastruct_Nova_Bounds* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif
