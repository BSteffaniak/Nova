#include "Thread.h"

void lib_fathom_thread_create(FATHOM_THREAD_HANDLE* handle, FATHOM_THREAD_FUNC_TYPE func, FATHOM_THREAD_FUNC_ARG arg)
{
#if defined(_WIN32)
	DWORD id;
	
	*handle = CreateThread(NULL, 0, *func, arg, 0, &id);
#elif defined(__APPLE__)
	pthread_create(handle, NULL, func, arg);
#endif
}