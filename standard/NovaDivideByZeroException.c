#include <precompiled.h>
#include "NovaDivideByZeroException.h"




DivideByZeroException* nova_DivideByZeroException_DivideByZeroException(DivideByZeroException* this, ExceptionData* exceptionData)
{
	DivideByZeroException* this = (DivideByZeroException*)1;
	
	{
	}
	
	return this;
}

void nova_del_DivideByZeroException(DivideByZeroException** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	NOVA_FREE(*this);
}
