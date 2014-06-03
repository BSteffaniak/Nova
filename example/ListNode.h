#ifndef FILE_ListNode_NOVA
#define FILE_ListNode_NOVA

typedef struct ListNode ListNode;

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
	ListNode, 
	
	struct Private* prv;
)


ListNode* nova_ListNode_ListNode(ExceptionData* exceptionData, Object* nova_0_data);
void nova_del_ListNode(ListNode** this, ExceptionData* exceptionData);
Object* nova_ListNode_getData(ListNode* this, ExceptionData* exceptionData);
ListNode* nova_ListNode_getNext(ListNode* this, ExceptionData* exceptionData);
void nova_ListNode_setNext(ListNode* this, ExceptionData* exceptionData, ListNode* nova_0_next);
#endif