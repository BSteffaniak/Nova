#include <precompiled.h>
#include "NovaBool.h"


nova_VTable_Bool nova_VTable_Bool_val =
{
	nova_2_Object_toString,
	nova_2_Object_equals,
};

Bool* nova_Bool_Bool(Bool* this, ExceptionData* exceptionData)
{
	CCLASS_NEW(Bool, this,);
	
	this->vtable = &nova_VTable_Bool_val;
	{
	}
	
	return this;
}

void nova_del_Bool(Bool** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	NOVA_FREE(*this);
}
