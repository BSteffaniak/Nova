#include <precompiled.h>
#include <nova/standard/primitive/nova_standard_primitive_Nova_Null.h>

nova_standard_primitive_Extension_VTable_Null nova_standard_primitive_Extension_VTable_Null_val =
{
	{
		0,
		(char(*)(nova_standard_operators_Nova_Equals*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_Nova_String_Nova_equals,
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
	nova_standard_primitive_Nova_Null_Nova_toString,
	nova_standard_Nova_String_Nova_equals,
	nova_standard_primitive_Nova_Null_Nova_concat,
};


void nova_standard_primitive_Nova_NullNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_primitive_Nova_Null* nova_standard_primitive_Nova_Null_2_Nova_construct(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_standard_primitive_Nova_Null, this,);
	this->vtable = &nova_standard_primitive_Extension_VTable_Null_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_String_Nova_super((nova_standard_Nova_String*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_primitive_Nova_Null_2_Nova_super(this, exceptionData);
	
	{
		nova_standard_primitive_Nova_Null_2_Nova_this(this, exceptionData);
	}
	
	return this;
}

nova_standard_primitive_Nova_Null* nova_standard_primitive_Nova_Null_3_Nova_construct(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData, char nova_standard_primitive_Nova_Null_Nova_c)
{
	CCLASS_NEW(nova_standard_primitive_Nova_Null, this,);
	this->vtable = &nova_standard_primitive_Extension_VTable_Null_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_String_Nova_super((nova_standard_Nova_String*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_Nova_String_0_Nova_this((nova_standard_Nova_String*)(this), exceptionData, nova_standard_primitive_Nova_Null_Nova_c);
	nova_standard_primitive_Nova_Null_2_Nova_super(this, exceptionData);
	
	{
		nova_standard_primitive_Nova_Null_3_Nova_this(this, exceptionData, nova_standard_primitive_Nova_Null_Nova_c);
	}
	
	return this;
}

nova_standard_primitive_Nova_Null* nova_standard_primitive_Nova_Null_4_Nova_construct(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData, char* nova_standard_primitive_Nova_Null_Nova_chars)
{
	CCLASS_NEW(nova_standard_primitive_Nova_Null, this,);
	this->vtable = &nova_standard_primitive_Extension_VTable_Null_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_String_Nova_super((nova_standard_Nova_String*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_Nova_String_1_Nova_this((nova_standard_Nova_String*)(this), exceptionData, nova_standard_primitive_Nova_Null_Nova_chars);
	nova_standard_primitive_Nova_Null_2_Nova_super(this, exceptionData);
	
	{
		nova_standard_primitive_Nova_Null_4_Nova_this(this, exceptionData, nova_standard_primitive_Nova_Null_Nova_chars);
	}
	
	return this;
}

void nova_standard_primitive_Nova_Null_Nova_destroy(nova_standard_primitive_Nova_Null** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_standard_primitive_Nova_Null_2_Nova_this(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

nova_standard_Nova_String* nova_standard_primitive_Nova_Null_Nova_toString(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return nova_standard_Nova_String_1_Nova_construct(0, exceptionData, "null");
}

nova_standard_Nova_String* nova_standard_primitive_Nova_Null_Nova_concat(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* nova_standard_primitive_Nova_Null_Nova_other)
{
	return nova_standard_Nova_String_0_Nova_concat(nova_standard_Nova_String_1_Nova_construct(0, exceptionData, "null"), exceptionData, nova_standard_primitive_Nova_Null_Nova_other);
}

void nova_standard_primitive_Nova_Null_3_Nova_this(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData, char nova_standard_primitive_Nova_Null_Nova_c)
{
}

void nova_standard_primitive_Nova_Null_4_Nova_this(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData, char* nova_standard_primitive_Nova_Null_Nova_chars)
{
}

void nova_standard_primitive_Nova_Null_2_Nova_super(nova_standard_primitive_Nova_Null* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

