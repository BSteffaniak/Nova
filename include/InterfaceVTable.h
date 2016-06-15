#ifndef NOVA_INTERFACE_VTABLE
#define NOVA_INTERFACE_VTABLE

typedef struct nova_standard_datastruct_Nova_Comparable nova_standard_datastruct_Nova_Comparable;
typedef struct nova_standard_exception_Nova_ExceptionData nova_standard_exception_Nova_ExceptionData;
typedef struct nova_standard_Nova_Object nova_standard_Nova_Object;
typedef struct nova_standard_datastruct_list_Nova_Iterator nova_standard_datastruct_list_Nova_Iterator;
typedef struct nova_standard_datastruct_list_Nova_List nova_standard_datastruct_list_Nova_List;
typedef struct nova_standard_io_Nova_InputStream nova_standard_io_Nova_InputStream;
typedef struct nova_standard_Nova_String nova_standard_Nova_String;
typedef struct nova_standard_operators_Nova_Equals nova_standard_operators_Nova_Equals;
typedef struct nova_standard_operators_Nova_Multiply nova_standard_operators_Nova_Multiply;
typedef struct example_Nova_Polygon example_Nova_Polygon;
typedef char (*nova_standard_Nova_String_closure1_Nova_transform)(void*, nova_standard_exception_Nova_ExceptionData*, char);
typedef char (*nova_standard_Nova_String_closure2_Nova_transform)(void*, nova_standard_exception_Nova_ExceptionData*, char);
typedef char (*nova_standard_Nova_String_closure3_Nova_transform)(void*, nova_standard_exception_Nova_ExceptionData*, char);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_Array_closure1_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_Array_closure2_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_Array_closure3_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef struct nova_standard_datastruct_list_Nova_Array nova_standard_datastruct_list_Nova_Array;
typedef void (*nova_standard_datastruct_list_Nova_Array_closure4_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_Array*);
typedef void (*nova_standard_datastruct_list_Nova_Array_closure5_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_Array*);
typedef void (*nova_standard_datastruct_list_Nova_Array_closure6_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_Array*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure7_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure8_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure9_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure10_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure11_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure12_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure13_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure14_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure15_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure16_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure17_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_Array_closure18_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef void (*nova_standard_datastruct_list_Nova_List_closure1_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_List*);
typedef void (*nova_standard_datastruct_list_Nova_List_closure2_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_List*);
typedef void (*nova_standard_datastruct_list_Nova_List_closure3_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*, int, nova_standard_datastruct_list_Nova_List*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_closure4_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_closure5_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_closure6_Nova_mapFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure7_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure8_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure9_Nova_anyFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure10_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure11_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure12_Nova_allFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure13_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure14_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure15_Nova_filterFunc)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure16_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure17_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
typedef char (*nova_standard_datastruct_list_Nova_List_closure18_Nova_func)(void*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);

typedef struct nova_Interface_VTable
{
int (*nova_standard_datastruct_Nova_Comparable_virtual0_Nova_compareTo)(nova_standard_datastruct_Nova_Comparable*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
nova_standard_datastruct_list_Nova_Iterator* (*nova_standard_datastruct_list_Nova_Iterator_virtual0_Nova_reset)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*);
char (*nova_standard_datastruct_list_Nova_Iterator_Accessor_Nova_hasNext)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*);
void (*nova_standard_datastruct_list_Nova_Iterator_Mutator_Nova_hasNext)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*);
nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_Iterator_Accessor_Nova_next)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*);
void (*nova_standard_datastruct_list_Nova_Iterator_Mutator_Nova_next)(nova_standard_datastruct_list_Nova_Iterator*, nova_standard_exception_Nova_ExceptionData*);
void (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure3_Nova_func nova_standard_datastruct_list_Nova_List_Nova_func, void* nova_standard_datastruct_list_Nova_List_ref_Nova_func);
nova_standard_datastruct_list_Nova_List* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_map)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_standard_datastruct_list_Nova_List_Nova_mapFunc, void* nova_standard_datastruct_list_Nova_List_ref_Nova_mapFunc);
char (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_any)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_standard_datastruct_list_Nova_List_Nova_anyFunc, void* nova_standard_datastruct_list_Nova_List_ref_Nova_anyFunc);
char (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_all)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure12_Nova_allFunc nova_standard_datastruct_list_Nova_List_Nova_allFunc, void* nova_standard_datastruct_list_Nova_List_ref_Nova_allFunc);
nova_standard_datastruct_list_Nova_List* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_standard_datastruct_list_Nova_List_Nova_filterFunc, void* nova_standard_datastruct_list_Nova_List_ref_Nova_filterFunc);
nova_standard_datastruct_list_Nova_List* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_take)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, int);
nova_standard_datastruct_list_Nova_List* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_skip)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, int);
nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_first)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*);
nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_last)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*);
nova_standard_Nova_Object* (*nova_standard_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_standard_datastruct_list_Nova_List*, nova_standard_exception_Nova_ExceptionData*, nova_standard_datastruct_list_Nova_List_closure18_Nova_func nova_standard_datastruct_list_Nova_List_Nova_func, void* nova_standard_datastruct_list_Nova_List_ref_Nova_func);
nova_standard_Nova_String* (*nova_standard_io_Nova_InputStream_virtual0_Nova_readString)(nova_standard_io_Nova_InputStream*, nova_standard_exception_Nova_ExceptionData*);
char* (*nova_standard_io_Nova_InputStream_virtual0_Nova_readBytes)(nova_standard_io_Nova_InputStream*, nova_standard_exception_Nova_ExceptionData*);
char (*nova_standard_operators_Nova_Equals_virtual0_Nova_equals)(nova_standard_operators_Nova_Equals*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
nova_standard_Nova_Object* (*nova_standard_operators_Nova_Multiply_virtual0_Nova_multiply)(nova_standard_operators_Nova_Multiply*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*);
int (*example_Nova_Polygon_virtual0_Nova_numberSides)(example_Nova_Polygon*, nova_standard_exception_Nova_ExceptionData*);
double (*example_Nova_Polygon_virtual0_Nova_calculateArea)(example_Nova_Polygon*, nova_standard_exception_Nova_ExceptionData*);
} nova_Interface_VTable;

#endif
