#pragma once
#ifndef FILE_nova_standard_datastruct_list_Nova_IntArray_NOVA
#define FILE_nova_standard_datastruct_list_Nova_IntArray_NOVA

typedef struct nova_standard_datastruct_list_Nova_IntArray nova_standard_datastruct_list_Nova_IntArray;

typedef struct nova_standard_exception_Nova_ExceptionData nova_standard_exception_Nova_ExceptionData;
typedef struct nova_standard_datastruct_list_Nova_IntArray nova_standard_datastruct_list_Nova_IntArray;
typedef struct nova_standard_Nova_Object nova_standard_Nova_Object;

typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_IntArray_closure1_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_IntArray_closure2_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_IntArray_closure3_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef void (*nova_standard_datastruct_list_Nova_IntArray_closure4_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef void (*nova_standard_datastruct_list_Nova_IntArray_closure5_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef void (*nova_standard_datastruct_list_Nova_IntArray_closure6_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int, int, nova_standard_datastruct_list_Nova_IntArray*);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure7_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure8_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure9_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure10_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure11_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure12_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure13_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure14_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure15_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure16_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure17_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int);
typedef char (*nova_standard_datastruct_list_Nova_IntArray_closure18_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, int);

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
#include <nova/standard/gc/nova_standard_gc_Nova_GC.h>
#include <nova/standard/nova_standard_Nova_Object.h>
#include <nova/standard/nova_standard_Nova_String.h>
#include <nova/standard/nova_standard_Nova_System.h>
#include <nova/standard/math/nova_standard_math_Nova_Math.h>
#include <nova/standard/datastruct/list/nova_standard_datastruct_list_Nova_IntArrayIterator.h>


typedef struct nova_standard_datastruct_list_Extension_VTable_IntArray nova_standard_datastruct_list_Extension_VTable_IntArray;
struct nova_standard_datastruct_list_Extension_VTable_IntArray
{
	nova_Interface_VTable itable;
	long_long (*nova_standard_Nova_Object_virtual1_Nova_getHashCodeLong)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_Nova_Object_virtual1_Nova_toString)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*);
	char (*nova_standard_operators_Nova_Equals_virtual0_Nova_equals)(nova_standard_Nova_Object*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
	nova_standard_Nova_Object** (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_toArray)(nova_standard_datastruct_list_Nova_Array*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_datastruct_list_Nova_Array* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_map)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure3_Nova_mapFunc nova_standard_datastruct_list_Nova_IntArray_Nova_mapFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_mapFunc);
	void (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure6_Nova_func nova_standard_datastruct_list_Nova_IntArray_Nova_func, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_func);
	char (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_any)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure9_Nova_anyFunc nova_standard_datastruct_list_Nova_IntArray_Nova_anyFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_anyFunc);
	char (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_all)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure12_Nova_allFunc nova_standard_datastruct_list_Nova_IntArray_Nova_allFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_allFunc);
	nova_standard_datastruct_list_Nova_IntArray* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure15_Nova_filterFunc nova_standard_datastruct_list_Nova_IntArray_Nova_filterFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_filterFunc);
	nova_standard_datastruct_list_Nova_IntArray* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_take)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, int);
	nova_standard_datastruct_list_Nova_IntArray* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_skip)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, int);
	int (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_first)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*);
	int (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_last)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*);
	int (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_IntArray_closure18_Nova_func nova_standard_datastruct_list_Nova_IntArray_Nova_func, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_func);
	nova_standard_datastruct_list_Nova_IntArray* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_reverse)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*);
	nova_standard_Nova_String* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_join)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_String*);
	nova_standard_datastruct_list_Nova_IntArrayIterator* (*nova_standard_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator)(nova_standard_datastruct_list_Nova_IntArray*, nova_standard_exception_Nova_ExceptionData*);
};

extern nova_standard_datastruct_list_Extension_VTable_IntArray nova_standard_datastruct_list_Extension_VTable_IntArray_val;


CCLASS_CLASS
(
	nova_standard_datastruct_list_Nova_IntArray, 
	
	nova_standard_datastruct_list_Extension_VTable_IntArray* vtable;
	int nova_standard_datastruct_list_Nova_Array_Nova_capacity;
	int nova_standard_datastruct_list_Nova_Array_Nova_size;
	int nova_standard_datastruct_list_Nova_Array_Nova_position;
	nova_standard_Nova_String* nova_standard_datastruct_list_Nova_Array_Nova_stringsOnly;
	struct Private* prv;
)

void nova_standard_datastruct_list_Nova_IntArrayNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_0_Nova_IntArray(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_1_Nova_IntArray(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_list_Nova_IntArray_Nova_size);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_2_Nova_IntArray(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int* nova_standard_datastruct_list_Nova_IntArray_Nova_data, int nova_standard_datastruct_list_Nova_IntArray_Nova_size);
void nova_standard_datastruct_list_Nova_IntArray_Nova_destroy(nova_standard_datastruct_list_Nova_IntArray** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_list_Nova_IntArray_0_Nova_this(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_list_Nova_IntArray_1_Nova_this(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_list_Nova_IntArray_Nova_size);
void nova_standard_datastruct_list_Nova_IntArray_2_Nova_this(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int* nova_standard_datastruct_list_Nova_IntArray_Nova_data, int nova_standard_datastruct_list_Nova_IntArray_Nova_size);
nova_standard_datastruct_list_Nova_Array* nova_standard_datastruct_list_Nova_IntArray_Nova_map(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure3_Nova_mapFunc nova_standard_datastruct_list_Nova_IntArray_Nova_mapFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_mapFunc);
void nova_standard_datastruct_list_Nova_IntArray_Nova_forEach(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure6_Nova_func nova_standard_datastruct_list_Nova_IntArray_Nova_func, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_func);
char nova_standard_datastruct_list_Nova_IntArray_Nova_any(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure9_Nova_anyFunc nova_standard_datastruct_list_Nova_IntArray_Nova_anyFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_anyFunc);
char nova_standard_datastruct_list_Nova_IntArray_Nova_all(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure12_Nova_allFunc nova_standard_datastruct_list_Nova_IntArray_Nova_allFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_allFunc);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_Nova_filter(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure15_Nova_filterFunc nova_standard_datastruct_list_Nova_IntArray_Nova_filterFunc, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_filterFunc);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_Nova_take(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_list_Nova_IntArray_Nova_howMany);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_Nova_skip(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int nova_standard_datastruct_list_Nova_IntArray_Nova_howMany);
int nova_standard_datastruct_list_Nova_IntArray_Nova_first(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
int nova_standard_datastruct_list_Nova_IntArray_Nova_last(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
int nova_standard_datastruct_list_Nova_IntArray_Nova_firstWhere(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_datastruct_list_Nova_IntArray_closure18_Nova_func nova_standard_datastruct_list_Nova_IntArray_Nova_func, void* nova_standard_datastruct_list_Nova_IntArray_ref_Nova_func);
nova_standard_datastruct_list_Nova_IntArray* nova_standard_datastruct_list_Nova_IntArray_Nova_reverse(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_Nova_String* nova_standard_datastruct_list_Nova_IntArray_Nova_join(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* nova_standard_datastruct_list_Nova_IntArray_Nova_delimiter);
nova_standard_datastruct_list_Nova_IntArrayIterator* nova_standard_datastruct_list_Nova_IntArray_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_datastruct_list_Nova_IntArray_0_Nova_super(nova_standard_datastruct_list_Nova_IntArray* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif
