#pragma once
#ifndef FILE_Exception_NOVA
#define FILE_Exception_NOVA

typedef struct Exception Exception;

#include <Nova.h>
#include <ExceptionHandler.h>
#include <NovaExceptionData.h>
#include <NovaNull.h>
#include <NovaObject.h>
#include <NovaString.h>
#include <NovaSystem.h>
#include "NovaException.h"
#include <NovaMath.h>
#include <NovaConsole.h>
#include <NovaGC.h>
#include <NovaNumber.h>
#include <NovaByte.h>
#include <NovaShort.h>
#include <NovaInt.h>
#include <NovaLong.h>
#include <NovaFloat.h>
#include <NovaDouble.h>
#include <NovaChar.h>
#include <NovaDivideByZeroException.h>

typedef struct nova_VTable_Exception
{
	String* (*nova_virtual_0_toString)(Object*, ExceptionData*);
	char (*nova_virtual_0_equals)(Object*, ExceptionData*, Object*);
} nova_VTable_Exception;

CCLASS_CLASS
(
	Exception, 
	
	nova_VTable_Exception* vtable;
)

Exception* nova_0_Exception_construct(Exception* this, ExceptionData* exceptionData);
void nova_del_Exception(Exception** this, ExceptionData* exceptionData);
void nova_Exception_this(Exception* this, ExceptionData* exceptionData);
void nova_Exception_super(Exception* this, ExceptionData* exceptionData);

#endif