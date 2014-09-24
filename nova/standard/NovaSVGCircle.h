#pragma once
#ifndef FILE_SVGCircle_NOVA
#define FILE_SVGCircle_NOVA

typedef struct SVGCircle SVGCircle;

#include <Nova.h>
#include <ExceptionHandler.h>
#include <NovaExceptionData.h>
#include <NovaNull.h>
#include <NovaObject.h>
#include <NovaString.h>
#include <NovaSystem.h>
#include <NovaException.h>
#include <NovaMath.h>
#include <NovaConsole.h>
#include <NovaGC.h>
#include <NovaNumber.h>
#include <NovaByte.h>
#include <NovaShort.h>
#include <NovaInt.h>
#include <NovaLong.h>
#include <NovaFloat.h>
#include <NovaDouble.h>
#include <NovaChar.h>
#include <NovaDivideByZeroException.h>
#include <NovaSVGComponent.h>
#include <NovaSVGComponentList.h>
#include <NovaFile.h>

typedef struct nova_VTable_SVGCircle
{
	String* (*nova_virtual_0_toString)(SVGCircle*, ExceptionData*);
	char (*nova_virtual_0_equals)(Object*, ExceptionData*, Object*);
	void (*nova_virtual_0_generateOutput)(SVGCircle*, ExceptionData*, File*);
} nova_VTable_SVGCircle;

CCLASS_CLASS
(
	SVGCircle, 
	
	nova_VTable_SVGCircle* vtable;
	SVGComponentList* nova_SVGComponent_children;
	double nova_SVGCircle_x;
	double nova_SVGCircle_y;
	int nova_SVGCircle_r;
)

SVGCircle* nova_SVGCircle_construct(SVGCircle* this, ExceptionData* exceptionData, double nova_0_x, double nova_0_y, int nova_0_r);
void nova_del_SVGCircle(SVGCircle** this, ExceptionData* exceptionData);
void nova_SVGCircle_this(SVGCircle* this, ExceptionData* exceptionData, double nova_0_x, double nova_0_y, int nova_0_r);
void nova_0_SVGCircle_generateOutput(SVGCircle* this, ExceptionData* exceptionData, File* nova_0_file);
String* nova_0_SVGCircle_toString(SVGCircle* this, ExceptionData* exceptionData);
void nova_SVGCircle_super(SVGCircle* this, ExceptionData* exceptionData);

#endif