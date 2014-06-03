#ifndef FILE_Array_NOVA
#define FILE_Array_NOVA

typedef struct Array Array;

#include <Fathom.h>
#include <gc.h>
#include <stdlib.h>
#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "Math.h"
#include "IO.h"
#include "Integer.h"
#include "Long.h"
#include "DivideByZeroException.h"

CCLASS_CLASS
(
	Array, 
	
	int nova_Array_length;
)


Array* nova_Array_Array(ExceptionData* exceptionData);
void nova_del_Array(Array** this, ExceptionData* exceptionData);
#endif