#include <precompiled.h>
#include <nova/standard/primitive/nova_standard_primitive_Nova_Primitive.h>


nova_VTable_nova_standard_primitive_Nova_Primitive nova_VTable_nova_standard_primitive_Nova_Primitive_val =
{
	nova_standard_Nova_Object_1_Nova_getHashCodeLong,
	nova_standard_Nova_Object_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
};
void nova_standard_primitive_Nova_PrimitiveNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_primitive_Nova_Primitive* nova_standard_primitive_Nova_Primitive_4_Nova_construct(nova_standard_primitive_Nova_Primitive* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_standard_primitive_Nova_Primitive, this,);
	this->vtable = &nova_VTable_nova_standard_primitive_Nova_Primitive_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_Object_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_primitive_Nova_Primitive_Nova_super(this, exceptionData);
	
	{
		nova_standard_primitive_Nova_Primitive_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_standard_primitive_Nova_Primitive_Nova_destroy(nova_standard_primitive_Nova_Primitive** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	NOVA_FREE(*this);
}

void nova_standard_primitive_Nova_Primitive_Nova_this(nova_standard_primitive_Nova_Primitive* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_standard_primitive_Nova_Primitive_Nova_super(nova_standard_primitive_Nova_Primitive* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

