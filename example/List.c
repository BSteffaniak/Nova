#include "List.h"
#include <CClass.h>
#include <ExceptionHandler.h>
#include "ExceptionData.h"
#include "Object.h"
#include "String.h"
#include "DivideByZeroException.h"
#include "ListNode.h"

PRIVATE
(
ListNode* fathom_start;
ListNode* fathom_current;
)

List* fathom_List_List(ExceptionData* exceptionData)
{
NEW(List, this);

this->prv->fathom_start = 0;
this->prv->fathom_current = 0;
{
}

return this;
}

void fathom_del_List(List** this, ExceptionData* exceptionData)
{
if (!*this)
{
return;
}

fathom_del_ListNode(&(*this)->prv->fathom_start, exceptionData);
fathom_del_ListNode(&(*this)->prv->fathom_current, exceptionData);
free((*this)->prv);

{
}
free(*this);
}

ListNode* fathom_List_getFirst(List* this, ExceptionData* exceptionData)
{
return this->prv->fathom_start;
}

void fathom_List_add(List* this, ExceptionData* exceptionData, Object* fathom_data_98)
{
ListNode* fathom_node_98;

fathom_node_98 = fathom_ListNode_ListNode(exceptionData, fathom_data_98);
if (this->prv->fathom_start == 0)
{
this->prv->fathom_start = fathom_node_98;
this->prv->fathom_current = fathom_node_98;
}
else
{
fathom_ListNode_setNext(this->prv->fathom_current, exceptionData, fathom_node_98);
}
this->prv->fathom_current = fathom_node_98;
}

void fathom_List_remove(List* this, ExceptionData* exceptionData, Object* fathom_data_116)
{
ListNode* fathom_prev_116;
ListNode* fathom_cur_116;

if (fathom_ListNode_getData(this->prv->fathom_start, exceptionData) == fathom_data_116)
{
this->prv->fathom_start = fathom_ListNode_getNext(this->prv->fathom_start, exceptionData);
}
fathom_prev_116 = this->prv->fathom_start;
fathom_cur_116 = fathom_ListNode_getNext(this->prv->fathom_start, exceptionData);
while (fathom_cur_116 != 0)
{
Object* fathom_d_200;

fathom_d_200 = fathom_ListNode_getData(fathom_cur_116, exceptionData);
if (fathom_d_200 == fathom_data_116)
{
fathom_ListNode_setNext(fathom_prev_116, exceptionData, fathom_ListNode_getNext(fathom_cur_116, exceptionData));
}
fathom_cur_116 = fathom_ListNode_getNext(fathom_cur_116, exceptionData);
}
}
