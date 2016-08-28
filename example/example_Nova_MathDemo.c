#include <precompiled.h>
#include <example/example_Nova_MathDemo.h>



example_Extension_VTable_MathDemo example_Extension_VTable_MathDemo_val =
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
		0,
		(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
		0,
		0,
		0,
	},
	nova_Nova_Object_0_Nova_toString,
	nova_Nova_Object_0_Nova_equals,
	nova_Nova_Object_Accessor_Nova_hashCodeLong,
};


void example_Nova_MathDemo_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_MathDemo* example_Nova_MathDemo_Nova_MathDemo(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_MathDemo, this,);
	this->vtable = &example_Extension_VTable_MathDemo_val;
	nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
	example_Nova_MathDemo_Nova_super(this, exceptionData);
	
	{
		example_Nova_MathDemo_0_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_MathDemo_Nova_destroy(example_Nova_MathDemo** this, nova_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_MathDemo_Nova_main(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* example_Nova_MathDemo_Nova_args)
{
	int l1_Nova_iterations = 0;
	nova_time_Nova_Timer* l1_Nova_timer = (nova_time_Nova_Timer*)nova_null;
	int l2_Nova_i = 0;
	
	nova_io_Nova_Console_1_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_String(0, exceptionData, (char*)("Beginning benchmark...")));
	l1_Nova_iterations = 999999;
	l1_Nova_timer = nova_time_Nova_Timer_Nova_start(nova_time_Nova_Timer_Nova_Timer(0, exceptionData), exceptionData);
	l2_Nova_i = (int)0;
	for (; l2_Nova_i < (int)l1_Nova_iterations; l2_Nova_i++)
	{
		TRY
		{
			novaEnv.nova_exception_ExceptionData.addCode(exceptionData, exceptionData, 1);
			
			{
				nova_math_Nova_Math_Nova_sin(0, exceptionData, l2_Nova_i);
			}
		}
		CATCH (1)
		{
			nova_exception_Nova_Exception* l4_Nova_e = (nova_exception_Nova_Exception*)nova_null;
			
			l4_Nova_e = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
		}
		FINALLY
		{
		}
		END_TRY;
	}
	nova_time_Nova_Timer_Nova_stop(0, exceptionData);
	nova_io_Nova_Console_1_Nova_writeLine(0, exceptionData, nova_Nova_String_virtual1_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Int_2_Nova_toString(0, exceptionData, l1_Nova_iterations)), exceptionData, nova_Nova_String_0_Nova_concat(nova_Nova_String_1_Nova_String(0, exceptionData, (char*)(" iterations of Math.sin() in ")), exceptionData, nova_Nova_String_virtual1_Nova_concat((nova_Nova_String*)(nova_primitive_number_Nova_Long_2_Nova_toString(0, exceptionData, nova_time_Nova_Timer_Accessor_Nova_duration(l1_Nova_timer, exceptionData))), exceptionData, nova_Nova_String_1_Nova_String(0, exceptionData, (char*)("ms"))))));
	nova_io_Nova_Console_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_MathDemo_0_Nova_this(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_MathDemo_Nova_super(example_Nova_MathDemo* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

