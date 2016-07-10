#include <precompiled.h>
#include <example/example_Nova_Square.h>

example_Extension_VTable_Square example_Extension_VTable_Square_val =
{
	{
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_standard_operators_Nova_Equals*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_Nova_Object_0_Nova_equals,
		0,
		(int(*)(example_Nova_Polygon*, nova_standard_exception_Nova_ExceptionData*))example_Nova_Square_Nova_numberSides,
		(double(*)(example_Nova_Polygon*, nova_standard_exception_Nova_ExceptionData*))example_Nova_Square_Nova_calculateArea,
	},
	nova_standard_Nova_Object_0_Nova_getHashCodeLong,
	nova_standard_Nova_Object_1_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
	example_Nova_Square_Nova_numberSides,
	example_Nova_Square_Nova_calculateArea,
};


void example_Nova_SquareNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_Square* example_Nova_Square_Nova_Square(example_Nova_Square* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int example_Nova_Square_Nova_sideLength)
{
	CCLASS_NEW(example_Nova_Square, this,);
	this->vtable = &example_Extension_VTable_Square_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	example_Nova_Square_Nova_super(this, exceptionData);
	
	{
		example_Nova_Square_Nova_this(this, exceptionData, example_Nova_Square_Nova_sideLength);
	}
	
	return this;
}

void example_Nova_Square_Nova_destroy(example_Nova_Square** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void example_Nova_Square_Nova_this(example_Nova_Square* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int example_Nova_Square_Nova_sideLength)
{
	this->example_Nova_Square_Nova_sideLength = example_Nova_Square_Nova_sideLength;
}

int example_Nova_Square_Nova_numberSides(example_Nova_Square* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return (int)4;
}

double example_Nova_Square_Nova_calculateArea(example_Nova_Square* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return (double)this->example_Nova_Square_Nova_sideLength * this->example_Nova_Square_Nova_sideLength;
}

void example_Nova_Square_Nova_super(example_Nova_Square* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->example_Nova_Square_Nova_sideLength = 0;
}

