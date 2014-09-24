#include <precompiled.h>
#include "NovaThread.h"

typedef void (*nova_1_0_run)(void*, ExceptionData*);

nova_VTable_Thread nova_VTable_Thread_val =
{
	nova_0_Object_toString,
	nova_0_Object_equals,
};
CCLASS_PRIVATE
(
	NOVA_THREAD_HANDLE* nova_Thread_handle;
	
)

void nova_Thread_startRun(Thread* this, ExceptionData* exceptionData);

Thread* nova_0_Thread_construct(Thread* this, ExceptionData* exceptionData)
{
	CCLASS_NEW(Thread, this);
	this->vtable = &nova_VTable_Thread_val;
	nova_Object_super((Object*)this, 0);
	nova_Object_this((Object*)(this), exceptionData);
	nova_Thread_super(this, 0);
	
	{
		nova_Thread_this(this, exceptionData);
	}
	
	return this;
}

void nova_del_Thread(Thread** this, ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE((*this)->prv);
	
	{
	}
	NOVA_FREE(*this);
}

void nova_Thread_start(Thread* this, ExceptionData* exceptionData)
{
	this->prv->nova_Thread_handle = create_thread(this, (nova_1_0_run)&nova_Thread_startRun, this);
}

void nova_Thread_join(Thread* this, ExceptionData* exceptionData)
{
	lib_nova_thread_join(*this->prv->nova_Thread_handle);
}

void nova_static_Thread_sleep(Thread* this, ExceptionData* exceptionData, long_long nova_0_millis)
{
	lib_nova_thread_sleep(nova_0_millis);
}

void nova_Thread_run(Thread* this, ExceptionData* exceptionData)
{
}

void nova_Thread_startRun(Thread* this, ExceptionData* exceptionData)
{
	TRY
	{
		nova_ExceptionData_addCode(exceptionData, exceptionData, 1);
		
		{
			nova_Thread_run(this, exceptionData);
		}
	}
	CATCH (1)
	{
		nova_static_0_Console_writeLine(0, exceptionData, nova_String_construct(0, exceptionData, "An error has occurred..."));
	}
	FINALLY
	{
	}
	END_TRY;
}

void nova_Thread_this(Thread* this, ExceptionData* exceptionData)
{
}

void nova_Thread_super(Thread* this, ExceptionData* exceptionData)
{
	this->prv->nova_Thread_handle = (NOVA_THREAD_HANDLE*)nova_null;
}
