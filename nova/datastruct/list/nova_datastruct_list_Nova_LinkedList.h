#pragma once
#ifndef FILE_nova_datastruct_list_Nova_LinkedList_NOVA
#define FILE_nova_datastruct_list_Nova_LinkedList_NOVA

typedef struct nova_datastruct_list_Nova_LinkedList nova_datastruct_list_Nova_LinkedList;

typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_LinkedList nova_datastruct_list_Nova_LinkedList;

typedef nova_Nova_Object* (*nova_datastruct_list_Nova_LinkedList_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_LinkedList_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_LinkedList_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef void (*nova_datastruct_list_Nova_LinkedList_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef void (*nova_datastruct_list_Nova_LinkedList_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef void (*nova_datastruct_list_Nova_LinkedList_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_LinkedList*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_LinkedList_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);

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
#include <nova/datastruct/list/nova_datastruct_list_Nova_ArrayIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_LinkedListIterator.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_List.h>
#include <nova/datastruct/list/nova_datastruct_list_Nova_ListNode.h>


typedef struct nova_datastruct_list_Extension_VTable_LinkedList nova_datastruct_list_Extension_VTable_LinkedList;
struct nova_datastruct_list_Extension_VTable_LinkedList
{
	nova_Interface_VTable itable;
	nova_Nova_String* (*nova_Nova_Object_virtual1_Nova_toString)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	char (*nova_operators_Nova_Equals_virtual0_Nova_equals)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	long_long (*nova_Nova_Object_virtual_Accessor_Nova_hashCodeLong)(nova_Nova_Object*, nova_exception_Nova_ExceptionData*);
	char (*nova_datastruct_list_Nova_List_virtual0_Nova_contains)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
	nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_virtual0_Nova_toArray)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*);
	nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_List_virtual0_Nova_map)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure3_Nova_mapFunc nova_datastruct_list_Nova_LinkedList_Nova_mapFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, void* mapFunc_context);
	void (*nova_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure6_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context);
	char (*nova_datastruct_list_Nova_List_virtual0_Nova_any)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure9_Nova_anyFunc nova_datastruct_list_Nova_LinkedList_Nova_anyFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, void* anyFunc_context);
	char (*nova_datastruct_list_Nova_List_virtual0_Nova_all)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure12_Nova_allFunc nova_datastruct_list_Nova_LinkedList_Nova_allFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, void* allFunc_context);
	nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure15_Nova_filterFunc nova_datastruct_list_Nova_LinkedList_Nova_filterFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, void* filterFunc_context);
	nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_List_virtual0_Nova_take)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, int);
	nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_List_virtual0_Nova_skip)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, int);
	nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_LinkedList_closure18_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context);
	nova_datastruct_list_Nova_LinkedList* (*nova_datastruct_list_Nova_List_virtual0_Nova_reverse)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*);
	nova_Nova_String* (*nova_datastruct_list_Nova_List_virtual0_Nova_join)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
	nova_datastruct_list_Nova_LinkedListIterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator)(nova_datastruct_list_Nova_LinkedList*, nova_exception_Nova_ExceptionData*);
};

extern nova_datastruct_list_Extension_VTable_LinkedList nova_datastruct_list_Extension_VTable_LinkedList_val;


CCLASS_CLASS
(
	nova_datastruct_list_Nova_LinkedList, 
	
	nova_datastruct_list_Extension_VTable_LinkedList* vtable;
	int nova_datastruct_list_Nova_LinkedList_Nova_size;
	struct Private* prv;
)

void nova_datastruct_list_Nova_LinkedList_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_construct(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_LinkedList_Nova_destroy(nova_datastruct_list_Nova_LinkedList** this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_addAll(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_LinkedList_Nova_data);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_add(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_Nova_data);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_Nova_remove(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_Nova_data);
char nova_datastruct_list_Nova_LinkedList_0_Nova_contains(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_Nova_value);
nova_datastruct_list_Nova_Array* nova_datastruct_list_Nova_LinkedList_0_Nova_toArray(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_map(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure3_Nova_mapFunc nova_datastruct_list_Nova_LinkedList_Nova_mapFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_mapFunc, void* mapFunc_context);
void nova_datastruct_list_Nova_LinkedList_0_Nova_forEach(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure6_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context);
char nova_datastruct_list_Nova_LinkedList_0_Nova_any(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure9_Nova_anyFunc nova_datastruct_list_Nova_LinkedList_Nova_anyFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_anyFunc, void* anyFunc_context);
char nova_datastruct_list_Nova_LinkedList_0_Nova_all(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure12_Nova_allFunc nova_datastruct_list_Nova_LinkedList_Nova_allFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_allFunc, void* allFunc_context);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_filter(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure15_Nova_filterFunc nova_datastruct_list_Nova_LinkedList_Nova_filterFunc, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_take(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_LinkedList_Nova_howMany);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_skip(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, int nova_datastruct_list_Nova_LinkedList_Nova_howMany);
nova_Nova_Object* nova_datastruct_list_Nova_LinkedList_0_Nova_firstWhere(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_LinkedList_closure18_Nova_func nova_datastruct_list_Nova_LinkedList_Nova_func, void* nova_datastruct_list_Nova_LinkedList_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_LinkedList* nova_datastruct_list_Nova_LinkedList_0_Nova_reverse(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_Nova_String* nova_datastruct_list_Nova_LinkedList_0_Nova_join(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData, nova_Nova_String* nova_datastruct_list_Nova_LinkedList_Nova_delimiter);
void nova_datastruct_list_Nova_LinkedList_0_Nova_this(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_LinkedListIterator* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_iterator(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_first(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
nova_datastruct_list_Nova_ListNode* nova_datastruct_list_Nova_LinkedList_Accessor_Nova_last(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);
void nova_datastruct_list_Nova_LinkedList_Nova_super(nova_datastruct_list_Nova_LinkedList* this, nova_exception_Nova_ExceptionData* exceptionData);

#endif
