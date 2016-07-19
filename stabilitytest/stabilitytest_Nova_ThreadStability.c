#include <precompiled.h>
#include <stabilitytest/stabilitytest_Nova_ThreadStability.h>

stabilitytest_Extension_VTable_ThreadStability stabilitytest_Extension_VTable_ThreadStability_val =
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
		0,
		0,
		0,
		0,
		0,
		0,
		(char(*)(nova_standard_operators_Nova_Equals*, nova_standard_exception_Nova_ExceptionData*, nova_standard_Nova_Object*))nova_standard_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_standard_Nova_Object_0_Nova_getHashCodeLong,
	nova_standard_Nova_Object_0_Nova_toString,
	nova_standard_Nova_Object_0_Nova_equals,
	stabilitytest_Nova_ThreadStability_0_Nova_test,
};



void stabilitytest_Nova_ThreadStability_Nova_createThreads(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ThreadImplementation** stabilitytest_Nova_ThreadStability_Nova_threads, int stabilitytest_Nova_ThreadStability_Nova_amount);
void stabilitytest_Nova_ThreadStability_Nova_checkMemoryAccess(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData);
void stabilitytest_Nova_ThreadStability_Nova_joinThreads(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ThreadImplementation** stabilitytest_Nova_ThreadStability_Nova_threads, int stabilitytest_Nova_ThreadStability_Nova_amount);
void stabilitytest_Nova_ThreadStabilityNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_Nova_ThreadStability* stabilitytest_Nova_ThreadStability_Nova_ThreadStability(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* stabilitytest_Nova_ThreadStability_Nova_program)
{
	CCLASS_NEW(stabilitytest_Nova_ThreadStability, this,);
	this->vtable = &stabilitytest_Extension_VTable_ThreadStability_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	stabilitytest_Nova_StabilityTestCase_Nova_super((stabilitytest_Nova_StabilityTestCase*)this, exceptionData);
	stabilitytest_Nova_ThreadStability_0_Nova_super(this, exceptionData);
	
	{
		stabilitytest_Nova_ThreadStability_0_Nova_this(this, exceptionData, stabilitytest_Nova_ThreadStability_Nova_program);
	}
	
	return this;
}

void stabilitytest_Nova_ThreadStability_Nova_destroy(stabilitytest_Nova_ThreadStability** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void stabilitytest_Nova_ThreadStability_0_Nova_this(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_StabilityTest* stabilitytest_Nova_ThreadStability_Nova_program)
{
	stabilitytest_Nova_StabilityTestCase_0_Nova_this((stabilitytest_Nova_StabilityTestCase*)(this), exceptionData, stabilitytest_Nova_ThreadStability_Nova_program);
}

void stabilitytest_Nova_ThreadStability_0_Nova_test(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	stabilitytest_Nova_ThreadImplementation** l1_Nova_threads = (stabilitytest_Nova_ThreadImplementation**)nova_null;
	
	nova_standard_io_Nova_Console_1_Nova_writeLine(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Checking Thread.nova with 20 Threads... "));
	l1_Nova_threads = (stabilitytest_Nova_ThreadImplementation**)NOVA_MALLOC(sizeof(stabilitytest_Nova_ThreadImplementation) * 20);
	stabilitytest_Nova_ThreadStability_Nova_createThreads(this, exceptionData, l1_Nova_threads, 20);
	stabilitytest_Nova_ThreadStability_Nova_checkMemoryAccess(0, exceptionData);
	stabilitytest_Nova_ThreadStability_Nova_joinThreads(0, exceptionData, l1_Nova_threads, 20);
}

void stabilitytest_Nova_ThreadStability_Nova_createThreads(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ThreadImplementation** stabilitytest_Nova_ThreadStability_Nova_threads, int stabilitytest_Nova_ThreadStability_Nova_amount)
{
	stabilitytest_Nova_StabilityExceptionHandler* l1_Nova_handler = (stabilitytest_Nova_StabilityExceptionHandler*)nova_null;
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l1_Nova_i = 0;
	
	l1_Nova_handler = stabilitytest_Nova_StabilityExceptionHandler_Nova_StabilityExceptionHandler(0, exceptionData, this->stabilitytest_Nova_StabilityTestCase_Nova_program);
	nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)stabilitytest_Nova_ThreadStability_Nova_amount), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l1_Nova_i = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		stabilitytest_Nova_ThreadStability_Nova_threads[l1_Nova_i] = stabilitytest_Nova_ThreadImplementation_Nova_ThreadImplementation(0, exceptionData, 10, 10);
		nova_standard_thread_Nova_Thread_Nova_start((nova_standard_thread_Nova_Thread*)(stabilitytest_Nova_ThreadStability_Nova_threads[l1_Nova_i]), exceptionData);
	}
}

void stabilitytest_Nova_ThreadStability_Nova_checkMemoryAccess(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l1_Nova_i = 0;
	
	nova_standard_thread_Nova_Thread_Nova_sleep(0, exceptionData, 30);
	nova_standard_io_Nova_Console_0_Nova_write(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Checking memory access with multi-threading... "));
	nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)1000), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		nova_standard_Nova_String* l1_Nova_s = (nova_standard_Nova_String*)nova_null;
		
		l1_Nova_i = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		l1_Nova_s = nova_standard_primitive_number_Nova_Int_2_Nova_toString(0, exceptionData, l1_Nova_i);
	}
	nova_standard_io_Nova_Console_1_Nova_writeLine(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "OK"));
}

void stabilitytest_Nova_ThreadStability_Nova_joinThreads(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData, stabilitytest_Nova_ThreadImplementation** stabilitytest_Nova_ThreadStability_Nova_threads, int stabilitytest_Nova_ThreadStability_Nova_amount)
{
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l1_Nova_i = 0;
	
	nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)stabilitytest_Nova_ThreadStability_Nova_amount), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		l1_Nova_i = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_standard_thread_Nova_Thread_Nova_join((nova_standard_thread_Nova_Thread*)(stabilitytest_Nova_ThreadStability_Nova_threads[l1_Nova_i]), exceptionData);
	}
}

void stabilitytest_Nova_ThreadStability_0_Nova_super(stabilitytest_Nova_ThreadStability* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

