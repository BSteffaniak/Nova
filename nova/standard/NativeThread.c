#include <precompiled.h>
#include "NativeThread.h"

void lib_nova_thread_create(NOVA_THREAD_HANDLE* handle, NOVA_THREAD_FUNC_TYPE func, NOVA_THREAD_FUNC_ARG arg)
{
#if defined(_WIN32)
	DWORD id;

	/*
	BDW-GC:
	LPSECURITY_ATTRIBUTES // lpThreadAttributes
	GC_WIN32_SIZE_T // dwStackSize
	LPTHREAD_START_ROUTINE // lpStartAddress
	LPVOID // lpParameter
	DWORD // dwCreationFlags
	LPDWORD // lpThreadId

	WIN32:
	_In_opt_   LPSECURITY_ATTRIBUTES lpThreadAttributes,
	_In_       SIZE_T dwStackSize,
	_In_       LPTHREAD_START_ROUTINE lpStartAddress,
	_In_opt_   LPVOID lpParameter,
	_In_       DWORD dwCreationFlags,
	_Out_opt_  LPDWORD lpThreadId
	*/

	*handle = (NOVA_THREAD_HANDLE*)new_thread_method(0, 0, *func, arg, 0, &id);
#elif DEFINED(__APPLE__, __linux__)
	new_thread_method(handle, NULL, func, arg);
#endif
}

#if DEFINED(__APPLE__, __linux__)

void thread_nanosleep2(struct timespec req);

void thread_nanosleep(long_long nanos)
{
	struct timespec req;

	req.tv_sec  = nanos / 1000000000;
	req.tv_nsec = nanos % 1000000000;

	thread_nanosleep2(req);
}

void thread_nanosleep2(struct timespec req)
{
	struct timespec rem;

	if (nanosleep(&req, &rem) < 0)
	{
		thread_nanosleep2(rem);
	}
}

#endif

NOVA_THREAD_FUNC lib_nova_thread_run(NOVA_THREAD_FUNC_ARG arg)
{
	DataStruct* data = (DataStruct*)arg;

	nova_standard_NovaThread* this = data->instance;
	nova_standard_exception_NovaExceptionData* exceptionData = 0;
	
	data->run_method(this, exceptionData);

	NOVA_FREE(data);

	return 0;
}

NOVA_THREAD_HANDLE* create_thread(nova_standard_NovaThread* this, run_method method, void* ref)
{
	NOVA_THREAD_HANDLE* handle;

	DataStruct* data = (DataStruct*)malloc(sizeof(DataStruct));

	data->instance   = ref;
	data->run_method = method;

	handle = (NOVA_THREAD_HANDLE*)malloc(sizeof(NOVA_THREAD_HANDLE));
	
	lib_nova_thread_create(handle, lib_nova_thread_run, (NOVA_THREAD_FUNC_ARG)data);

	return handle;
}
