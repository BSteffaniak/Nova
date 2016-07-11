#include <precompiled.h>
#include "NovaNativeInterface.h"

nova_env novaEnv = {
{
&nova_standard_Nova_Class_Nova_Class,
},

{
&nova_standard_Nova_Object_Nova_getHashCode,
0,
0,
0,
&nova_standard_Nova_Object_Nova_Object,
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
&nova_standard_Nova_String_0_Nova_String,
&nova_standard_Nova_String_1_Nova_String,
},

{
&nova_standard_Nova_System_0_Nova_exit,
&nova_standard_Nova_System_1_Nova_exit,
&nova_standard_Nova_System_2_Nova_exit,
&nova_standard_Nova_System_Nova_execute,
&nova_standard_Nova_System_Nova_System,
},

{
&nova_standard_database_Nova_DBConnector_0_Nova_connect,
&nova_standard_database_Nova_DBConnector_1_Nova_connect,
&nova_standard_database_Nova_DBConnector_2_Nova_connect,
&nova_standard_database_Nova_DBConnector_Nova_updateError,
&nova_standard_database_Nova_DBConnector_Nova_changeUser,
&nova_standard_database_Nova_DBConnector_Nova_query,
&nova_standard_database_Nova_DBConnector_Nova_close,
&nova_standard_database_Nova_DBConnector_Nova_DBConnector,
},

{
&nova_standard_database_Nova_ResultSet_Nova_ResultSet,
},

{
&nova_standard_datastruct_Nova_BinaryNode_Nova_addChild,
&nova_standard_datastruct_Nova_BinaryNode_0_Nova_BinaryNode,
&nova_standard_datastruct_Nova_BinaryNode_1_Nova_BinaryNode,
},

{
&nova_standard_datastruct_Nova_BinaryTree_Nova_addNode,
&nova_standard_datastruct_Nova_BinaryTree_Nova_BinaryTree,
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
&nova_standard_datastruct_Nova_Bounds_0_Nova_Bounds,
&nova_standard_datastruct_Nova_Bounds_1_Nova_Bounds,
},

{
0,
},

{
0,
&nova_standard_datastruct_Nova_HashMap_Nova_get,
&nova_standard_datastruct_Nova_HashMap_Nova_remove,
&nova_standard_datastruct_Nova_HashMap_Nova_containsKey,
&nova_standard_datastruct_Nova_HashMap_Nova_HashMap,
},

{
&nova_standard_datastruct_Nova_Node_0_Nova_preorder,
&nova_standard_datastruct_Nova_Node_0_Nova_inorder,
&nova_standard_datastruct_Nova_Node_0_Nova_postorder,
&nova_standard_datastruct_Nova_Node_0_Nova_levelorder,
&nova_standard_datastruct_Nova_Node_0_Nova_toString,
&nova_standard_datastruct_Nova_Node_0_Nova_Node,
&nova_standard_datastruct_Nova_Node_1_Nova_Node,
&nova_standard_datastruct_Nova_Node_2_Nova_Node,
&nova_standard_datastruct_Nova_Node_3_Nova_Node,
},

{
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_put,
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_getKey,
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_getValue,
&nova_standard_datastruct_Nova_ReversibleHashMap_Nova_ReversibleHashMap,
},

{
&nova_standard_datastruct_Nova_Tree_Nova_preorder,
&nova_standard_datastruct_Nova_Tree_Nova_inorder,
&nova_standard_datastruct_Nova_Tree_Nova_postorder,
&nova_standard_datastruct_Nova_Tree_Nova_levelorder,
&nova_standard_datastruct_Nova_Tree_Nova_Tree,
},

{
&nova_standard_datastruct_Nova_Vector_Nova_Vector,
},

{
&nova_standard_datastruct_Nova_Vector2D_Nova_Vector2D,
},

{
&nova_standard_datastruct_list_Nova_Array_0_Nova_add,
&nova_standard_datastruct_list_Nova_Array_1_Nova_add,
&nova_standard_datastruct_list_Nova_Array_Nova_remove,
&nova_standard_datastruct_list_Nova_Array_Nova_swap,
&nova_standard_datastruct_list_Nova_Array_Nova_get,
&nova_standard_datastruct_list_Nova_Array_Nova_set,
&nova_standard_datastruct_list_Nova_Array_Nova_toArray,
0,
0,
0,
0,
0,
0,
0,
0,
&nova_standard_datastruct_list_Nova_Array_Nova_sumSize,
0,
0,
&nova_standard_datastruct_list_Nova_Array_0_Nova_Array,
&nova_standard_datastruct_list_Nova_Array_1_Nova_Array,
&nova_standard_datastruct_list_Nova_Array_2_Nova_Array,
},

{
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_reset,
&nova_standard_datastruct_list_Nova_ArrayIterator_Nova_ArrayIterator,
},

{
&nova_standard_datastruct_list_Nova_CompiledList_Nova_CompiledList,
},

{
&nova_standard_datastruct_list_Nova_EmptyStackException_0_Nova_EmptyStackException,
&nova_standard_datastruct_list_Nova_EmptyStackException_1_Nova_EmptyStackException,
},

{
&nova_standard_datastruct_list_Nova_IntArray_Nova_map,
&nova_standard_datastruct_list_Nova_IntArray_Nova_forEach,
&nova_standard_datastruct_list_Nova_IntArray_Nova_any,
&nova_standard_datastruct_list_Nova_IntArray_Nova_all,
&nova_standard_datastruct_list_Nova_IntArray_Nova_filter,
&nova_standard_datastruct_list_Nova_IntArray_Nova_take,
&nova_standard_datastruct_list_Nova_IntArray_Nova_skip,
&nova_standard_datastruct_list_Nova_IntArray_Nova_firstWhere,
&nova_standard_datastruct_list_Nova_IntArray_Nova_reverse,
&nova_standard_datastruct_list_Nova_IntArray_Nova_join,
&nova_standard_datastruct_list_Nova_IntArray_0_Nova_IntArray,
&nova_standard_datastruct_list_Nova_IntArray_1_Nova_IntArray,
&nova_standard_datastruct_list_Nova_IntArray_2_Nova_IntArray,
},

{
&nova_standard_datastruct_list_Nova_IntArrayIterator_0_Nova_reset,
&nova_standard_datastruct_list_Nova_IntArrayIterator_Nova_IntArrayIterator,
},

{
},

{
0,
},

{
&nova_standard_datastruct_list_Nova_LinkedList_Nova_add,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_remove,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_toArray,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_map,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_forEach,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_any,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_all,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_filter,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_take,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_skip,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_firstWhere,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_reverse,
&nova_standard_datastruct_list_Nova_LinkedList_0_Nova_join,
&nova_standard_datastruct_list_Nova_LinkedList_Nova_LinkedList,
},

{
&nova_standard_datastruct_list_Nova_LinkedListIterator_0_Nova_reset,
&nova_standard_datastruct_list_Nova_LinkedListIterator_Nova_LinkedListIterator,
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
},

{
&nova_standard_datastruct_list_Nova_ListNode_Nova_clone,
&nova_standard_datastruct_list_Nova_ListNode_Nova_ListNode,
},

{
&nova_standard_datastruct_list_Nova_NoSuchElementException_0_Nova_NoSuchElementException,
&nova_standard_datastruct_list_Nova_NoSuchElementException_1_Nova_NoSuchElementException,
},

{
&nova_standard_datastruct_list_Nova_Queue_Nova_dequeue,
&nova_standard_datastruct_list_Nova_Queue_Nova_enqueue,
&nova_standard_datastruct_list_Nova_Queue_0_Nova_toString,
&nova_standard_datastruct_list_Nova_Queue_Nova_Queue,
},

{
&nova_standard_datastruct_list_Nova_Stack_Nova_push,
&nova_standard_datastruct_list_Nova_Stack_Nova_pop,
&nova_standard_datastruct_list_Nova_Stack_Nova_Stack,
},

{
&nova_standard_exception_Nova_DivideByZeroException_Nova_DivideByZeroException,
},

{
&nova_standard_exception_Nova_Exception_0_Nova_Exception,
&nova_standard_exception_Nova_Exception_1_Nova_Exception,
},

{
&nova_standard_exception_Nova_ExceptionData_Nova_addCode,
&nova_standard_exception_Nova_ExceptionData_Nova_getBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_getCorrectData,
&nova_standard_exception_Nova_ExceptionData_Nova_getCorrectBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_jumpToBuffer,
&nova_standard_exception_Nova_ExceptionData_Nova_getParent,
&nova_standard_exception_Nova_ExceptionData_Nova_setParent,
&nova_standard_exception_Nova_ExceptionData_Nova_ExceptionData,
},

{
&nova_standard_exception_Nova_UnimplementedOperationException_Nova_UnimplementedOperationException,
},

{
&nova_standard_gc_Nova_GC_Nova_init,
&nova_standard_gc_Nova_GC_Nova_collect,
&nova_standard_gc_Nova_GC_Nova_enableIncremental,
&nova_standard_gc_Nova_GC_Nova_dump,
&nova_standard_gc_Nova_GC_Nova_GC,
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
&nova_standard_io_Nova_Console_Nova_Console,
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
&nova_standard_io_Nova_File_0_Nova_File,
&nova_standard_io_Nova_File_1_Nova_File,
},

{
&nova_standard_io_Nova_FileNotFoundException_Nova_FileNotFoundException,
},

{
0,
0,
},

{
0,
0,
&nova_standard_io_Nova_OutputStream_Nova_OutputStream,
},

{
&nova_standard_io_Nova_StreamReader_Nova_readBytes,
&nova_standard_io_Nova_StreamReader_Nova_readString,
&nova_standard_io_Nova_StreamReader_Nova_StreamReader,
},

{
&nova_standard_math_Nova_ArithmeticSequence_Nova_ArithmeticSequence,
},

{
&nova_standard_math_Nova_Diekstra_Nova_Diekstra,
},

{
&nova_standard_math_Nova_GeometricSequence_Nova_GeometricSequence,
},

{
&nova_standard_math_Nova_Graph_Nova_Graph,
},

{
&nova_standard_math_Nova_InvalidNumericStatementException_Nova_InvalidNumericStatementException,
},

{
&nova_standard_math_Nova_Math_Nova_max,
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
&nova_standard_math_Nova_Math_Nova_Math,
},

{
&nova_standard_math_Nova_Matrix_Nova_sum,
&nova_standard_math_Nova_Matrix_Nova_Matrix,
},

{
0,
&nova_standard_math_Nova_NumericOperand_Nova_NumericOperand,
},

{
&nova_standard_math_Nova_NumericOperation_0_Nova_toString,
&nova_standard_math_Nova_NumericOperation_0_Nova_NumericOperation,
&nova_standard_math_Nova_NumericOperation_1_Nova_NumericOperation,
},

{
&nova_standard_math_Nova_NumericStatement_0_Nova_toString,
&nova_standard_math_Nova_NumericStatement_Nova_NumericStatement,
},

{
&nova_standard_math_Nova_NumericTree_0_Nova_toString,
&nova_standard_math_Nova_NumericTree_Nova_NumericTree,
},

{
&nova_standard_math_Nova_Polynomial_Nova_Polynomial,
},

{
&nova_standard_math_Nova_Sequence_Nova_sum,
&nova_standard_math_Nova_Sequence_Nova_Sequence,
},

{
&nova_standard_math_Nova_Statement_Nova_Statement,
},

{
&nova_standard_math_Nova_StatementComponent_0_Nova_toString,
&nova_standard_math_Nova_StatementComponent_Nova_StatementComponent,
},

{
&nova_standard_math_Nova_VariableOperand_Nova_VariableOperand,
},

{
&nova_standard_math_calculus_Nova_Calculus_Nova_derivative,
&nova_standard_math_calculus_Nova_Calculus_Nova_Calculus,
},

{
&nova_standard_math_huffman_Nova_HuffmanTree_Nova_HuffmanTree,
},

{
&nova_standard_math_logic_Nova_Conclusion_Nova_Conclusion,
},

{
&nova_standard_math_logic_Nova_Hypothesis_Nova_Hypothesis,
},

{
&nova_standard_math_logic_Nova_InvalidFormulaException_Nova_InvalidFormulaException,
},

{
&nova_standard_math_logic_Nova_LogicalConnective_Nova_LogicalConnective,
},

{
&nova_standard_math_logic_Nova_LogicalStatement_0_Nova_toString,
&nova_standard_math_logic_Nova_LogicalStatement_Nova_LogicalStatement,
},

{
&nova_standard_math_logic_Nova_StatementComponent_Nova_StatementComponent,
},

{
&nova_standard_math_logic_Nova_StatementGroup_Nova_StatementGroup,
},

{
&nova_standard_math_logic_Nova_StatementLetter_Nova_StatementLetter,
},

{
&nova_standard_math_logic_Nova_WFF_Nova_WFF,
},

{
&nova_standard_network_Nova_ClientSocket_Nova_connect,
&nova_standard_network_Nova_ClientSocket_Nova_close,
&nova_standard_network_Nova_ClientSocket_Nova_ClientSocket,
},

{
&nova_standard_network_Nova_ConnectionSocket_Nova_close,
&nova_standard_network_Nova_ConnectionSocket_Nova_validateConnection,
&nova_standard_network_Nova_ConnectionSocket_0_Nova_readString,
&nova_standard_network_Nova_ConnectionSocket_Nova_write,
&nova_standard_network_Nova_ConnectionSocket_Nova_ConnectionSocket,
},

{
&nova_standard_network_Nova_NetworkInputStream_0_Nova_readString,
&nova_standard_network_Nova_NetworkInputStream_0_Nova_readBytes,
&nova_standard_network_Nova_NetworkInputStream_Nova_NetworkInputStream,
},

{
&nova_standard_network_Nova_NetworkOutputStream_0_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_1_Nova_write,
&nova_standard_network_Nova_NetworkOutputStream_Nova_NetworkOutputStream,
},

{
&nova_standard_network_Nova_ServerSocket_Nova_start,
&nova_standard_network_Nova_ServerSocket_Nova_close,
&nova_standard_network_Nova_ServerSocket_Nova_acceptClient,
&nova_standard_network_Nova_ServerSocket_Nova_ServerSocket,
},

{
&nova_standard_network_Nova_Socket_Nova_Socket,
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
&nova_standard_primitive_Nova_Bool_Nova_Bool,
},

{
&nova_standard_primitive_Nova_Null_Nova_toString,
&nova_standard_primitive_Nova_Null_Nova_concat,
&nova_standard_primitive_Nova_Null_Nova_Null,
},

{
&nova_standard_primitive_Nova_Primitive_Nova_Primitive,
},

{
&nova_standard_primitive_number_Nova_Byte_Nova_numDigits,
&nova_standard_primitive_number_Nova_Byte_2_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_3_Nova_toString,
&nova_standard_primitive_number_Nova_Byte_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Byte_Nova_multiply,
&nova_standard_primitive_number_Nova_Byte_Nova_Byte,
},

{
&nova_standard_primitive_number_Nova_Char_2_Nova_toString,
&nova_standard_primitive_number_Nova_Char_3_Nova_toString,
&nova_standard_primitive_number_Nova_Char_0_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_1_Nova_toLowerCase,
&nova_standard_primitive_number_Nova_Char_Nova_toUpperCase,
&nova_standard_primitive_number_Nova_Char_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Char_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Char_Nova_Char,
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
&nova_standard_primitive_number_Nova_Double_Nova_Double,
},

{
&nova_standard_primitive_number_Nova_Float_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Float_2_Nova_toString,
&nova_standard_primitive_number_Nova_Float_3_Nova_toString,
&nova_standard_primitive_number_Nova_Float_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Float_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Float_Nova_Float,
},

{
&nova_standard_primitive_number_Nova_Int_Nova_getHashCodeLong,
&nova_standard_primitive_number_Nova_Int_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Int_2_Nova_toString,
&nova_standard_primitive_number_Nova_Int_3_Nova_toString,
&nova_standard_primitive_number_Nova_Int_Nova_parseInt,
&nova_standard_primitive_number_Nova_Int_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Int_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Int_Nova_Int,
},

{
},

{
&nova_standard_primitive_number_Nova_Long_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Long_2_Nova_toString,
&nova_standard_primitive_number_Nova_Long_3_Nova_toString,
&nova_standard_primitive_number_Nova_Long_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Long_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Long_Nova_Long,
},

{
0,
&nova_standard_primitive_number_Nova_Number_Nova_Number,
},

{
},

{
&nova_standard_primitive_number_Nova_Short_0_Nova_numDigits,
&nova_standard_primitive_number_Nova_Short_2_Nova_toString,
&nova_standard_primitive_number_Nova_Short_3_Nova_toString,
&nova_standard_primitive_number_Nova_Short_0_Nova_compareTo,
&nova_standard_primitive_number_Nova_Short_0_Nova_multiply,
&nova_standard_primitive_number_Nova_Short_Nova_Short,
},

{
&nova_standard_process_Nova_Process_Nova_Process,
},

{
&nova_standard_security_Nova_MD5_Nova_encrypt,
&nova_standard_security_Nova_MD5_Nova_MD5,
},

{
&nova_standard_star_Nova_Window_Nova_create,
&nova_standard_star_Nova_Window_Nova_Window,
},

{
&nova_standard_star_Nova_WindowThread_Nova_run,
&nova_standard_star_Nova_WindowThread_Nova_WindowThread,
},

{
&nova_standard_svg_Nova_SVG_Nova_generateOutput,
&nova_standard_svg_Nova_SVG_Nova_generateHTMLOutput,
&nova_standard_svg_Nova_SVG_Nova_SVG,
},

{
&nova_standard_svg_Nova_SVGCircle_Nova_generateOutput,
&nova_standard_svg_Nova_SVGCircle_0_Nova_toString,
&nova_standard_svg_Nova_SVGCircle_Nova_SVGCircle,
},

{
0,
&nova_standard_svg_Nova_SVGComponent_Nova_SVGComponent,
},

{
&nova_standard_svg_Nova_SVGComponentList_Nova_generateOutput,
&nova_standard_svg_Nova_SVGComponentList_Nova_addChild,
&nova_standard_svg_Nova_SVGComponentList_Nova_SVGComponentList,
},

{
&nova_standard_svg_Nova_SVGComponentNode_Nova_SVGComponentNode,
},

{
&nova_standard_svg_Nova_SVGMainComponent_0_Nova_generateOutput,
&nova_standard_svg_Nova_SVGMainComponent_Nova_SVGMainComponent,
},

{
&nova_standard_thread_Nova_Thread_Nova_start,
&nova_standard_thread_Nova_Thread_Nova_join,
&nova_standard_thread_Nova_Thread_Nova_kill,
&nova_standard_thread_Nova_Thread_Nova_sleep,
0,
&nova_standard_thread_Nova_Thread_Nova_Thread,
},

{
0,
&nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_UncaughtExceptionHandler,
},

{
&nova_standard_thread_async_Nova_Async_Nova_execute,
&nova_standard_thread_async_Nova_Async_Nova_Async,
},

{
&nova_standard_thread_async_Nova_AsyncResult_Nova_AsyncResult,
},

{
&nova_standard_time_Nova_Date_Nova_decodeDate,
&nova_standard_time_Nova_Date_Nova_updateTime,
&nova_standard_time_Nova_Date_0_Nova_formatDate,
&nova_standard_time_Nova_Date_1_Nova_formatDate,
&nova_standard_time_Nova_Date_Nova_Date,
},

{
&nova_standard_time_Nova_Time_Nova_Time,
},

{
&nova_standard_time_Nova_Timer_Nova_start,
&nova_standard_time_Nova_Timer_Nova_stop,
&nova_standard_time_Nova_Timer_Nova_Timer,
},

{
0,
0,
0,
&example_Nova_Animal_0_Nova_toString,
&example_Nova_Animal_Nova_Animal,
},

{
&example_Nova_ArrayDemo_Nova_main,
&example_Nova_ArrayDemo_Nova_ArrayDemo,
},

{
&example_Nova_BodyBuilder_Nova_sayHello,
&example_Nova_BodyBuilder_Nova_BodyBuilder,
},

{
&example_Nova_ClosureDemo_Nova_main,
&example_Nova_ClosureDemo_Nova_ClosureDemo,
},

{
&example_Nova_Dog_Nova_getNumLegs,
&example_Nova_Dog_Nova_getNumEyes,
&example_Nova_Dog_Nova_getDescription,
&example_Nova_Dog_Nova_Dog,
},

{
&example_Nova_ExceptionHandlingDemo_Nova_main,
&example_Nova_ExceptionHandlingDemo_Nova_ExceptionHandlingDemo,
},

{
&example_Nova_FileTest_Nova_main,
&example_Nova_FileTest_Nova_FileTest,
},

{
&example_Nova_GenericDemo_Nova_main,
&example_Nova_GenericDemo_Nova_GenericDemo,
},

{
&example_Nova_HashMapDemo_Nova_main,
&example_Nova_HashMapDemo_Nova_HashMapDemo,
},

{
&example_Nova_IntegerTest_Nova_main,
&example_Nova_IntegerTest_Nova_IntegerTest,
},

{
&example_Nova_Lab_Nova_main,
&example_Nova_Lab_Nova_Lab,
},

{
&example_Nova_MathDemo_Nova_main,
&example_Nova_MathDemo_Nova_MathDemo,
},

{
&example_Nova_NonWholeDivisionException_Nova_NonWholeDivisionException,
},

{
0,
&example_Nova_Person_Nova_Person,
},

{
0,
0,
},

{
&example_Nova_PolymorphismDemo_Nova_main,
&example_Nova_PolymorphismDemo_Nova_PolymorphismDemo,
},

{
&example_Nova_QueueDemo_Nova_main,
&example_Nova_QueueDemo_Nova_QueueDemo,
},

{
&example_Nova_Spider_0_Nova_getNumLegs,
&example_Nova_Spider_0_Nova_getNumEyes,
&example_Nova_Spider_0_Nova_getDescription,
&example_Nova_Spider_Nova_Spider,
},

{
&example_Nova_Square_Nova_numberSides,
&example_Nova_Square_Nova_calculateArea,
&example_Nova_Square_Nova_Square,
},

{
&example_Nova_SVGTest_Nova_main,
&example_Nova_SVGTest_Nova_SVGTest,
},

{
&example_Nova_T1_Nova_T1,
},

{
&example_Nova_T2_Nova_T2,
},

{
&example_Nova_Test_Nova_main,
&example_Nova_Test_Nova_Test,
},

{
&example_Nova_ThreadDemo_Nova_main,
&example_Nova_ThreadDemo_Nova_ThreadDemo,
},

{
&example_Nova_ThreadDemoImplementation_0_Nova_run,
&example_Nova_ThreadDemoImplementation_Nova_ThreadDemoImplementation,
},

{
&example_ackermann_Nova_Ackermann_Nova_main,
&example_ackermann_Nova_Ackermann_Nova_run,
&example_ackermann_Nova_Ackermann_Nova_run2,
&example_ackermann_Nova_Ackermann_Nova_Ackermann,
},

{
&example_copy_Nova_Dog_Nova_Dog,
},

{
&example_database_Nova_DatabaseDemo_Nova_main,
&example_database_Nova_DatabaseDemo_Nova_DatabaseDemo,
},

{
&example_network_Nova_ClientDemo_Nova_main,
&example_network_Nova_ClientDemo_Nova_ClientDemo,
},

{
&example_network_Nova_ConnectionThread_0_Nova_run,
&example_network_Nova_ConnectionThread_Nova_ConnectionThread,
},

{
&example_network_Nova_OutputThread_0_Nova_run,
&example_network_Nova_OutputThread_Nova_OutputThread,
},

{
&example_network_Nova_ServerDemo_Nova_main,
&example_network_Nova_ServerDemo_Nova_ServerDemo,
},

{
&stabilitytest_Nova_ClientThread_0_Nova_run,
&stabilitytest_Nova_ClientThread_Nova_ClientThread,
},

{
&stabilitytest_Nova_ClosureStability_Nova_test,
&stabilitytest_Nova_ClosureStability_Nova_ClosureStability,
},

{
&stabilitytest_Nova_ExceptionStability_0_Nova_test,
&stabilitytest_Nova_ExceptionStability_Nova_ExceptionStability,
},

{
&stabilitytest_Nova_FileStability_0_Nova_test,
&stabilitytest_Nova_FileStability_Nova_FileStability,
},

{
&stabilitytest_Nova_LambdaStability_0_Nova_test,
&stabilitytest_Nova_LambdaStability_Nova_LambdaStability,
},

{
&stabilitytest_Nova_NetworkStability_0_Nova_test,
&stabilitytest_Nova_NetworkStability_Nova_NetworkStability,
},

{
&stabilitytest_Nova_PolymorphicSubClass_Nova_toString,
&stabilitytest_Nova_PolymorphicSubClass_Nova_PolymorphicSubClass,
},

{
&stabilitytest_Nova_PolymorphicSuperClass_Nova_giveBirth,
0,
&stabilitytest_Nova_PolymorphicSuperClass_Nova_PolymorphicSuperClass,
},

{
&stabilitytest_Nova_PolymorphismStability_0_Nova_test,
&stabilitytest_Nova_PolymorphismStability_Nova_PolymorphismStability,
},

{
&stabilitytest_Nova_StabilityExceptionHandler_Nova_uncaughtException,
&stabilitytest_Nova_StabilityExceptionHandler_Nova_StabilityExceptionHandler,
},

{
&stabilitytest_Nova_StabilityTest_Nova_main,
&stabilitytest_Nova_StabilityTest_0_Nova_test,
&stabilitytest_Nova_StabilityTest_0_Nova_fail,
&stabilitytest_Nova_StabilityTest_1_Nova_fail,
&stabilitytest_Nova_StabilityTest_Nova_StabilityTest,
},

{
0,
&stabilitytest_Nova_StabilityTestCase_Nova_StabilityTestCase,
},

{
&stabilitytest_Nova_StabilityTestException_Nova_StabilityTestException,
},

{
&stabilitytest_Nova_SyntaxStability_0_Nova_test,
&stabilitytest_Nova_SyntaxStability_Nova_SyntaxStability,
},

{
&stabilitytest_Nova_ThreadImplementation_0_Nova_run,
&stabilitytest_Nova_ThreadImplementation_Nova_ThreadImplementation,
},

{
&stabilitytest_Nova_ThreadStability_0_Nova_test,
&stabilitytest_Nova_ThreadStability_Nova_ThreadStability,
},

{
&stabilitytest_Nova_TimeStability_0_Nova_test,
&stabilitytest_Nova_TimeStability_Nova_TimeStability,
},

{
&stabilitytest_Nova_ToStringStability_0_Nova_test,
&stabilitytest_Nova_ToStringStability_Nova_ToStringStability,
},

{
&stabilitytest_Nova_UnstableException_Nova_UnstableException,
},

};
