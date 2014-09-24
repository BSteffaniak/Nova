#include <precompiled.h>
#include "NovaLong.h"


nova_VTable_Long nova_VTable_Long_val =
{
	nova_3_Long_toString,
	nova_0_Object_equals,
	nova_static_0_Number_numDigits,
	nova_static_1_Number_toString,
};

Long* nova_Long_construct(Long* this, ExceptionData* exceptionData, long_long nova_0_value)
{
	CCLASS_NEW(Long, this,);
	this->vtable = &nova_VTable_Long_val;
	nova_Object_super((Object*)this, 0);
	nova_Number_super((Number*)this, 0);
	nova_Object_this((Object*)(this), exceptionData);
	nova_Number_this((Number*)(this), exceptionData);
	nova_Long_super(this, 0);
	
	{
		nova_Long_this(this, exceptionData, nova_0_value);
	}
	
	return this;
}

void nova_del_Long(Long** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	
	{
	}
	NOVA_FREE(*this);
}

void nova_Long_this(Long* this, ExceptionData* exceptionData, long_long nova_0_value)
{
	this->nova_Long_value = nova_0_value;
}

int nova_static_Long_numDigits(Long* this, ExceptionData* exceptionData, long_long nova_0_number)
{
	int nova_1_size;
	
	if (nova_0_number < 0)
	{
		return nova_static_Long_numDigits((Long*)nova_null, exceptionData, -nova_0_number) + 1;
	}
	nova_0_number = nova_0_number / 10;
	nova_1_size = 1;
	for (; nova_0_number > 0; nova_1_size++)
	{
		nova_0_number = nova_0_number / 10;
	}
	return nova_1_size;
}

String* nova_static_2_Long_toString(Long* this, ExceptionData* exceptionData, long_long nova_0_value)
{
	int nova_1_charOffset;
	int nova_1_digits;
	char* nova_1_data;
	int nova_1_offset;
	int nova_1_nums;
	int nova_3_index;
	
	nova_1_charOffset = (int)('0');
	nova_1_digits = nova_static_Long_numDigits((Long*)nova_null, exceptionData, nova_0_value);
	nova_1_data = (char*)NOVA_MALLOC(sizeof(char) * (nova_1_digits + 1));
	nova_1_data[nova_1_digits] = '\0';
	nova_1_offset = 0;
	if (nova_0_value < 0)
	{
		nova_1_data[0] = '-';
		nova_0_value = -nova_0_value;
		nova_1_offset = 1;
	}
	nova_1_nums = nova_1_digits-- - nova_1_offset;
	nova_3_index = 0;
	for (; nova_3_index < nova_1_nums; nova_3_index++)
	{
		nova_1_data[nova_1_digits - nova_3_index] = (char)(nova_1_charOffset + nova_0_value % 10);
		nova_0_value = nova_0_value / 10;
	}
	return nova_String_construct(0, exceptionData, nova_1_data);
}

String* nova_3_Long_toString(Long* this, ExceptionData* exceptionData)
{
	return nova_static_2_Long_toString(this, exceptionData, this->nova_Long_value);
}

void nova_Long_super(Long* this, ExceptionData* exceptionData)
{
	this->nova_Long_value = 0;
}
