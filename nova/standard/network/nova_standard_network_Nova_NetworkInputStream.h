#pragma once
#ifndef FILE_nova_standard_network_Nova_NetworkInputStream_NOVA
#define FILE_nova_standard_network_Nova_NetworkInputStream_NOVA

typedef struct nova_standard_network_Nova_NetworkInputStream nova_standard_network_Nova_NetworkInputStream;


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
#include <nova/standard/network/NativeSocket.h>
#include <nova/standard/io/nova_standard_io_Nova_InputStream.h>
#include <nova/standard/network/nova_standard_network_Nova_ConnectionSocket.h>


typedef struct nova_standard_network_Extension_VTable_NetworkInputStream nova_standard_network_Extension_VTable_NetworkInputStream;
struct nova_standard_network_Extension_VTable_NetworkInputStream
{
	nova_Interface_VTable itable;
	nova_standard_Nova_String* (*nova_standard_network_Nova_NetworkInputStream_virtual_Nova_readString)(nova_standard_network_Nova_NetworkInputStream*, nova_standard_exception_Nova_ExceptionData*);
	char* (*nova_standard_network_Nova_NetworkInputStream_virtual_Nova_readBytes)(nova_standard_network_Nova_NetworkInputStream*, nova_standard_exception_Nova_ExceptionData*);
};

extern nova_standard_network_Extension_VTable_NetworkInputStream nova_standard_network_Extension_VTable_NetworkInputStream_val;


CCLASS_CLASS
(
	nova_standard_network_Nova_NetworkInputStream, 
	
	nova_standard_network_Extension_VTable_NetworkInputStream* vtable;
	struct Private* prv;
)

void nova_standard_network_Nova_NetworkInputStreamNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData);
nova_standard_network_Nova_NetworkInputStream* nova_standard_network_Nova_NetworkInputStream_0_Nova_construct(nova_standard_network_Nova_NetworkInputStream* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_network_Nova_ConnectionSocket* l0_Nova_socket);
void nova_standard_network_Nova_NetworkInputStream_Nova_destroy(nova_standard_network_Nova_NetworkInputStream** this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_network_Nova_NetworkInputStream_0_Nova_this(nova_standard_network_Nova_NetworkInputStream* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_network_Nova_ConnectionSocket* l0_Nova_socket);
nova_standard_Nova_String* nova_standard_network_Nova_NetworkInputStream_Nova_readString(nova_standard_network_Nova_NetworkInputStream* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
char* nova_standard_network_Nova_NetworkInputStream_Nova_readBytes(nova_standard_network_Nova_NetworkInputStream* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void nova_standard_network_Nova_NetworkInputStream_Nova_super(nova_standard_network_Nova_NetworkInputStream* this, nova_standard_exception_Nova_ExceptionData* exceptionData);

#endif