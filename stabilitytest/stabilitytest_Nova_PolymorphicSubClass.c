#include <precompiled.h>
#include <stabilitytest/stabilitytest_Nova_PolymorphicSubClass.h>


stabilitytest_Extension_VTable_PolymorphicSubClass stabilitytest_Extension_VTable_PolymorphicSubClass_val =
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
	stabilitytest_Nova_PolymorphicSubClass_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
};


void stabilitytest_Nova_PolymorphicSubClassNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_PolymorphicSubClass* stabilitytest_Nova_PolymorphicSubClass_2_Nova_construct(stabilitytest_Nova_PolymorphicSubClass* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_Nova_PolymorphicSubClass, this,);
	this->vtable = &stabilitytest_Extension_VTable_PolymorphicSubClass_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_PolymorphicSuperClass_Nova_super((stabilitytest_Nova_PolymorphicSuperClass*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	stabilitytest_Nova_PolymorphicSuperClass_2_Nova_this((stabilitytest_Nova_PolymorphicSuperClass*)(this), exceptionData);
	stabilitytest_Nova_PolymorphicSubClass_2_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_PolymorphicSubClass_2_Nova_this(this, exceptionData);
	}
	
	return this;
}

void stabilitytest_Nova_PolymorphicSubClass_Nova_destroy(stabilitytest_Nova_PolymorphicSubClass** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

nova_standard_Nova_String* stabilitytest_Nova_PolymorphicSubClass_0_Nova_toString(stabilitytest_Nova_PolymorphicSubClass* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	return nova_standard_Nova_String_1_Nova_construct(0, exceptionData, "sub class");
}

void stabilitytest_Nova_PolymorphicSubClass_2_Nova_this(stabilitytest_Nova_PolymorphicSubClass* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void stabilitytest_Nova_PolymorphicSubClass_2_Nova_super(stabilitytest_Nova_PolymorphicSubClass* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}
