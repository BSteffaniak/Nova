#include <precompiled.h>
#include <stabilitytest/stabilitytest_Nova_ClassWithProperties.h>



stabilitytest_Extension_VTable_ClassWithProperties stabilitytest_Extension_VTable_ClassWithProperties_val =
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
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


CCLASS_PRIVATE
(
	int stabilitytest_Nova_ClassWithProperties_Nova_privateProp1;
	int stabilitytest_Nova_ClassWithProperties_Nova_privateProp2;
	
)

int stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop1(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_ClassWithProperties_Nova_value);
int stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop2(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_ClassWithProperties_Nova_value);
void stabilitytest_Nova_ClassWithProperties_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ClassWithProperties* stabilitytest_Nova_ClassWithProperties_Nova_ClassWithProperties(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_ClassWithProperties, this);
	this->vtable = &stabilitytest_Extension_VTable_ClassWithProperties_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_ClassWithProperties_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ClassWithProperties_0_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_ClassWithProperties_Nova_destroy(stabilitytest_Nova_ClassWithProperties** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE((*this)->prv);
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ClassWithProperties_0_Nova_this(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

int stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop1(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp1;
}

int stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop1(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_ClassWithProperties_Nova_value)
{
	this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp1 = stabilitytest_Nova_ClassWithProperties_Nova_value;
	return stabilitytest_Nova_ClassWithProperties_Nova_value;
}

int stabilitytest_Nova_ClassWithProperties_Accessor_Nova_prop2(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	return this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp2;
}

int stabilitytest_Nova_ClassWithProperties_Mutator_Nova_prop2(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData, int stabilitytest_Nova_ClassWithProperties_Nova_value)
{
	this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp2 = stabilitytest_Nova_ClassWithProperties_Nova_value;
	return stabilitytest_Nova_ClassWithProperties_Nova_value;
}

void stabilitytest_Nova_ClassWithProperties_Nova_super(stabilitytest_Nova_ClassWithProperties* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp1 = 0;
	this->prv->stabilitytest_Nova_ClassWithProperties_Nova_privateProp2 = 0;
}

