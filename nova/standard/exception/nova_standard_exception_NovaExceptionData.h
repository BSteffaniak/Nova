#pragma once
#ifndef FILE_ExceptionData_NOVA
#define FILE_ExceptionData_NOVA

typedef struct nova_standard_exception_NovaExceptionData nova_standard_exception_NovaExceptionData;

#include <Nova.h>
#include <ExceptionHandler.h>
#include <nova/standard/exception/nova_standard_exception_NovaExceptionData.h>
#include <nova/standard/exception/nova_standard_exception_NovaException.h>
#include <nova/standard/exception/nova_standard_exception_NovaDivideByZeroException.h>
#include <nova/standard/io/nova_standard_io_NovaConsole.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaNumber.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaByte.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaShort.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaInt.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaLong.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaFloat.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaDouble.h>
#include <nova/standard/primitive/nova_standard_primitive_NovaNull.h>
#include <nova/standard/primitive/nova_standard_primitive_NovaChar.h>
#include <nova/standard/primitive/nova_standard_primitive_NovaBool.h>
#include <nova/standard/gc/nova_standard_gc_NovaGC.h>
#include <nova/standard/nova_standard_NovaObject.h>
#include <nova/standard/nova_standard_NovaString.h>
#include <nova/standard/nova_standard_NovaSystem.h>
#include <nova/standard/nova_standard_NovaMath.h>
#include <nova/standard/datastruct/nova_standard_datastruct_NovaArrayList.h>

typedef struct nova_VTable_nova_standard_exception_NovaExceptionData
{
	nova_standard_NovaString* (*nova_standard_NovaObject_Novavirtual0_toString)(nova_standard_NovaObject*, nova_standard_exception_NovaExceptionData*);
	char (*nova_standard_NovaObject_Novavirtual0_equals)(nova_standard_NovaObject*, nova_standard_exception_NovaExceptionData*, nova_standard_NovaObject*);
} nova_VTable_nova_standard_exception_NovaExceptionData;

CCLASS_CLASS
(
	nova_standard_exception_NovaExceptionData, 
	
	nova_VTable_nova_standard_exception_NovaExceptionData* vtable;
	nova_standard_exception_NovaException* nova_standard_exception_NovaExceptionData_NovathrownException;
	nova_standard_datastruct_NovaArrayList* nova_standard_exception_NovaExceptionData_Novacodes;
	struct Private* prv;
)

void nova_standard_exception_NovaExceptionDataNova_init_static(nova_standard_exception_NovaExceptionData* exceptionData);
nova_standard_exception_NovaExceptionData* nova_standard_exception_NovaExceptionData_Novaconstruct(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, buffer* l0_Novabuf);
void nova_del_ExceptionData(nova_standard_exception_NovaExceptionData** this, nova_standard_exception_NovaExceptionData* exceptionData);
void nova_standard_exception_NovaExceptionData_Novathis(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, buffer* l0_Novabuf);
void nova_standard_exception_NovaExceptionData_NovaaddCode(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novacode);
buffer* nova_standard_exception_NovaExceptionData_NovagetBuffer(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData);
nova_standard_exception_NovaExceptionData* nova_standard_exception_NovaExceptionData_NovagetCorrectData(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novacode);
buffer* nova_standard_exception_NovaExceptionData_NovagetCorrectBuffer(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novacode);
void nova_standard_exception_NovaExceptionData_NovajumpToBuffer(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novacode);
nova_standard_exception_NovaExceptionData* nova_standard_exception_NovaExceptionData_NovagetParent(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData);
void nova_standard_exception_NovaExceptionData_NovasetParent(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData, nova_standard_exception_NovaExceptionData* l0_Novap);
void nova_standard_exception_NovaExceptionData_Novasuper(nova_standard_exception_NovaExceptionData* this, nova_standard_exception_NovaExceptionData* exceptionData);

#endif