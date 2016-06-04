#pragma once
#ifndef FILE_nova_standard_datastruct_Nova_Enumerable_NOVA
#define FILE_nova_standard_datastruct_Nova_Enumerable_NOVA

typedef struct nova_standard_datastruct_Nova_Enumerable nova_standard_datastruct_Nova_Enumerable;

typedef struct nova_standard_exception_Nova_ExceptionData nova_standard_exception_Nova_ExceptionData;
typedef struct nova_standard_Nova_Object nova_standard_Nova_Object;
typedef struct nova_standard_datastruct_Nova_Enumerable nova_standard_datastruct_Nova_Enumerable;

typedef void (*nova_standard_datastruct_Nova_Enumerable_closure1_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_Nova_Enumerable*);
typedef void (*nova_standard_datastruct_Nova_Enumerable_closure2_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_Nova_Enumerable*);
typedef void (*nova_standard_datastruct_Nova_Enumerable_closure3_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_Nova_Enumerable*);
typedef char (*nova_standard_datastruct_Nova_Enumerable_closure4_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_Nova_Enumerable_closure5_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_Nova_Enumerable_closure6_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);

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


typedef struct nova_standard_datastruct_Extension_VTable_Enumerable nova_standard_datastruct_Extension_VTable_Enumerable;
struct nova_standard_datastruct_Extension_VTable_Enumerable
{
	nova_Interface_VTable itable;
	void (*nova_standard_datastruct_Nova_Enumerable_virtual0_Nova_forEach)(nova_standard_datastruct_Nova_Enumerable*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_Nova_Enumerable_closure3_Nova_func nova_standard_datastruct_Nova_Enumerable_Nova_func, void* nova_standard_datastruct_Nova_Enumerable_ref_Nova_func);
	nova_standard_datastruct_Nova_Enumerable* (*nova_standard_datastruct_Nova_Enumerable_virtual0_Nova_filter)(nova_standard_datastruct_Nova_Enumerable*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_Nova_Enumerable_closure6_Nova_filterFunc nova_standard_datastruct_Nova_Enumerable_Nova_filterFunc, void* nova_standard_datastruct_Nova_Enumerable_ref_Nova_filterFunc);
	nova_standard_datastruct_Nova_Enumerable* (*nova_standard_datastruct_Nova_Enumerable_virtual0_Nova_take)(nova_standard_datastruct_Nova_Enumerable*, nova_standard_exception_Nova_ExceptionData*, int);
	nova_standard_datastruct_Nova_Enumerable* (*nova_standard_datastruct_Nova_Enumerable_virtual0_Nova_skip)(nova_standard_datastruct_Nova_Enumerable*, nova_standard_exception_Nova_ExceptionData*, int);
};

extern nova_standard_datastruct_Extension_VTable_Enumerable nova_standard_datastruct_Extension_VTable_Enumerable_val;


CCLASS_CLASS
(
	nova_standard_datastruct_Nova_Enumerable, 
	
	nova_standard_datastruct_Extension_VTable_Enumerable* vtable;
)

void nova_standard_datastruct_Nova_EnumerableNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_Nova_Enumerable_0_Nova_forEach(nova_standard_datastruct_Nova_Enumerable* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_Nova_Enumerable_closure3_Nova_func nova_standard_datastruct_Nova_Enumerable_Nova_func, void* nova_standard_datastruct_Nova_Enumerable_ref_Nova_func);nova_standard_datastruct_Nova_Enumerable* nova_standard_datastruct_Nova_Enumerable_0_Nova_filter(nova_standard_datastruct_Nova_Enumerable* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_Nova_Enumerable_closure6_Nova_filterFunc nova_standard_datastruct_Nova_Enumerable_Nova_filterFunc, void* nova_standard_datastruct_Nova_Enumerable_ref_Nova_filterFunc);nova_standard_datastruct_Nova_Enumerable* nova_standard_datastruct_Nova_Enumerable_0_Nova_take(nova_standard_datastruct_Nova_Enumerable* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_Nova_Enumerable_Nova_howMany);nova_standard_datastruct_Nova_Enumerable* nova_standard_datastruct_Nova_Enumerable_0_Nova_skip(nova_standard_datastruct_Nova_Enumerable* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_Nova_Enumerable_Nova_howMany);
#endif
