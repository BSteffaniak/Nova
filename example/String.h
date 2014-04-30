#ifndef FILE_String_FATHOM
#define FILE_String_FATHOM

typedef struct String String;

#include <stdlib.h>
#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "DivideByZeroException.h"

CCLASS_CLASS
(
	String, 
	
	struct Private* prv;
)


String* fathom_String_String(ExceptionData* exceptionData, char* fathom_data_5);
void fathom_del_String(String** this, ExceptionData* exceptionData);
char* fathom_String_toCharArray(String* this, ExceptionData* exceptionData);
void fathom_String_do1(String* this, ExceptionData* exceptionData);
void fathom_String_do2(String* this, ExceptionData* exceptionData);
void fathom_String_do3(String* this, ExceptionData* exceptionData);
void fathom_String_do4(String* this, ExceptionData* exceptionData);
void fathom_String_do5(String* this, ExceptionData* exceptionData);
void fathom_String_do6(String* this, ExceptionData* exceptionData);
#endif