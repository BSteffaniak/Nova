#ifndef NOVA_INTERFACE_VTABLE
#define NOVA_INTERFACE_VTABLE

typedef struct nova_datastruct_Nova_Comparable nova_datastruct_Nova_Comparable;
typedef struct nova_exception_Nova_ExceptionData nova_exception_Nova_ExceptionData;
typedef struct nova_Nova_Object nova_Nova_Object;
typedef struct nova_datastruct_list_Nova_Iterable nova_datastruct_list_Nova_Iterable;
typedef struct nova_datastruct_list_Nova_Iterator nova_datastruct_list_Nova_Iterator;
typedef struct nova_datastruct_list_Nova_List nova_datastruct_list_Nova_List;
typedef struct nova_datastruct_list_Nova_Array nova_datastruct_list_Nova_Array;
typedef struct nova_Nova_String nova_Nova_String;
typedef struct nova_io_Nova_InputStream nova_io_Nova_InputStream;
typedef struct nova_operators_Nova_Equals nova_operators_Nova_Equals;
typedef struct nova_operators_Nova_Multiply nova_operators_Nova_Multiply;
typedef struct example_Nova_Polygon example_Nova_Polygon;
typedef char (*nova_Nova_String_closure1_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_String_closure2_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef char (*nova_Nova_String_closure3_Nova_transform)(void*, nova_exception_Nova_ExceptionData*, char, int, void*);
typedef struct nova_datastruct_Nova_Pair nova_datastruct_Nova_Pair;
typedef char (*nova_datastruct_Nova_HashMap_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef struct nova_datastruct_Nova_HashMap nova_datastruct_Nova_HashMap;
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_closure7_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_closure8_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashMap_closure9_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure10_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure11_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure12_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure13_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure14_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef char (*nova_datastruct_Nova_HashMap_closure15_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, void*);
typedef void (*nova_datastruct_Nova_HashMap_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef void (*nova_datastruct_Nova_HashMap_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef void (*nova_datastruct_Nova_HashMap_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_datastruct_Nova_Pair*, int, nova_datastruct_Nova_HashMap*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef struct nova_datastruct_Nova_HashSet nova_datastruct_Nova_HashSet;
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure7_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure8_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_Nova_HashSet_closure9_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure10_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure11_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure12_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure13_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure14_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_Nova_HashSet_closure15_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef void (*nova_datastruct_Nova_HashSet_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_Nova_HashSet*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_Array_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef void (*nova_datastruct_list_Nova_Array_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_Array*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_Array_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef struct nova_datastruct_list_Nova_CharArray nova_datastruct_list_Nova_CharArray;
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_CharArray_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_CharArray_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_CharArray_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef void (*nova_datastruct_list_Nova_CharArray_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef void (*nova_datastruct_list_Nova_CharArray_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef void (*nova_datastruct_list_Nova_CharArray_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, char, int, nova_datastruct_list_Nova_CharArray*, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef char (*nova_datastruct_list_Nova_CharArray_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, char, void*);
typedef struct nova_datastruct_list_Nova_DoubleArray nova_datastruct_list_Nova_DoubleArray;
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_DoubleArray_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_DoubleArray_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_DoubleArray_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef void (*nova_datastruct_list_Nova_DoubleArray_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef void (*nova_datastruct_list_Nova_DoubleArray_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef void (*nova_datastruct_list_Nova_DoubleArray_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, double, int, nova_datastruct_list_Nova_DoubleArray*, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef char (*nova_datastruct_list_Nova_DoubleArray_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, double, void*);
typedef struct nova_datastruct_list_Nova_IntArray nova_datastruct_list_Nova_IntArray;
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure1_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure2_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntArray_closure3_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure4_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure5_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef void (*nova_datastruct_list_Nova_IntArray_closure6_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntArray*, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntArray_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef struct nova_datastruct_list_Nova_IntRange nova_datastruct_list_Nova_IntRange;
typedef void (*nova_datastruct_list_Nova_IntRange_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef void (*nova_datastruct_list_Nova_IntRange_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef void (*nova_datastruct_list_Nova_IntRange_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntRange_closure4_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntRange_closure5_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_IntRange_closure6_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, int, int, nova_datastruct_list_Nova_IntRange*, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
typedef char (*nova_datastruct_list_Nova_IntRange_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, int, void*);
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
typedef void (*nova_datastruct_list_Nova_List_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_list_Nova_List_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef void (*nova_datastruct_list_Nova_List_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure4_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure5_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef nova_Nova_Object* (*nova_datastruct_list_Nova_List_closure6_Nova_mapFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure7_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure8_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure9_Nova_anyFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure10_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure11_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure12_Nova_allFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure13_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure14_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure15_Nova_filterFunc)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, int, nova_datastruct_list_Nova_List*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure16_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure17_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef char (*nova_datastruct_list_Nova_List_closure18_Nova_func)(void*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*, void*);
typedef void (*nova_thread_async_Nova_Async_closure1_Nova_func)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_async_Nova_Async_closure2_Nova_func)(void*, nova_exception_Nova_ExceptionData*, void*);
typedef void (*nova_thread_async_Nova_Async_closure3_Nova_func)(void*, nova_exception_Nova_ExceptionData*, void*);

typedef struct nova_Interface_VTable
{
int (*nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo)(nova_datastruct_Nova_Comparable*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterable_virtual_Accessor1_Nova_iterator)(nova_datastruct_list_Nova_Iterable*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Iterator* (*nova_datastruct_list_Nova_Iterator_virtual0_Nova_reset)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
char (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
nova_Nova_Object* (*nova_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next)(nova_datastruct_list_Nova_Iterator*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*nova_datastruct_list_Nova_List_virtual0_Nova_toArray)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_contains)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
void (*nova_datastruct_list_Nova_List_virtual0_Nova_forEach)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure3_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_map)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure6_Nova_mapFunc nova_datastruct_list_Nova_List_Nova_mapFunc, void* nova_datastruct_list_Nova_List_ref_Nova_mapFunc, void* mapFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_any)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure9_Nova_anyFunc nova_datastruct_list_Nova_List_Nova_anyFunc, void* nova_datastruct_list_Nova_List_ref_Nova_anyFunc, void* anyFunc_context);
char (*nova_datastruct_list_Nova_List_virtual0_Nova_all)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure12_Nova_allFunc nova_datastruct_list_Nova_List_Nova_allFunc, void* nova_datastruct_list_Nova_List_ref_Nova_allFunc, void* allFunc_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_filter)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure15_Nova_filterFunc nova_datastruct_list_Nova_List_Nova_filterFunc, void* nova_datastruct_list_Nova_List_ref_Nova_filterFunc, void* filterFunc_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_take)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_skip)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, int);
nova_Nova_Object* (*nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_datastruct_list_Nova_List_closure18_Nova_func nova_datastruct_list_Nova_List_Nova_func, void* nova_datastruct_list_Nova_List_ref_Nova_func, void* func_context);
nova_datastruct_list_Nova_List* (*nova_datastruct_list_Nova_List_virtual0_Nova_reverse)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*);
nova_Nova_String* (*nova_datastruct_list_Nova_List_virtual0_Nova_join)(nova_datastruct_list_Nova_List*, nova_exception_Nova_ExceptionData*, nova_Nova_String*);
nova_Nova_String* (*nova_io_Nova_InputStream_virtual1_Nova_readString)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*);
nova_datastruct_list_Nova_Array* (*nova_io_Nova_InputStream_virtual1_Nova_readBytes)(nova_io_Nova_InputStream*, nova_exception_Nova_ExceptionData*);
char (*nova_operators_Nova_Equals_virtual0_Nova_equals)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
nova_Nova_Object* (*nova_operators_Nova_Multiply_virtual1_Nova_multiply)(nova_operators_Nova_Multiply*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*);
int (*example_Nova_Polygon_virtual1_Nova_numberSides)(example_Nova_Polygon*, nova_exception_Nova_ExceptionData*);
double (*example_Nova_Polygon_virtual1_Nova_calculateArea)(example_Nova_Polygon*, nova_exception_Nova_ExceptionData*);
} nova_Interface_VTable;

#endif
