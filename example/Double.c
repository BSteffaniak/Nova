#include "Double.h"
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

Double* nova_Double_Double(ExceptionData* exceptionData)
{
	CCLASS_NEW(Double, this,);
	
	{
	}
	
	return this;
}

void nova_del_Double(Double** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	free(*this);
}
