#include <precompiled.h>
#include "NovaNativeInterface.h"

nova_env novaEnv = {
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
&nova_standard_Nova_String_0_Nova_construct,
&nova_standard_Nova_String_1_Nova_construct,
},

{
&nova_standard_Nova_Object_Nova_getHashCode,
0,
0,
0,
&nova_standard_Nova_Object_2_Nova_construct,
},

{
&nova_standard_Nova_System_0_Nova_exit,
&nova_standard_Nova_System_1_Nova_exit,
&nova_standard_Nova_System_2_Nova_exit,
&nova_standard_Nova_System_Nova_execute,
&nova_standard_Nova_System_2_Nova_construct,
},

{
&nova_standard_database_Nova_DBConnector_0_Nova_connect,
&nova_standard_database_Nova_DBConnector_1_Nova_connect,
&nova_standard_database_Nova_DBConnector_2_Nova_connect,
&nova_standard_database_Nova_DBConnector_Nova_updateError,
&nova_standard_database_Nova_DBConnector_Nova_changeUser,
&nova_standard_database_Nova_DBConnector_Nova_query,
&nova_standard_database_Nova_DBConnector_Nova_close,
&nova_standard_database_Nova_DBConnector_2_Nova_construct,
},

{
&nova_standard_database_Nova_ResultSet_Nova_construct,
},

{
&nova_standard_network_Nova_Socket_2_Nova_construct,
},

{
&nova_standard_network_Nova_ServerSocket_Nova_start,
&nova_standard_network_Nova_ServerSocket_Nova_close,
&nova_standard_network_Nova_ServerSocket_Nova_acceptClient,
&nova_standard_network_Nova_ServerSocket_2_Nova_construct,
},

{
&nova_standard_network_Nova_ClientSocket_Nova_connect,
&nova_standard_network_Nova_ClientSocket_Nova_close,
&nova_standard_network_Nova_ClientSocket_2_Nova_construct,
},

{
&nova_standard_network_Nova_ConnectionSocket_Nova_close,
&nova_standard_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_standard_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_standard_network_Nova_ConnectionSocket_Nova_write,
&nova_standard_network_Nova_ConnectionSocket_Nova_construct,
},

{
&nova_standard_network_Nova_NetworkInputStream_Nova_readString,
&nova_standard_network_Nova_NetworkInputStream_Nova_readBytes,
&nova_standard_network_Nova_NetworkInputStream_Nova_construct,
},

{
&nova_standard_network_Nova_NetworkOutputStream_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_3_Nova_construct,
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
&nova_standard_math_Nova_Math_2_Nova_construct,
},

{
&nova_standard_math_Nova_Statement_2_Nova_construct,
},

{
&nova_standard_math_Nova_NumericStatement_0_Nova_toString,
&nova_standard_math_Nova_NumericStatement_Nova_construct,
},

{
&nova_standard_math_Nova_NumericTree_0_Nova_toString,
&nova_standard_math_Nova_NumericTree_Nova_construct,
},

{
&nova_standard_math_Nova_NumericOperation_Nova_toString,
&nova_standard_math_Nova_NumericOperation_Nova_construct,
&nova_standard_math_Nova_NumericOperation_0_Nova_construct,
&nova_standard_math_Nova_NumericOperation_2_Nova_construct,
},

{
0,
&nova_standard_math_Nova_NumericOperand_3_Nova_construct,
},

{
&nova_standard_math_Nova_StatementComponent_0_Nova_toString,
&nova_standard_math_Nova_StatementComponent_Nova_construct,
},

{
&nova_standard_math_Nova_InvalidNumericStatementException_Nova_construct,
},

{
&nova_standard_math_logic_Nova_Conclusion_Nova_construct,
},

{
&nova_standard_math_logic_Nova_Hypothesis_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_LogicalConnective_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementComponent_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementLetter_Nova_construct,
},

{
&nova_standard_math_logic_Nova_WFF_Nova_construct,
},

{
&nova_standard_math_logic_Nova_StatementGroup_Nova_construct,
},

{
&nova_standard_math_logic_Nova_LogicalStatement_0_Nova_toString,
&nova_standard_math_logic_Nova_LogicalStatement_0_Nova_construct,
},

{
&nova_standard_math_logic_Nova_InvalidFormulaException_1_Nova_construct,
},

{
&nova_standard_process_Nova_Process_Nova_construct,
},

{
&nova_standard_primitive_Nova_Bool_1_Nova_toString,
&nova_standard_primitive_Nova_Bool_2_Nova_toString,
&nova_standard_primitive_Nova_Bool_0_Nova_compareTo,
&nova_standard_primitive_Nova_Bool_3_Nova_construct,
},

{
&nova_standard_primitive_Nova_Null_Nova_toString,
&nova_standard_primitive_Nova_Null_Nova_concat,
&nova_standard_primitive_Nova_Null_2_Nova_construct,
&nova_standard_primitive_Nova_Null_3_Nova_construct,
&nova_standard_primitive_Nova_Null_4_Nova_construct,
},

{
&nova_standard_primitive_Nova_Primitive_4_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Char_1_Nova_toString,
&nova_standard_primitive_number_Nova_Char_2_Nova_toString,
&nova_standard_primitive_number_Nova_Char_0_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_1_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_standard_primitive_number_Nova_Char_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Char_5_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Byte_Nova_numDigits,
&nova_standard_primitive_number_Nova_Byte_1_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_2_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Byte_Nova_multiply,
&nova_standard_primitive_number_Nova_Byte_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Short_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Short_1_Nova_toString,
&nova_standard_primitive_number_Nova_Short_2_Nova_toString,
&nova_standard_primitive_number_Nova_Short_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Short_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Short_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Int_Nova_getHashCodeLong,
&nova_standard_primitive_number_Nova_Int_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Int_1_Nova_toString,
&nova_standard_primitive_number_Nova_Int_2_Nova_toString,
&nova_standard_primitive_number_Nova_Int_Nova_parseInt,
&nova_standard_primitive_number_Nova_Int_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Int_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Int_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Long_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Long_1_Nova_toString,
&nova_standard_primitive_number_Nova_Long_2_Nova_toString,
&nova_standard_primitive_number_Nova_Long_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Long_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Long_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Float_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Float_1_Nova_toString,
&nova_standard_primitive_number_Nova_Float_2_Nova_toString,
&nova_standard_primitive_number_Nova_Float_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Float_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Float_Nova_construct,
},

{
&nova_standard_primitive_number_Nova_Double_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Double_Nova_genString,
&nova_standard_primitive_number_Nova_Double_Nova_genBuffer,
&nova_standard_primitive_number_Nova_Double_Nova_repetition,
&nova_standard_primitive_number_Nova_Double_Nova_lastSignificantDigit,
&nova_standard_primitive_number_Nova_Double_1_Nova_toString,
&nova_standard_primitive_number_Nova_Double_2_Nova_toString,
&nova_standard_primitive_number_Nova_Double_Nova_parseDouble,
&nova_standard_primitive_number_Nova_Double_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Double_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Double_Nova_construct,
},

{
0,
&nova_standard_primitive_number_Nova_Number_6_Nova_construct,
},

{
},

{
},

{
0,
},

{
0,
},

{
&nova_standard_time_Nova_Time_2_Nova_construct,
},

{
&nova_standard_time_Nova_Timer_Nova_start,
&nova_standard_time_Nova_Timer_Nova_stop,
&nova_standard_time_Nova_Timer_2_Nova_construct,
},

{
&nova_standard_time_Nova_Date_Nova_decodeDate,
&nova_standard_time_Nova_Date_Nova_updateTime,
&nova_standard_time_Nova_Date_0_Nova_formatDate,
&nova_standard_time_Nova_Date_1_Nova_formatDate,
&nova_standard_time_Nova_Date_2_Nova_construct,
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
&nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException,
&nova_standard_thread_Nova_UncaughtExceptionHandler_2_Nova_construct,
},

{
0,
0,
},

{
0,
0,
&nova_standard_io_Nova_OutputStream_4_Nova_construct,
},

{
&nova_standard_io_Nova_StreamReader_0_Nova_readBytes,
&nova_standard_io_Nova_StreamReader_0_Nova_readString,
&nova_standard_io_Nova_StreamReader_Nova_construct,
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
&nova_standard_io_Nova_File_3_Nova_construct,
&nova_standard_io_Nova_File_4_Nova_construct,
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
&nova_standard_io_Nova_Console_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVG_Nova_generateOutput,
&nova_standard_svg_Nova_SVG_Nova_generateHTMLOutput,
&nova_standard_svg_Nova_SVG_2_Nova_construct,
},

{
0,
&nova_standard_svg_Nova_SVGComponent_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGComponentList_Nova_generateOutput,
&nova_standard_svg_Nova_SVGComponentList_Nova_addChild,
&nova_standard_svg_Nova_SVGComponentList_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGComponentNode_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGMainComponent_Nova_generateOutput,
&nova_standard_svg_Nova_SVGMainComponent_2_Nova_construct,
},

{
&nova_standard_svg_Nova_SVGCircle_0_Nova_generateOutput,
&nova_standard_svg_Nova_SVGCircle_0_Nova_toString,
&nova_standard_svg_Nova_SVGCircle_Nova_construct,
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
&nova_standard_exception_Nova_DivideByZeroException_1_Nova_construct,
},

{
&nova_standard_exception_Nova_UnimplementedOperationException_1_Nova_construct,
},

{
&nova_standard_exception_Nova_Exception_0_Nova_construct,
&nova_standard_exception_Nova_Exception_1_Nova_construct,
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
},

{
&nova_standard_datastruct_list_Nova_LinkedList_Nova_getFirst,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_add,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_remove,
&nova_standard_datastruct_list_Nova_LinkedList_2_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_ListNode_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Array_0_Nova_add,
&nova_standard_datastruct_list_Nova_Array_1_Nova_add,
&nova_standard_datastruct_list_Nova_Array_Nova_remove,
&nova_standard_datastruct_list_Nova_Array_Nova_swap,
&nova_standard_datastruct_list_Nova_Array_Nova_get,
&nova_standard_datastruct_list_Nova_Array_Nova_set,
&nova_standard_datastruct_list_Nova_Array_Nova_toArray,
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
&nova_standard_datastruct_list_Nova_Array_Nova_join,
&nova_standard_datastruct_list_Nova_Array_2_Nova_construct,
&nova_standard_datastruct_list_Nova_Array_3_Nova_construct,
&nova_standard_datastruct_list_Nova_Array_4_Nova_construct,
},

{
},

{
0,
},

{
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_NoSuchElementException_0_Nova_construct,
&nova_standard_datastruct_list_Nova_NoSuchElementException_1_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_standard_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_standard_datastruct_list_Nova_Queue_0_Nova_toString,
&nova_standard_datastruct_list_Nova_Queue_2_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_Stack_Nova_push,
&nova_standard_datastruct_list_Nova_Stack_Nova_pop,
&nova_standard_datastruct_list_Nova_Stack_2_Nova_construct,
},

{
&nova_standard_datastruct_list_Nova_EmptyStackException_0_Nova_construct,
&nova_standard_datastruct_list_Nova_EmptyStackException_1_Nova_construct,
},

{
&nova_standard_datastruct_Nova_HashMap_Nova_put,
&nova_standard_datastruct_Nova_HashMap_Nova_get,
&nova_standard_datastruct_Nova_HashMap_Nova_remove,
&nova_standard_datastruct_Nova_HashMap_Nova_containsKey,
&nova_standard_datastruct_Nova_HashMap_2_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Bounds_Nova_extractString,
&nova_standard_datastruct_Nova_Bounds_Nova_extractPreString,
&nova_standard_datastruct_Nova_Bounds_Nova_extractPostString,
&nova_standard_datastruct_Nova_Bounds_Nova_trimString,
&nova_standard_datastruct_Nova_Bounds_Nova_invalidate,
&nova_standard_datastruct_Nova_Bounds_0_Nova_equals,
&nova_standard_datastruct_Nova_Bounds_0_Nova_toString,
&nova_standard_datastruct_Nova_Bounds_Nova_cloneTo,
&nova_standard_datastruct_Nova_Bounds_Nova_clone,
&nova_standard_datastruct_Nova_Bounds_2_Nova_construct,
&nova_standard_datastruct_Nova_Bounds_3_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Tree_Nova_preorder,
&nova_standard_datastruct_Nova_Tree_Nova_inorder,
&nova_standard_datastruct_Nova_Tree_Nova_postorder,
&nova_standard_datastruct_Nova_Tree_Nova_levelorder,
&nova_standard_datastruct_Nova_Tree_2_Nova_construct,
},

{
&nova_standard_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_standard_datastruct_Nova_BinaryTree_2_Nova_construct,
},

{
&nova_standard_datastruct_Nova_Node_0_Nova_preorder,
&nova_standard_datastruct_Nova_Node_0_Nova_inorder,
&nova_standard_datastruct_Nova_Node_0_Nova_postorder,
&nova_standard_datastruct_Nova_Node_0_Nova_levelorder,
&nova_standard_datastruct_Nova_Node_0_Nova_toString,
&nova_standard_datastruct_Nova_Node_2_Nova_construct,
&nova_standard_datastruct_Nova_Node_3_Nova_construct,
&nova_standard_datastruct_Nova_Node_4_Nova_construct,
&nova_standard_datastruct_Nova_Node_5_Nova_construct,
},

{
&nova_standard_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_standard_datastruct_Nova_BinaryNode_2_Nova_construct,
&nova_standard_datastruct_Nova_BinaryNode_3_Nova_construct,
},

{
0,
},

{
&nova_standard_security_Nova_MD5_Nova_encrypt,
&nova_standard_security_Nova_MD5_2_Nova_construct,
},

{
&nova_standard_star_Nova_Window_Nova_create,
&nova_standard_star_Nova_Window_2_Nova_construct,
},

{
&nova_standard_star_Nova_WindowThread_Nova_run,
&nova_standard_star_Nova_WindowThread_Nova_construct,
},

{
&nova_standard_gc_Nova_GC_Nova_init,
&nova_standard_gc_Nova_GC_Nova_collect,
&nova_standard_gc_Nova_GC_Nova_enableIncremental,
&nova_standard_gc_Nova_GC_Nova_dump,
&nova_standard_gc_Nova_GC_2_Nova_construct,
},

{
0,
0,
0,
&example_Nova_Animal_0_Nova_toString,
&example_Nova_Animal_2_Nova_construct,
},

{
&example_Nova_ArrayDemo_Nova_main,
&example_Nova_ArrayDemo_2_Nova_construct,
},

{
&example_Nova_BodyBuilder_Nova_sayHello,
&example_Nova_BodyBuilder_3_Nova_construct,
&example_Nova_BodyBuilder_4_Nova_construct,
},

{
&example_Nova_ClosureDemo_Nova_main,
&example_Nova_ClosureDemo_2_Nova_construct,
},

{
&example_Nova_Dog_Nova_getNumLegs,
&example_Nova_Dog_Nova_getNumEyes,
&example_Nova_Dog_Nova_getDescription,
&example_Nova_Dog_2_Nova_construct,
},

{
&example_Nova_ExceptionHandlingDemo_Nova_main,
&example_Nova_ExceptionHandlingDemo_2_Nova_construct,
},

{
&example_Nova_FileTest_Nova_main,
&example_Nova_FileTest_2_Nova_construct,
},

{
&example_Nova_GenericDemo_Nova_main,
&example_Nova_GenericDemo_2_Nova_construct,
},

{
&example_Nova_HashMapDemo_Nova_main,
&example_Nova_HashMapDemo_2_Nova_construct,
},

{
&example_Nova_IntegerTest_Nova_main,
&example_Nova_IntegerTest_2_Nova_construct,
},

{
&example_Nova_Lab_Nova_main,
&example_Nova_Lab_2_Nova_construct,
},

{
&example_Nova_MathDemo_Nova_main,
&example_Nova_MathDemo_2_Nova_construct,
},

{
&example_Nova_NonWholeDivisionException_1_Nova_construct,
},

{
0,
&example_Nova_Person_5_Nova_construct,
},

{
0,
0,
},

{
&example_Nova_PolymorphismDemo_Nova_main,
&example_Nova_PolymorphismDemo_2_Nova_construct,
},

{
&example_Nova_QueueDemo_Nova_main,
&example_Nova_QueueDemo_2_Nova_construct,
},

{
&example_Nova_Spider_0_Nova_getNumLegs,
&example_Nova_Spider_0_Nova_getNumEyes,
&example_Nova_Spider_0_Nova_getDescription,
&example_Nova_Spider_2_Nova_construct,
},

{
&example_Nova_Square_Nova_numberSides,
&example_Nova_Square_Nova_calculateArea,
&example_Nova_Square_Nova_construct,
},

{
&example_Nova_SVGTest_Nova_main,
&example_Nova_SVGTest_2_Nova_construct,
},

{
&example_Nova_T1_2_Nova_construct,
},

{
&example_Nova_T2_2_Nova_construct,
},

{
&example_Nova_Test_Nova_main,
&example_Nova_Test_2_Nova_construct,
},

{
&example_Nova_ThreadDemo_Nova_main,
&example_Nova_ThreadDemo_2_Nova_construct,
},

{
&example_Nova_ThreadDemoImplementation_0_Nova_run,
&example_Nova_ThreadDemoImplementation_Nova_construct,
},

{
&example_ackermann_Nova_Ackermann_Nova_main,
&example_ackermann_Nova_Ackermann_Nova_run,
&example_ackermann_Nova_Ackermann_Nova_run2,
&example_ackermann_Nova_Ackermann_2_Nova_construct,
},

{
&example_copy_Nova_Dog_Nova_construct,
},

{
&example_database_Nova_DatabaseDemo_Nova_main,
&example_database_Nova_DatabaseDemo_2_Nova_construct,
},

{
&example_network_Nova_ClientDemo_Nova_main,
&example_network_Nova_ClientDemo_2_Nova_construct,
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
&example_network_Nova_ServerDemo_2_Nova_construct,
},

};
