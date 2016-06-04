#pragma once
#ifndef FILE_stabilitytest_Nova_FileStability_NOVA
#define FILE_stabilitytest_Nova_FileStability_NOVA

typedef struct stabilitytest_Nova_FileStability stabilitytest_Nova_FileStability;


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
#include <nova/standard/datastruct/nova_standard_datastruct_Nova_Array.h>
#include <nova/standard/gc/nova_standard_gc_Nova_GC.h>
#include <nova/standard/nova_standard_Nova_Object.h>
#include <nova/standard/nova_standard_Nova_String.h>
#include <nova/standard/nova_standard_Nova_System.h>
#include <nova/standard/math/nova_standard_math_Nova_Math.h>
#include <nova/standard/io/nova_standard_io_Nova_File.h>
#include <nova/standard/time/nova_standard_time_Nova_Time.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTest.h>
#include <stabilitytest/stabilitytest_Nova_StabilityTestCase.h>


typedef struct stabilitytest_Extension_VTable_FileStability stabilitytest_Extension_VTable_FileStability;
struct stabilitytest_Extension_VTable_FileStability
{
	nova_Interface_VTable itable;
	long (*nova_standard_Nova_Object_virtual0_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_Nova_Object_virtual0_Nova_toString)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_Nova_Object_virtual0_Nova_equals)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
	void (*stabilitytest_Nova_FileStability_virtual0_Nova_test)(stabilitytest_Nova_FileStability*, nova_standard_exception_Nova_ExceptionData*);
};

extern stabilitytest_Extension_VTable_FileStability stabilitytest_Extension_VTable_FileStability_val;


CCLASS_CLASS
(
	stabilitytest_Nova_FileStability, 
	
	stabilitytest_Extension_VTable_FileStability* vtable;
	stabilitytest_Nova_StabilityTest* stabilitytest_Nova_StabilityTestCase_Nova_program;
)

void stabilitytest_Nova_FileStabilityNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
stabilitytest_Nova_FileStability* stabilitytest_Nova_FileStability_0_Nova_construct(stabilitytest_Nova_FileStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* l0_Nova_program);
void stabilitytest_Nova_FileStability_Nova_destroy(stabilitytest_Nova_FileStability** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_FileStability_0_Nova_test(stabilitytest_Nova_FileStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_FileStability_0_Nova_this(stabilitytest_Nova_FileStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* l0_Nova_program);
void stabilitytest_Nova_FileStability_2_Nova_super(stabilitytest_Nova_FileStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif