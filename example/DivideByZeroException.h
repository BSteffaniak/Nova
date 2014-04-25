#ifndef FILE_DivideByZeroException_FATHOM
#define FILE_DivideByZeroException_FATHOM

typedef struct DivideByZeroException DivideByZeroException;

#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "DivideByZeroException.h"

CLASS
(
DivideByZeroException
)

DivideByZeroException* fathom_DivideByZeroException_DivideByZeroException(ExceptionData* exceptionData);
void fathom_del_DivideByZeroException(DivideByZeroException** this, ExceptionData* exceptionData);
#endif