#pragma once
#ifndef FILE_Dog_NOVA
#define FILE_Dog_NOVA

typedef struct Dog Dog;

#include <Nova.h>
#include <ExceptionHandler.h>
#include <NovaExceptionData.h>
#include <NovaObject.h>
#include <NovaString.h>
#include <NovaSystem.h>
#include <NovaException.h>
#include <NovaMath.h>
#include <NovaConsole.h>
#include <NovaGC.h>
#include <NovaNumber.h>
#include <NovaShort.h>
#include <NovaInteger.h>
#include <NovaLong.h>
#include <NovaFloat.h>
#include <NovaDouble.h>
#include <NovaChar.h>
#include <NovaDivideByZeroException.h>
#include <NovaAnimal.h>

typedef struct nova_VTable_Dog
{
	int (*nova_virtual_1_getNumLegs)(Dog*, ExceptionData*);
	int (*nova_virtual_1_getNumEyes)(Dog*, ExceptionData*);
	String* (*nova_virtual_1_getDescription)(Dog*, ExceptionData*);
} nova_VTable_Dog;

CCLASS_CLASS
(
	Dog, 
	
	nova_VTable_Dog* vtable;
)

Dog* nova_Dog_Dog(Dog* this, ExceptionData* exceptionData);
void nova_del_Dog(Dog** this, ExceptionData* exceptionData);
int nova_1_Dog_getNumLegs(Dog* this, ExceptionData* exceptionData);
int nova_1_Dog_getNumEyes(Dog* this, ExceptionData* exceptionData);
String* nova_1_Dog_getDescription(Dog* this, ExceptionData* exceptionData);

#endif