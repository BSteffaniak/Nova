#include <precompiled.h>
#include "NovaNativeInterface.h"

nova_env novaEnv = {
{
&nova_standard_Nova_Class_Nova_construct,
},

{
&nova_standard_Nova_Null_Nova_toString,
&nova_standard_Nova_Null_Nova_concat,
&nova_standard_Nova_Null_0_Nova_construct,
},

{
&nova_standard_Nova_Object_Nova_getHashCode,
0,
0,
0,
&nova_standard_Nova_Object_0_Nova_construct,
},

{
0,
&nova_standard_Nova_String_Nova_equals,
&nova_standard_Nova_String_1_Nova_indexOf,
&nova_standard_Nova_String_2_Nova_indexOf,
&nova_standard_Nova_String_Nova_lastIndexOf,
&nova_standard_Nova_String_0_Nova_substring,
&nova_standard_Nova_String_1_Nova_substring,
&nova_standard_Nova_String_Nova_lastChar,
&nova_standard_Nova_String_Nova_charAt,
&nova_standard_Nova_String_Nova_trim,
&nova_standard_Nova_String_Nova_toLowerCase,
&nova_standard_Nova_String_Nova_toUpperCase,
&nova_standard_Nova_String_Nova_transform,
&nova_standard_Nova_String_0_Nova_getDataBetween,
&nova_standard_Nova_String_1_Nova_getDataBetween,
&nova_standard_Nova_String_Nova_compareTo,
0,
&nova_standard_Nova_String_1_Nova_construct,
&nova_standard_Nova_String_2_Nova_construct,
},

{
&nova_standard_Nova_System_0_Nova_exit,
&nova_standard_Nova_System_1_Nova_exit,
&nova_standard_Nova_System_2_Nova_exit,
&nova_standard_Nova_System_Nova_execute,
&nova_standard_Nova_System_0_Nova_construct,
},

{
&nova_standard_database_Nova_DBConnector_0_Nova_connect,
&nova_standard_database_Nova_DBConnector_1_Nova_connect,
&nova_standard_database_Nova_DBConnector_2_Nova_connect,
&nova_standard_database_Nova_DBConnector_Nova_updateError,
&nova_standard_database_Nova_DBConnector_Nova_changeUser,
&nova_standard_database_Nova_DBConnector_Nova_query,
&nova_standard_database_Nova_DBConnector_Nova_close,
&nova_standard_database_Nova_DBConnector_0_Nova_construct,
},

{
&nova_standard_database_Nova_ResultSet_Nova_construct,
},

{
&nova_standard_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_standard_datastruct_Nova_BinaryNode_Nova_construct,
&nova_standard_datastruct_Nova_BinaryNode_0_Nova_construct,
},

{
&nova_standard_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_standard_datastruct_Nova_BinaryTree_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Bounds_Nova_extractString,
&nova_standard_datastruct_Nova_Bounds_Nova_extractPreString,
&nova_standard_datastruct_Nova_Bounds_Nova_extractPostString,
&nova_standard_datastruct_Nova_Bounds_Nova_trimString,
&nova_standard_datastruct_Nova_Bounds_Nova_invalidate,
&nova_standard_datastruct_Nova_Bounds_0_Nova_equals,
&nova_standard_datastruct_Nova_Bounds_1_Nova_toString,
&nova_standard_datastruct_Nova_Bounds_Nova_cloneTo,
&nova_standard_datastruct_Nova_Bounds_Nova_clone,
&nova_standard_datastruct_Nova_Bounds_0_Nova_construct,
&nova_standard_datastruct_Nova_Bounds_1_Nova_construct,
},

{
0,
},

{
0,
&nova_standard_datastruct_Nova_HashMap_Nova_get,
&nova_standard_datastruct_Nova_HashMap_Nova_remove,
&nova_standard_datastruct_Nova_HashMap_Nova_containsKey,
&nova_standard_datastruct_Nova_HashMap_0_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Node_0_Nova_preorder,
&nova_standard_datastruct_Nova_Node_0_Nova_inorder,
&nova_standard_datastruct_Nova_Node_0_Nova_postorder,
&nova_standard_datastruct_Nova_Node_0_Nova_levelorder,
&nova_standard_datastruct_Nova_Node_1_Nova_toString,
&nova_standard_datastruct_Nova_Node_2_Nova_construct,
&nova_standard_datastruct_Nova_Node_3_Nova_construct,
&nova_standard_datastruct_Nova_Node_4_Nova_construct,
&nova_standard_datastruct_Nova_Node_5_Nova_construct,
},

{
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_put,
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_getKey,
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_getValue,
&nova_standard_datastruct_Nova_ReversibleHashMap_0_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Tree_Nova_preorder,
&nova_standard_datastruct_Nova_Tree_Nova_inorder,
&nova_standard_datastruct_Nova_Tree_Nova_postorder,
&nova_standard_datastruct_Nova_Tree_Nova_levelorder,
&nova_standard_datastruct_Nova_Tree_0_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Vector_0_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Vector2D_0_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Array_0_Nova_add,
&nova_standard_datastruct_list_Nova_Array_1_Nova_add,
&nova_standard_datastruct_list_Nova_Array_Nova_remove,
&nova_standard_datastruct_list_Nova_Array_Nova_swap,
&nova_standard_datastruct_list_Nova_Array_Nova_get,
&nova_standard_datastruct_list_Nova_Array_Nova_set,
&nova_standard_datastruct_list_Nova_Array_Nova_toArray,
&nova_standard_datastruct_list_Nova_Array_Nova_map,
&nova_standard_datastruct_list_Nova_Array_Nova_forEach,
&nova_standard_datastruct_list_Nova_Array_Nova_any,
&nova_standard_datastruct_list_Nova_Array_Nova_all,
&nova_standard_datastruct_list_Nova_Array_Nova_filter,
&nova_standard_datastruct_list_Nova_Array_Nova_take,
&nova_standard_datastruct_list_Nova_Array_Nova_skip,
&nova_standard_datastruct_list_Nova_Array_Nova_first,
&nova_standard_datastruct_list_Nova_Array_Nova_last,
&nova_standard_datastruct_list_Nova_Array_Nova_firstWhere,
&nova_standard_datastruct_list_Nova_Array_Nova_sumSize,
&nova_standard_datastruct_list_Nova_Array_Nova_reverse,
&nova_standard_datastruct_list_Nova_Array_Nova_join,
&nova_standard_datastruct_list_Nova_Array_0_Nova_construct,
&nova_standard_datastruct_list_Nova_Array_1_Nova_construct,
&nova_standard_datastruct_list_Nova_Array_2_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_CompiledList_0_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_EmptyStackException_Nova_construct,
&nova_standard_datastruct_list_Nova_EmptyStackException_0_Nova_construct,
},

{
},

{
0,
},

{
&nova_standard_datastruct_list_Nova_LinkedList_Nova_add,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_remove,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_toArray,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_map,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_forEach,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_any,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_all,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_filter,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_take,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_skip,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_first,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_last,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_firstWhere,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_reverse,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_join,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_LinkedListIterator_0_Nova_reset,
&nova_standard_datastruct_list_Nova_LinkedListIterator_Nova_construct,
},

{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
},

{
&nova_standard_datastruct_list_Nova_ListNode_Nova_clone,
&nova_standard_datastruct_list_Nova_ListNode_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_NoSuchElementException_1_Nova_construct,
&nova_standard_datastruct_list_Nova_NoSuchElementException_2_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_standard_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_standard_datastruct_list_Nova_Queue_1_Nova_toString,
&nova_standard_datastruct_list_Nova_Queue_0_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Stack_Nova_push,
&nova_standard_datastruct_list_Nova_Stack_Nova_pop,
&nova_standard_datastruct_list_Nova_Stack_0_Nova_construct,
},

{
&nova_standard_exception_Nova_DivideByZeroException_3_Nova_construct,
},

{
&nova_standard_exception_Nova_Exception_3_Nova_construct,
&nova_standard_exception_Nova_Exception_4_Nova_construct,
},

{
&nova_standard_exception_Nova_ExceptionData_Nova_addCode,
&nova_standard_exception_Nova_ExceptionData_Nova_getBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_getCorrectData,
&nova_standard_exception_Nova_ExceptionData_Nova_getCorrectBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_jumpToBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_getParent,
&nova_standard_exception_Nova_ExceptionData_Nova_setParent,
&nova_standard_exception_Nova_ExceptionData_Nova_construct,
},

{
&nova_standard_exception_Nova_UnimplementedOperationException_4_Nova_construct,
},

{
&nova_standard_gc_Nova_GC_Nova_init,
&nova_standard_gc_Nova_GC_Nova_collect,
&nova_standard_gc_Nova_GC_Nova_enableIncremental,
&nova_standard_gc_Nova_GC_Nova_dump,
&nova_standard_gc_Nova_GC_0_Nova_construct,
},

{
&nova_standard_io_Nova_Console_0_Nova_writeLine,
&nova_standard_io_Nova_Console_1_Nova_writeLine,
&nova_standard_io_Nova_Console_2_Nova_writeLine,
&nova_standard_io_Nova_Console_3_Nova_writeLine,
&nova_standard_io_Nova_Console_4_Nova_writeLine,
&nova_standard_io_Nova_Console_5_Nova_writeLine,
&nova_standard_io_Nova_Console_6_Nova_writeLine,
&nova_standard_io_Nova_Console_7_Nova_writeLine,
&nova_standard_io_Nova_Console_8_Nova_writeLine,
&nova_standard_io_Nova_Console_9_Nova_writeLine,
&nova_standard_io_Nova_Console_0_Nova_write,
&nova_standard_io_Nova_Console_1_Nova_write,
&nova_standard_io_Nova_Console_2_Nova_write,
&nova_standard_io_Nova_Console_3_Nova_write,
&nova_standard_io_Nova_Console_4_Nova_write,
&nova_standard_io_Nova_Console_5_Nova_write,
&nova_standard_io_Nova_Console_6_Nova_write,
&nova_standard_io_Nova_Console_7_Nova_write,
&nova_standard_io_Nova_Console_8_Nova_write,
&nova_standard_io_Nova_Console_Nova_readInt,
&nova_standard_io_Nova_Console_Nova_readDouble,
&nova_standard_io_Nova_Console_Nova_readChar,
&nova_standard_io_Nova_Console_Nova_readLine,
&nova_standard_io_Nova_Console_Nova_readPassword,
&nova_standard_io_Nova_Console_Nova_setEcho,
&nova_standard_io_Nova_Console_Nova_clearScreen,
&nova_standard_io_Nova_Console_Nova_waitForEnter,
&nova_standard_io_Nova_Console_0_Nova_construct,
},

{
&nova_standard_io_Nova_File_Nova_delete,
&nova_standard_io_Nova_File_Nova_reopen,
&nova_standard_io_Nova_File_Nova_rewind,
&nova_standard_io_Nova_File_Nova_clearContents,
&nova_standard_io_Nova_File_Nova_create,
&nova_standard_io_Nova_File_Nova_readAllContents,
&nova_standard_io_Nova_File_Nova_readLine,
&nova_standard_io_Nova_File_Nova_writeLine,
&nova_standard_io_Nova_File_Nova_write,
&nova_standard_io_Nova_File_Nova_flush,
&nova_standard_io_Nova_File_Nova_close,
&nova_standard_io_Nova_File_1_Nova_construct,
&nova_standard_io_Nova_File_2_Nova_construct,
},

{
&nova_standard_io_Nova_FileNotFoundException_Nova_construct,
},

{
0,
0,
},

{
0,
0,
&nova_standard_io_Nova_OutputStream_0_Nova_construct,
},

{
&nova_standard_io_Nova_StreamReader_Nova_readBytes,
&nova_standard_io_Nova_StreamReader_Nova_readString,
&nova_standard_io_Nova_StreamReader_Nova_construct,
},

{
&nova_standard_math_Nova_ArithmeticSequence_0_Nova_construct,
},

{
&nova_standard_math_Nova_Diekstra_0_Nova_construct,
},

{
&nova_standard_math_Nova_GeometricSequence_0_Nova_construct,
},

{
&nova_standard_math_Nova_Graph_0_Nova_construct,
},

{
&nova_standard_math_Nova_InvalidNumericStatementException_4_Nova_construct,
},

{
&nova_standard_math_Nova_Math_Nova_sign,
&nova_standard_math_Nova_Math_Nova_random,
&nova_standard_math_Nova_Math_0_Nova_abs,
&nova_standard_math_Nova_Math_1_Nova_abs,
&nova_standard_math_Nova_Math_Nova_sqrt,
&nova_standard_math_Nova_Math_Nova_pow,
&nova_standard_math_Nova_Math_Nova_sin,
&nova_standard_math_Nova_Math_Nova_cos,
&nova_standard_math_Nova_Math_Nova_tan,
&nova_standard_math_Nova_Math_Nova_asin,
&nova_standard_math_Nova_Math_Nova_acos,
&nova_standard_math_Nova_Math_Nova_atan,
&nova_standard_math_Nova_Math_Nova_round,
&nova_standard_math_Nova_Math_Nova_floor,
&nova_standard_math_Nova_Math_Nova_ceil,
&nova_standard_math_Nova_Math_0_Nova_construct,
},

{
&nova_standard_math_Nova_Matrix_Nova_sum,
&nova_standard_math_Nova_Matrix_Nova_construct,
},

{
0,
&nova_standard_math_Nova_NumericOperand_2_Nova_construct,
},

{
&nova_standard_math_Nova_NumericOperation_1_Nova_toString,
&nova_standard_math_Nova_NumericOperation_Nova_construct,
&nova_standard_math_Nova_NumericOperation_0_Nova_construct,
},

{
&nova_standard_math_Nova_NumericStatement_1_Nova_toString,
&nova_standard_math_Nova_NumericStatement_1_Nova_construct,
},

{
&nova_standard_math_Nova_NumericTree_1_Nova_toString,
&nova_standard_math_Nova_NumericTree_Nova_construct,
},

{
&nova_standard_math_Nova_Polynomial_Nova_construct,
},

{
&nova_standard_math_Nova_Sequence_Nova_sum,
&nova_standard_math_Nova_Sequence_1_Nova_construct,
},

{
&nova_standard_math_Nova_Statement_2_Nova_construct,
},

{
&nova_standard_math_Nova_StatementComponent_1_Nova_toString,
&nova_standard_math_Nova_StatementComponent_Nova_construct,
},

{
&nova_standard_math_Nova_VariableOperand_0_Nova_construct,
},

{
&nova_standard_math_calculus_Nova_Calculus_Nova_derivative,
&nova_standard_math_calculus_Nova_Calculus_0_Nova_construct,
},

{
&nova_standard_math_huffman_Nova_HuffmanTree_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_Conclusion_Nova_construct,
},

{
&nova_standard_math_logic_Nova_Hypothesis_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_InvalidFormulaException_4_Nova_construct,
},

{
&nova_standard_math_logic_Nova_LogicalConnective_Nova_construct,
},

{
&nova_standard_math_logic_Nova_LogicalStatement_1_Nova_toString,
&nova_standard_math_logic_Nova_LogicalStatement_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementComponent_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementGroup_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementLetter_Nova_construct,
},

{
&nova_standard_math_logic_Nova_WFF_Nova_construct,
},

{
&nova_standard_network_Nova_ClientSocket_Nova_connect,
&nova_standard_network_Nova_ClientSocket_Nova_close,
&nova_standard_network_Nova_ClientSocket_Nova_construct,
},

{
&nova_standard_network_Nova_ConnectionSocket_Nova_close,
&nova_standard_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_standard_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_standard_network_Nova_ConnectionSocket_Nova_write,
&nova_standard_network_Nova_ConnectionSocket_Nova_construct,
},

{
&nova_standard_network_Nova_NetworkInputStream_0_Nova_readString,
&nova_standard_network_Nova_NetworkInputStream_0_Nova_readBytes,
&nova_standard_network_Nova_NetworkInputStream_Nova_construct,
},

{
&nova_standard_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_1_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_Nova_construct,
},

{
&nova_standard_network_Nova_ServerSocket_Nova_start,
&nova_standard_network_Nova_ServerSocket_Nova_close,
&nova_standard_network_Nova_ServerSocket_Nova_acceptClient,
&nova_standard_network_Nova_ServerSocket_0_Nova_construct,
},

{
&nova_standard_network_Nova_Socket_0_Nova_construct,
},

{
0,
},

{
0,
},

{
&nova_standard_primitive_Nova_Bool_2_Nova_toString,
&nova_standard_primitive_Nova_Bool_3_Nova_toString,
&nova_standard_primitive_Nova_Bool_0_Nova_compareTo,
&nova_standard_primitive_Nova_Bool_1_Nova_construct,
},

{
&nova_standard_primitive_Nova_Null_0_Nova_toString,
&nova_standard_primitive_Nova_Null_0_Nova_concat,
&nova_standard_primitive_Nova_Null_0_Nova_construct,
},

{
&nova_standard_primitive_Nova_Primitive_2_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Byte_Nova_numDigits,
&nova_standard_primitive_number_Nova_Byte_2_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_3_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Byte_Nova_multiply,
&nova_standard_primitive_number_Nova_Byte_3_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Char_2_Nova_toString,
&nova_standard_primitive_number_Nova_Char_3_Nova_toString,
&nova_standard_primitive_number_Nova_Char_0_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_1_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_standard_primitive_number_Nova_Char_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Char_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Char_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Double_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Double_Nova_genString,
&nova_standard_primitive_number_Nova_Double_Nova_genBuffer,
&nova_standard_primitive_number_Nova_Double_Nova_repetition,
&nova_standard_primitive_number_Nova_Double_Nova_lastSignificantDigit,
&nova_standard_primitive_number_Nova_Double_2_Nova_toString,
&nova_standard_primitive_number_Nova_Double_3_Nova_toString,
&nova_standard_primitive_number_Nova_Double_Nova_parseDouble,
&nova_standard_primitive_number_Nova_Double_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Double_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Double_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Float_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Float_2_Nova_toString,
&nova_standard_primitive_number_Nova_Float_3_Nova_toString,
&nova_standard_primitive_number_Nova_Float_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Float_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Float_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Int_Nova_getHashCodeLong,
&nova_standard_primitive_number_Nova_Int_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Int_2_Nova_toString,
&nova_standard_primitive_number_Nova_Int_3_Nova_toString,
&nova_standard_primitive_number_Nova_Int_Nova_parseInt,
&nova_standard_primitive_number_Nova_Int_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Int_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Int_Nova_construct,
},

{
},

{
&nova_standard_primitive_number_Nova_Long_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Long_2_Nova_toString,
&nova_standard_primitive_number_Nova_Long_3_Nova_toString,
&nova_standard_primitive_number_Nova_Long_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Long_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Long_Nova_construct,
},

{
0,
&nova_standard_primitive_number_Nova_Number_4_Nova_construct,
},

{
},

{
&nova_standard_primitive_number_Nova_Short_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Short_2_Nova_toString,
&nova_standard_primitive_number_Nova_Short_3_Nova_toString,
&nova_standard_primitive_number_Nova_Short_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Short_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Short_Nova_construct,
},

{
&nova_standard_process_Nova_Process_Nova_construct,
},

{
&nova_standard_security_Nova_MD5_Nova_encrypt,
&nova_standard_security_Nova_MD5_0_Nova_construct,
},

{
&nova_standard_star_Nova_Window_Nova_create,
&nova_standard_star_Nova_Window_0_Nova_construct,
},

{
&nova_standard_star_Nova_WindowThread_Nova_run,
&nova_standard_star_Nova_WindowThread_1_Nova_construct,
},

{
&nova_standard_svg_Nova_SVG_Nova_generateOutput,
&nova_standard_svg_Nova_SVG_Nova_generateHTMLOutput,
&nova_standard_svg_Nova_SVG_0_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGCircle_Nova_generateOutput,
&nova_standard_svg_Nova_SVGCircle_1_Nova_toString,
&nova_standard_svg_Nova_SVGCircle_1_Nova_construct,
},

{
0,
&nova_standard_svg_Nova_SVGComponent_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGComponentList_Nova_generateOutput,
&nova_standard_svg_Nova_SVGComponentList_Nova_addChild,
&nova_standard_svg_Nova_SVGComponentList_0_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGComponentNode_0_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGMainComponent_0_Nova_generateOutput,
&nova_standard_svg_Nova_SVGMainComponent_2_Nova_construct,
},

{
&nova_standard_thread_Nova_Thread_Nova_start,
&nova_standard_thread_Nova_Thread_Nova_join,
&nova_standard_thread_Nova_Thread_Nova_kill,
&nova_standard_thread_Nova_Thread_Nova_sleep,
0,
&nova_standard_thread_Nova_Thread_2_Nova_construct,
},

{
&nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_UncaughtExceptionHandler,
0,
&nova_standard_thread_Nova_UncaughtExceptionHandler_0_Nova_construct,
},

{
&nova_standard_time_Nova_Date_Nova_decodeDate,
&nova_standard_time_Nova_Date_Nova_updateTime,
&nova_standard_time_Nova_Date_0_Nova_formatDate,
&nova_standard_time_Nova_Date_1_Nova_formatDate,
&nova_standard_time_Nova_Date_0_Nova_construct,
},

{
&nova_standard_time_Nova_Time_0_Nova_construct,
},

{
&nova_standard_time_Nova_Timer_Nova_start,
&nova_standard_time_Nova_Timer_Nova_stop,
&nova_standard_time_Nova_Timer_0_Nova_construct,
},

{
0,
0,
0,
&example_Nova_Animal_1_Nova_toString,
&example_Nova_Animal_0_Nova_construct,
},

{
&example_Nova_ArrayDemo_Nova_main,
&example_Nova_ArrayDemo_0_Nova_construct,
},

{
&example_Nova_BodyBuilder_Nova_sayHello,
&example_Nova_BodyBuilder_1_Nova_construct,
},

{
&example_Nova_ClosureDemo_Nova_main,
&example_Nova_ClosureDemo_0_Nova_construct,
},

{
&example_Nova_Dog_Nova_getNumLegs,
&example_Nova_Dog_Nova_getNumEyes,
&example_Nova_Dog_Nova_getDescription,
&example_Nova_Dog_0_Nova_construct,
},

{
&example_Nova_ExceptionHandlingDemo_Nova_main,
&example_Nova_ExceptionHandlingDemo_0_Nova_construct,
},

{
&example_Nova_FileTest_Nova_main,
&example_Nova_FileTest_0_Nova_construct,
},

{
&example_Nova_GenericDemo_Nova_main,
&example_Nova_GenericDemo_0_Nova_construct,
},

{
&example_Nova_HashMapDemo_Nova_main,
&example_Nova_HashMapDemo_0_Nova_construct,
},

{
&example_Nova_IntegerTest_Nova_main,
&example_Nova_IntegerTest_0_Nova_construct,
},

{
&example_Nova_Lab_Nova_main,
&example_Nova_Lab_0_Nova_construct,
},

{
&example_Nova_MathDemo_Nova_main,
&example_Nova_MathDemo_0_Nova_construct,
},

{
&example_Nova_NonWholeDivisionException_3_Nova_construct,
},

{
0,
&example_Nova_Person_2_Nova_construct,
},

{
0,
0,
},

{
&example_Nova_PolymorphismDemo_Nova_main,
&example_Nova_PolymorphismDemo_0_Nova_construct,
},

{
&example_Nova_QueueDemo_Nova_main,
&example_Nova_QueueDemo_0_Nova_construct,
},

{
&example_Nova_Spider_0_Nova_getNumLegs,
&example_Nova_Spider_0_Nova_getNumEyes,
&example_Nova_Spider_0_Nova_getDescription,
&example_Nova_Spider_0_Nova_construct,
},

{
&example_Nova_Square_Nova_numberSides,
&example_Nova_Square_Nova_calculateArea,
&example_Nova_Square_Nova_construct,
},

{
&example_Nova_SVGTest_Nova_main,
&example_Nova_SVGTest_0_Nova_construct,
},

{
&example_Nova_T1_0_Nova_construct,
},

{
&example_Nova_T2_0_Nova_construct,
},

{
&example_Nova_Test_Nova_main,
&example_Nova_Test_0_Nova_construct,
},

{
&example_Nova_ThreadDemo_Nova_main,
&example_Nova_ThreadDemo_0_Nova_construct,
},

{
&example_Nova_ThreadDemoImplementation_0_Nova_run,
&example_Nova_ThreadDemoImplementation_Nova_construct,
},

{
&example_ackermann_Nova_Ackermann_Nova_main,
&example_ackermann_Nova_Ackermann_Nova_run,
&example_ackermann_Nova_Ackermann_Nova_run2,
&example_ackermann_Nova_Ackermann_0_Nova_construct,
},

{
&example_copy_Nova_Dog_Nova_construct,
},

{
&example_database_Nova_DatabaseDemo_Nova_main,
&example_database_Nova_DatabaseDemo_0_Nova_construct,
},

{
&example_network_Nova_ClientDemo_Nova_main,
&example_network_Nova_ClientDemo_0_Nova_construct,
},

{
&example_network_Nova_ConnectionThread_0_Nova_run,
&example_network_Nova_ConnectionThread_Nova_construct,
},

{
&example_network_Nova_OutputThread_0_Nova_run,
&example_network_Nova_OutputThread_Nova_construct,
},

{
&example_network_Nova_ServerDemo_Nova_main,
&example_network_Nova_ServerDemo_0_Nova_construct,
},

{
&stabilitytest_Nova_ClientThread_0_Nova_run,
&stabilitytest_Nova_ClientThread_Nova_construct,
},

{
&stabilitytest_Nova_ClosureStability_Nova_test,
&stabilitytest_Nova_ClosureStability_Nova_construct,
},

{
&stabilitytest_Nova_ExceptionStability_0_Nova_test,
&stabilitytest_Nova_ExceptionStability_0_Nova_construct,
},

{
&stabilitytest_Nova_FileStability_0_Nova_test,
&stabilitytest_Nova_FileStability_0_Nova_construct,
},

{
&stabilitytest_Nova_LambdaStability_0_Nova_test,
&stabilitytest_Nova_LambdaStability_0_Nova_construct,
},

{
&stabilitytest_Nova_NetworkStability_0_Nova_test,
&stabilitytest_Nova_NetworkStability_0_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphicSubClass_Nova_toString,
&stabilitytest_Nova_PolymorphicSubClass_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphicSuperClass_Nova_giveBirth,
0,
&stabilitytest_Nova_PolymorphicSuperClass_0_Nova_construct,
},

{
&stabilitytest_Nova_PolymorphismStability_0_Nova_test,
&stabilitytest_Nova_PolymorphismStability_0_Nova_construct,
},

{
&stabilitytest_Nova_StabilityExceptionHandler_Nova_uncaughtException,
&stabilitytest_Nova_StabilityExceptionHandler_Nova_construct,
},

{
&stabilitytest_Nova_StabilityTest_Nova_main,
&stabilitytest_Nova_StabilityTest_0_Nova_test,
&stabilitytest_Nova_StabilityTest_0_Nova_fail,
&stabilitytest_Nova_StabilityTest_1_Nova_fail,
&stabilitytest_Nova_StabilityTest_0_Nova_construct,
},

{
0,
&stabilitytest_Nova_StabilityTestCase_0_Nova_construct,
},

{
&stabilitytest_Nova_StabilityTestException_3_Nova_construct,
},

{
&stabilitytest_Nova_SyntaxStability_0_Nova_test,
&stabilitytest_Nova_SyntaxStability_0_Nova_construct,
},

{
&stabilitytest_Nova_ThreadImplementation_0_Nova_run,
&stabilitytest_Nova_ThreadImplementation_Nova_construct,
},

{
&stabilitytest_Nova_ThreadStability_0_Nova_test,
&stabilitytest_Nova_ThreadStability_0_Nova_construct,
},

{
&stabilitytest_Nova_TimeStability_0_Nova_test,
&stabilitytest_Nova_TimeStability_0_Nova_construct,
},

{
&stabilitytest_Nova_UnstableException_3_Nova_construct,
},

};
