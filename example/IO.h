#ifndef FILE_IO_FATHOM
#define FILE_IO_FATHOM

typedef struct IO IO;

#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "DivideByZeroException.h"
#include <stdio.h>
#include <stdlib.h>
#include "String.h"
#include <Fathom.h>

CLASS
(
IO
)

IO* fathom_IO_IO(ExceptionData* exceptionData);
void fathom_del_IO(IO** this, ExceptionData* exceptionData);
void fathom_IO_println(ExceptionData* exceptionData, String* fathom_text_47);
void fathom_IO_print(ExceptionData* exceptionData, String* fathom_text_50);
void fathom_IO_printi(ExceptionData* exceptionData, int fathom_j_53);
void fathom_IO_printl(ExceptionData* exceptionData, long_long fathom_j_56);
int fathom_IO_getInt(ExceptionData* exceptionData);
String* fathom_IO_getLine(ExceptionData* exceptionData);
void fathom_IO_waitForEnter(ExceptionData* exceptionData);
extern IO* __static__IO;

#endif