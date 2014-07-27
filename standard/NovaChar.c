#include <precompiled.h>
#include "NovaChar.h"


nova_VTable_Char nova_VTable_Char_val =
{
	nova_1_Char_toString,
	nova_2_Char_toString,
	nova_static_2_Number_numDigits,
	nova_static_3_Number_toString,
};

Char* nova_Char_Char(ExceptionData* exceptionData, char nova_0_value)
{
	CCLASS_NEW(Char, this,);
	
	this->nova_Char_value = 0;
	this->vtable = &nova_VTable_Char_val;
	{
		this->nova_Char_value = nova_0_value;
	}
	
	return this;
}

void nova_del_Char(Char** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	NOVA_FREE(*this);
}

String* nova_1_Char_toString(Char* this, ExceptionData* exceptionData, char nova_0_c)
{
	char* nova_1_chars;
	
	nova_1_chars = (char*)NOVA_MALLOC(sizeof(char) * (1));
	nova_1_chars[0] = nova_0_c;
	return nova_String_String(exceptionData, nova_1_chars);
}

String* nova_2_Char_toString(Char* this, ExceptionData* exceptionData)
{
	return this->vtable->nova_virtual_1_toString(this, exceptionData, this->nova_Char_value);
}
