#include <precompiled.h>
#include <nova/datastruct/nova_datastruct_Nova_Vector2D.h>



nova_datastruct_Extension_VTable_Vector2D nova_datastruct_Extension_VTable_Vector2D_val =
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


void nova_datastruct_Nova_Vector2D_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_datastruct_Nova_Vector2D* nova_datastruct_Nova_Vector2D_Nova_construct(nova_datastruct_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_datastruct_Nova_Vector2D, this,);
	this->vtable = &nova_datastruct_Extension_VTable_Vector2D_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	nova_datastruct_Nova_Vector2D_Nova_super(this, exceptionData);
	
	{
		nova_datastruct_Nova_Vector2D_0_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_datastruct_Nova_Vector2D_Nova_destroy(nova_datastruct_Nova_Vector2D** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_datastruct_Nova_Vector2D_0_Nova_this(nova_datastruct_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_datastruct_Nova_Vector2D_Nova_super(nova_datastruct_Nova_Vector2D* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

