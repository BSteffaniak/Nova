#include <precompiled.h>
#include <nova/standard/thread/nova_standard_thread_Nova_UncaughtExceptionHandler.h>


nova_standard_thread_Extension_VTable_UncaughtExceptionHandler nova_standard_thread_Extension_VTable_UncaughtExceptionHandler_val =
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


void nova_standard_thread_Nova_UncaughtExceptionHandlerNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

nova_standard_thread_Nova_UncaughtExceptionHandler* nova_standard_thread_Nova_UncaughtExceptionHandler_2_Nova_construct(nova_standard_thread_Nova_UncaughtExceptionHandler* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(nova_standard_thread_Nova_UncaughtExceptionHandler, this,);
	this->vtable = &nova_standard_thread_Extension_VTable_UncaughtExceptionHandler_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	nova_standard_Nova_Object_2_Nova_this((nova_standard_Nova_Object*)(this), exceptionData);
	nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_super(this, exceptionData);
	
	{
		nova_standard_thread_Nova_UncaughtExceptionHandler_2_Nova_this(this, exceptionData);
	}
	
	return this;
}

void nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_destroy(nova_standard_thread_Nova_UncaughtExceptionHandler** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_UncaughtExceptionHandler(nova_standard_thread_Nova_UncaughtExceptionHandler* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_uncaughtException(nova_standard_thread_Nova_UncaughtExceptionHandler* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_thread_Nova_Thread* l0_Nova_thread, nova_standard_exception_Nova_Exception* l0_Nova_exception)
{
}

void nova_standard_thread_Nova_UncaughtExceptionHandler_2_Nova_this(nova_standard_thread_Nova_UncaughtExceptionHandler* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void nova_standard_thread_Nova_UncaughtExceptionHandler_Nova_super(nova_standard_thread_Nova_UncaughtExceptionHandler* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}
