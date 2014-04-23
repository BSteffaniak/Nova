#ifndef FILE_List_FATHOM
#define FILE_List_FATHOM

typedef struct List List;

#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "ListNode.h"

CLASS
(
	List, 
	
	, struct Private* prv;
)

List* fathom_List_List(ExceptionData* exceptionData);
void fathom_del_List(List** reference, ExceptionData* exceptionData);
ListNode* fathom_List_getFirst(List* reference, ExceptionData* exceptionData);
void fathom_List_add(List* reference, ExceptionData* exceptionData, Object* fathom_data_149);
void fathom_List_remove(List* reference, ExceptionData* exceptionData, Object* fathom_data_152);
#endif