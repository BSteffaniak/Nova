#ifndef FILE_ExceptionData_NOVA
#define FILE_ExceptionData_NOVA

typedef struct ExceptionData ExceptionData;

#include <stdlib.h>
#include <CClass.h>
#include <ExceptionHandler.h>
#include <Fathom.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "Math.h"
#include "DivideByZeroException.h"
#include <setjmp.h>
#include "ArrayList.h"

CCLASS_CLASS
(
	ExceptionData, 
	
	struct Private* prv;
)


ExceptionData* nova_ExceptionData_ExceptionData(ExceptionData* exceptionData, jmp_buf* buf);
void nova_del_ExceptionData(ExceptionData** this, ExceptionData* exceptionData);
ArrayList* nova_ExceptionData_getCodes(ExceptionData* this, ExceptionData* exceptionData);
void nova_ExceptionData_addCode(ExceptionData* this, ExceptionData* exceptionData, int nova_code_136);
jmp_buf* nova_ExceptionData_getBuffer(ExceptionData* this, ExceptionData* exceptionData);
ExceptionData* nova_ExceptionData_getCorrectData(ExceptionData* this, ExceptionData* exceptionData, int nova_code_142);
jmp_buf* nova_ExceptionData_getCorrectBuffer(ExceptionData* this, ExceptionData* exceptionData, int nova_code_145);
void nova_ExceptionData_jumpToBuffer(ExceptionData* this, ExceptionData* exceptionData, int nova_code_148);
ExceptionData* nova_ExceptionData_getParent(ExceptionData* this, ExceptionData* exceptionData);
void nova_ExceptionData_setParent(ExceptionData* this, ExceptionData* exceptionData, ExceptionData* nova_p_154);
#endif