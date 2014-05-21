#ifndef FILE_Exception_NOVA
#define FILE_Exception_NOVA

typedef struct Exception Exception;

#include <stdlib.h>
#include <CClass.h>
#include <ExceptionHandler.h>
#include <Fathom.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "Math.h"
#include "DivideByZeroException.h"

CCLASS_CLASS
(
	Exception
)


Exception* nova_Exception_Exception(ExceptionData* exceptionData);
void nova_del_Exception(Exception** this, ExceptionData* exceptionData);
#endif