#pragma once
#ifndef FILE_PolymorphicSuperClass_NOVA
#define FILE_PolymorphicSuperClass_NOVA

typedef struct stabilitytest_NovaPolymorphicSuperClass stabilitytest_NovaPolymorphicSuperClass;

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
#include <stabilitytest/stabilitytest_NovaPolymorphicSubClass.h>

typedef struct nova_VTable_stabilitytest_NovaPolymorphicSuperClass
{
	nova_standard_NovaString* (*stabilitytest_NovaPolymorphicSuperClass_Novavirtual0_toString)(stabilitytest_NovaPolymorphicSuperClass*, nova_standard_exception_NovaExceptionData*);
	char (*nova_standard_NovaObject_Novavirtual0_equals)(nova_standard_NovaObject*, nova_standard_exception_NovaExceptionData*, nova_standard_NovaObject*);
} nova_VTable_stabilitytest_NovaPolymorphicSuperClass;

CCLASS_CLASS
(
	stabilitytest_NovaPolymorphicSuperClass, 
	
	nova_VTable_stabilitytest_NovaPolymorphicSuperClass* vtable;
	stabilitytest_NovaPolymorphicSubClass* stabilitytest_NovaPolymorphicSuperClass_Novachild;
)

void stabilitytest_NovaPolymorphicSuperClassNova_init_static(nova_standard_exception_NovaExceptionData* exceptionData);
stabilitytest_NovaPolymorphicSuperClass* stabilitytest_NovaPolymorphicSuperClass_Nova0_construct(stabilitytest_NovaPolymorphicSuperClass* this, nova_standard_exception_NovaExceptionData* exceptionData);
void nova_del_PolymorphicSuperClass(stabilitytest_NovaPolymorphicSuperClass** this, nova_standard_exception_NovaExceptionData* exceptionData);
void stabilitytest_NovaPolymorphicSuperClass_NovagiveBirth(stabilitytest_NovaPolymorphicSuperClass* this, nova_standard_exception_NovaExceptionData* exceptionData);
nova_standard_NovaString* stabilitytest_NovaPolymorphicSuperClass_Nova0_toString(stabilitytest_NovaPolymorphicSuperClass* this, nova_standard_exception_NovaExceptionData* exceptionData);
void stabilitytest_NovaPolymorphicSuperClass_Novathis(stabilitytest_NovaPolymorphicSuperClass* this, nova_standard_exception_NovaExceptionData* exceptionData);
void stabilitytest_NovaPolymorphicSuperClass_Novasuper(stabilitytest_NovaPolymorphicSuperClass* this, nova_standard_exception_NovaExceptionData* exceptionData);

#endif