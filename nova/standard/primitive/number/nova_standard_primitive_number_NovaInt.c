#include <precompiled.h>
#include <nova/standard/primitive/number/nova_standard_primitive_number_NovaInt.h>


nova_VTable_nova_standard_primitive_number_NovaInt nova_VTable_nova_standard_primitive_number_NovaInt_val =
{
	nova_standard_primitive_number_NovaInt_NovagetHashCodeLong,
	nova_standard_primitive_number_NovaInt_Nova2_toString,
	nova_standard_NovaObject_Nova0_equals,
	nova_standard_primitive_number_NovaInt_static_Nova0_numDigits,
};
void nova_standard_primitive_number_NovaIntNova_init_static(nova_standard_exception_NovaExceptionData* exceptionData)
{
	{
	}
}

nova_standard_primitive_number_NovaInt* nova_standard_primitive_number_NovaInt_Novaconstruct(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novavalue)
{
	CCLASS_NEW(nova_standard_primitive_number_NovaInt, this,);
	this->vtable = &nova_VTable_nova_standard_primitive_number_NovaInt_val;
	nova_standard_NovaObject_Novasuper((nova_standard_NovaObject*)this, exceptionData);
	nova_standard_primitive_NovaPrimitive_Novasuper((nova_standard_primitive_NovaPrimitive*)this, exceptionData);
	nova_standard_primitive_number_NovaNumber_Novasuper((nova_standard_primitive_number_NovaNumber*)this, exceptionData);
	nova_standard_NovaObject_Novathis((nova_standard_NovaObject*)(this), exceptionData);
	nova_standard_primitive_NovaPrimitive_Novathis((nova_standard_primitive_NovaPrimitive*)(this), exceptionData);
	nova_standard_primitive_number_NovaNumber_Novathis((nova_standard_primitive_number_NovaNumber*)(this), exceptionData);
	nova_standard_primitive_number_NovaInt_Novasuper(this, exceptionData);
	
	{
		nova_standard_primitive_number_NovaInt_Novathis(this, exceptionData, l0_Novavalue);
	}
	
	return this;
}

void nova_del_Int(nova_standard_primitive_number_NovaInt** this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	{
	}
	NOVA_FREE(*this);
}

void nova_standard_primitive_number_NovaInt_Novathis(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novavalue)
{
	this->nova_standard_primitive_number_NovaInt_Novavalue = l0_Novavalue;
}

long nova_standard_primitive_number_NovaInt_NovagetHashCodeLong(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	return this->nova_standard_primitive_number_NovaInt_Novavalue;
}

int nova_standard_primitive_number_NovaInt_static_Nova0_numDigits(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novanumber)
{
	return nova_standard_primitive_number_NovaLong_static_Nova0_numDigits(0, exceptionData, (long)(l0_Novanumber));
}

nova_standard_NovaString* nova_standard_primitive_number_NovaInt_static_Nova1_toString(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData, int l0_Novavalue)
{
	return nova_standard_primitive_number_NovaLong_static_Nova1_toString(0, exceptionData, (long)(l0_Novavalue));
}

nova_standard_NovaString* nova_standard_primitive_number_NovaInt_Nova2_toString(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	return nova_standard_primitive_number_NovaInt_static_Nova1_toString(this, exceptionData, this->nova_standard_primitive_number_NovaInt_Novavalue);
}

int nova_standard_primitive_number_NovaInt_static_NovaparseInt(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData, nova_standard_NovaString* l0_Novanum)
{
	return atoi((char*)(nova_standard_NovaString_NovatoCharArray(l0_Novanum, exceptionData)));
}

void nova_standard_primitive_number_NovaInt_Novasuper(nova_standard_primitive_number_NovaInt* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	this->nova_standard_primitive_number_NovaInt_Novavalue = 0;
}
