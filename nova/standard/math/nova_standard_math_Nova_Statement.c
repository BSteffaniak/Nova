#include <precompiled.h>
#include <nova/standard/math/nova_standard_math_Nova_Statement.h>


nova_standard_math_Extension_VTable_Statement nova_standard_math_Extension_VTable_Statement_val =
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
	},
	nova_standard_Nova_Object_0_Nova_getHashCodeLong,
	nova_standard_Nova_Object_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
};


void nova_standard_math_Nova_StatementNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_math_Nova_Statement* nova_standard_math_Nova_Statement_2_Nova_construct(nova_standard_math_Nova_Statement* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_standard_math_Nova_Statement, this,);
	this->vtable = &nova_standard_math_Extension_VTable_Statement_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_math_Nova_Statement_Nova_super(this, exceptionData);
	
	{
		nova_standard_math_Nova_Statement_2_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_standard_math_Nova_Statement_Nova_destroy(nova_standard_math_Nova_Statement** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_standard_math_Nova_Statement_2_Nova_this(nova_standard_math_Nova_Statement* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_standard_math_Nova_Statement_Nova_super(nova_standard_math_Nova_Statement* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}
