#pragma once
#ifndef FILE_nova_svg_no3_Nova_No3Selection_NOVA
#define FILE_nova_svg_no3_Nova_No3Selection_NOVA

typedef struct nova_svg_no3_Nova_No3Selection nova_svg_no3_Nova_No3Selection;


#include <Nova.h>
#include <ExceptionHandler.h>
#include <InterfaceVTable.h>
#include <nova/exception/nova_exception_Nova_ExceptionData.h>
#include <nova/exception/nova_exception_Nova_Exception.h>
#include <nova/exception/nova_exception_Nova_DivideByZeroException.h>
#include <nova/io/nova_io_Nova_Console.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Number.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Byte.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Short.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Int.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Long.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Float.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Double.h>
#include <nova/primitive/nova_primitive_Nova_Null.h>
#include <nova/primitive/number/nova_primitive_number_Nova_Char.h>
#include <nova/primitive/nova_primitive_Nova_Bool.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_Array.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_CharArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_DoubleArray.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_IntRange.h>
#include <nova/thread/nova_thread_Nova_Thread.h>
#include <nova/thread/async/nova_thread_async_Nova_Async.h>
#include <nova/gc/nova_gc_Nova_GC.h>
#include <nova/nova_Nova_Object.h>
#include <nova/nova_Nova_String.h>
#include <nova/nova_Nova_System.h>
#include <nova/math/nova_math_Nova_Math.h>
#include <nova/svg/no3/nova_svg_no3_Nova_No3Node.h>


typedef struct nova_svg_no3_Extension_VTable_No3Selection nova_svg_no3_Extension_VTable_No3Selection;
struct nova_svg_no3_Extension_VTable_No3Selection
{
	nova_Interface_VTable itable;
	long_long (*nova_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*nova_Nova_Object_virtual1_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	char (*nova_operators_Nova_Equals_virtual0_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_Nova_String* (*nova_svg_no3_Nova_No3Node_virtual1_Nova_toJs)(nova_svg_no3_Nova_No3Selection*, nova_exception_Nova_ExceptionData*);
};

extern nova_svg_no3_Extension_VTable_No3Selection nova_svg_no3_Extension_VTable_No3Selection_val;


CCLASS_CLASS
(
	nova_svg_no3_Nova_No3Selection, 
	
	nova_svg_no3_Extension_VTable_No3Selection* vtable;
	nova_Nova_String* nova_svg_no3_Nova_No3Selection_Nova_selection;
)

void nova_svg_no3_Nova_No3Selection_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_svg_no3_Nova_No3Selection* nova_svg_no3_Nova_No3Selection_Nova_No3Selection(nova_svg_no3_Nova_No3Selection* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_svg_no3_Nova_No3Selection_Nova_selection);
void nova_svg_no3_Nova_No3Selection_Nova_destroy(nova_svg_no3_Nova_No3Selection** this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_svg_no3_Nova_No3Selection_Nova_this(nova_svg_no3_Nova_No3Selection* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_svg_no3_Nova_No3Selection_Nova_selection);
nova_Nova_String* nova_svg_no3_Nova_No3Selection_Nova_toJs(nova_svg_no3_Nova_No3Selection* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_svg_no3_Nova_No3Selection_0_Nova_super(nova_svg_no3_Nova_No3Selection* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif