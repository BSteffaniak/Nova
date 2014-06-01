#ifndef FILE_GC_NOVA
#define FILE_GC_NOVA

typedef struct GC GC;

#include <gc.h>
#include <stdlib.h>
#include <CClass.h>
#include <ExceptionHandler.h>
#include <Fathom.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "Math.h"
#include "IO.h"
#include "Integer.h"
#include "DivideByZeroException.h"
#include <gc.h>

CCLASS_CLASS
(
	GC
)


GC* nova_GC_GC(ExceptionData* exceptionData);
void nova_del_GC(GC** this, ExceptionData* exceptionData);
void nova_GC_init(ExceptionData* exceptionData);
int nova_GC_getFreeBytes(ExceptionData* exceptionData);
int nova_GC_getTotalBytes(ExceptionData* exceptionData);
int nova_GC_getHeapSize(ExceptionData* exceptionData);
int nova_GC_getBytesSinceGC(ExceptionData* exceptionData);
void nova_GC_setFreeSpaceDivisor(ExceptionData* exceptionData, int nova_0_divisor);
void nova_GC_collect(ExceptionData* exceptionData);
void nova_GC_enableIncremental(ExceptionData* exceptionData);
void nova_GC_dump(ExceptionData* exceptionData);
#endif