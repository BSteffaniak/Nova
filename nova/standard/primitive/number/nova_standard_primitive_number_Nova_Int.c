#include <precompiled.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_Nova_Int.h>


nova_standard_primitive_number_Extension_VTable_Int nova_standard_primitive_number_Extension_VTable_Int_val =
{
	{
		(nova_standard_Nova_Object*(*)(nova_standard_operators_Nova_Multipliable*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_primitive_number_Nova_Int_1_Nova_multiply,
		0,
		0,
		0,
		0,
		0,
		0,
		(int(*)(nova_standard_datastruct_Nova_Comparable*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_primitive_number_Nova_Int_0_Nova_compareTo,
		0,
		0,
		0,
		0,
	},
	nova_standard_primitive_number_Nova_Int_Nova_getHashCodeLong,
	nova_standard_primitive_number_Nova_Int_2_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
	nova_standard_primitive_number_Nova_Int_0_Nova_numDigits,
	nova_standard_primitive_number_Nova_Int_0_Nova_compareTo,
	nova_standard_primitive_number_Nova_Int_1_Nova_multiply,
};


int nova_standard_primitive_number_Nova_Int_Nova_MAX_VALUE;
int nova_standard_primitive_number_Nova_Int_Nova_MIN_VALUE;
void nova_standard_primitive_number_Nova_IntNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
		nova_standard_primitive_number_Nova_Int_Nova_MAX_VALUE = 2147483647;
		nova_standard_primitive_number_Nova_Int_Nova_MIN_VALUE = -2147483648LL;
	}
}

nova_standard_primitive_number_Nova_Int* nova_standard_primitive_number_Nova_Int_Nova_construct(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_value)
{
	CCLASS_NEW(nova_standard_primitive_number_Nova_Int, this,);
	this->vtable = &nova_standard_primitive_number_Extension_VTable_Int_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_primitive_Nova_Primitive_Nova_super((nova_standard_primitive_Nova_Primitive*)this, exceptionData);
	nova_standard_primitive_number_Nova_Number_2_Nova_super((nova_standard_primitive_number_Nova_Number*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_primitive_Nova_Primitive_4_Nova_this((nova_standard_primitive_Nova_Primitive*)(this), exceptionData);
	nova_standard_primitive_number_Nova_Number_7_Nova_this((nova_standard_primitive_number_Nova_Number*)(this), exceptionData);
	nova_standard_primitive_number_Nova_Int_4_Nova_super(this, exceptionData);
	
	{
		nova_standard_primitive_number_Nova_Int_Nova_this(this, exceptionData, l0_Nova_value);
	}
	
	return this;
}

void nova_standard_primitive_number_Nova_Int_Nova_destroy(nova_standard_primitive_number_Nova_Int** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	NOVA_FREE(*this);
}

void nova_standard_primitive_number_Nova_Int_Nova_this(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_value)
{
	this->nova_standard_primitive_number_Nova_Int_Nova_value = l0_Nova_value;
}

long nova_standard_primitive_number_Nova_Int_Nova_getHashCodeLong(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return (long)this->nova_standard_primitive_number_Nova_Int_Nova_value;
}

int nova_standard_primitive_number_Nova_Int_0_Nova_numDigits(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_number)
{
	return nova_standard_primitive_number_Nova_Long_0_Nova_numDigits(0, exceptionData, (long)(l0_Nova_number));
}

nova_standard_Nova_String* nova_standard_primitive_number_Nova_Int_1_Nova_toString(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, int l0_Nova_value)
{
	return nova_standard_primitive_number_Nova_Long_1_Nova_toString(0, exceptionData, (long)(l0_Nova_value));
}

nova_standard_Nova_String* nova_standard_primitive_number_Nova_Int_2_Nova_toString(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return nova_standard_primitive_number_Nova_Int_1_Nova_toString(this, exceptionData, this->nova_standard_primitive_number_Nova_Int_Nova_value);
}

int nova_standard_primitive_number_Nova_Int_Nova_parseInt(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String* l0_Nova_num)
{
	return (int)atoi((char*)(l0_Nova_num->nova_standard_Nova_String_Nova_chars));
}

int nova_standard_primitive_number_Nova_Int_0_Nova_compareTo(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_primitive_number_Nova_Int* l0_Nova_prim)
{
	int l1_Nova_other;
	
	l1_Nova_other = l0_Nova_prim->nova_standard_primitive_number_Nova_Int_Nova_value;
	return this->nova_standard_primitive_number_Nova_Int_Nova_value - l1_Nova_other;
}

int nova_standard_primitive_number_Nova_Int_1_Nova_multiply(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_primitive_number_Nova_Int* l0_Nova_prim)
{
	int l1_Nova_value;
	
	l1_Nova_value = l0_Nova_prim->nova_standard_primitive_number_Nova_Int_Nova_value;
	return this->nova_standard_primitive_number_Nova_Int_Nova_value * l1_Nova_value;
}

void nova_standard_primitive_number_Nova_Int_4_Nova_super(nova_standard_primitive_number_Nova_Int* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	this->nova_standard_primitive_number_Nova_Int_Nova_value = 0;
}
