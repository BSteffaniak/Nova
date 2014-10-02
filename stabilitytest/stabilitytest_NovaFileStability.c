#include <precompiled.h>
#include <stabilitytest/stabilitytest_NovaFileStability.h>


nova_VTable_stabilitytest_NovaFileStability nova_VTable_stabilitytest_NovaFileStability_val =
{
	nova_standard_NovaObject_Nova0_toString,
	nova_standard_NovaObject_Nova0_equals,
};

void stabilitytest_NovaFileStability_static_NovacreateFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf);
void stabilitytest_NovaFileStability_static_NovawriteToFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf);
void stabilitytest_NovaFileStability_static_NovareadFromFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf);
void stabilitytest_NovaFileStability_static_NovadeleteFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf);
nova_standard_NovaString* stabilitytest_NovaFileStability_static_NovainputString;
int stabilitytest_NovaFileStability_static_Novalines;
void stabilitytest_NovaFileStabilityNova_init_static(nova_standard_exception_NovaExceptionData* exceptionData)
{
	{
	}
}

stabilitytest_NovaFileStability* stabilitytest_NovaFileStability_Nova0_construct(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	CCLASS_NEW(stabilitytest_NovaFileStability, this,);
	this->vtable = &nova_VTable_stabilitytest_NovaFileStability_val;
	nova_standard_NovaObject_Novasuper((nova_standard_NovaObject*)this, 0);
	nova_standard_NovaObject_Novathis((nova_standard_NovaObject*)(this), exceptionData);
	stabilitytest_NovaFileStability_Novasuper(this, 0);
	
	{
		stabilitytest_NovaFileStability_Novathis(this, exceptionData);
	}
	
	return this;
}

void nova_del_FileStability(stabilitytest_NovaFileStability** this, nova_standard_exception_NovaExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	{
	}
	NOVA_FREE(*this);
}

void stabilitytest_NovaFileStability_static_Novatest(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram)
{
	nova_standard_io_NovaConsole_static_Nova0_writeLine(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Checking File IO..."));
	stabilitytest_NovaFileStability_static_NovainputString = nova_standard_NovaString_Novaconstruct(0, exceptionData, "This is test input...");
	stabilitytest_NovaFileStability_static_Novalines = 100;
	TRY
	{
		nova_standard_exception_NovaExceptionData_NovaaddCode(exceptionData, exceptionData, 1);
		
		{
			nova_standard_io_NovaFile* l2_Novaf;
			
			l2_Novaf = nova_standard_io_NovaFile_Nova1_construct(0, exceptionData, nova_standard_NovaString_Nova0_concat(nova_standard_NovaString_Novaconstruct(0, exceptionData, "temp"), exceptionData, nova_standard_primitive_number_NovaLong_Nova3_toString(nova_standard_primitive_number_NovaLong_Novaconstruct(0, exceptionData, nova_standard_time_NovaTime_static_NovacurrentTimeMillis(0, exceptionData)), exceptionData)));
			stabilitytest_NovaFileStability_static_NovacreateFile((stabilitytest_NovaFileStability*)nova_null, exceptionData, l0_Novaprogram, l2_Novaf);
			stabilitytest_NovaFileStability_static_NovawriteToFile((stabilitytest_NovaFileStability*)nova_null, exceptionData, l0_Novaprogram, l2_Novaf);
			stabilitytest_NovaFileStability_static_NovareadFromFile((stabilitytest_NovaFileStability*)nova_null, exceptionData, l0_Novaprogram, l2_Novaf);
			stabilitytest_NovaFileStability_static_NovadeleteFile((stabilitytest_NovaFileStability*)nova_null, exceptionData, l0_Novaprogram, l2_Novaf);
		}
	}
	CATCH (1)
	{
		nova_standard_exception_NovaException* l3_Novae;
		
		l3_Novae = exceptionData->nova_standard_exception_NovaExceptionData_NovathrownException;
		stabilitytest_NovaStabilityTest_Nova1_fail(l0_Novaprogram, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Failed; Exception thrown"));
	}
	FINALLY
	{
	}
	END_TRY;
}

void stabilitytest_NovaFileStability_static_NovacreateFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf)
{
	nova_standard_io_NovaConsole_static_Nova0_write(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Creating file... "));
	if (!nova_standard_io_NovaFile_Novacreate(l0_Novaf, exceptionData))
	{
		stabilitytest_NovaStabilityTest_Nova0_fail(l0_Novaprogram, exceptionData);
	}
	nova_standard_io_NovaConsole_static_Nova0_writeLine(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "OK"));
}

void stabilitytest_NovaFileStability_static_NovawriteToFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf)
{
	nova_standard_NovaString* nova_local_0;
	int l2_Novai;
	
	nova_local_0 = nova_standard_primitive_number_NovaInt_Nova2_toString(nova_standard_primitive_number_NovaInt_Novaconstruct(0, exceptionData, stabilitytest_NovaFileStability_static_Novalines), exceptionData);
	nova_standard_io_NovaConsole_static_Nova0_write(0, exceptionData, nova_standard_NovaString_Nova0_concat(nova_standard_NovaString_Novaconstruct(0, exceptionData, "Writing "), exceptionData, nova_local_0->vtable->nova_standard_NovaString_Novavirtual0_concat(nova_local_0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, " lines of data to file... "))));
	l2_Novai = 0;
	for (; l2_Novai < stabilitytest_NovaFileStability_static_Novalines; l2_Novai++)
	{
		nova_standard_io_NovaFile_NovawriteLine(l0_Novaf, exceptionData, stabilitytest_NovaFileStability_static_NovainputString);
	}
	nova_standard_io_NovaConsole_static_Nova0_writeLine(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "OK"));
}

void stabilitytest_NovaFileStability_static_NovareadFromFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf)
{
	int l1_Novatimes;
	nova_standard_NovaString* l1_Novaline;
	
	nova_standard_io_NovaConsole_static_Nova0_write(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Reading lines from file... "));
	nova_standard_io_NovaFile_Novareopen(l0_Novaf, exceptionData);
	l1_Novatimes = 0;
	l1_Novaline = nova_standard_io_NovaFile_NovareadLine(l0_Novaf, exceptionData);
	while (l1_Novaline != (nova_standard_NovaString*)nova_null)
	{
		if (!l1_Novaline->vtable->nova_standard_NovaString_Novavirtual0_equals(l1_Novaline, exceptionData, stabilitytest_NovaFileStability_static_NovainputString))
		{
			stabilitytest_NovaStabilityTest_Nova0_fail(l0_Novaprogram, exceptionData);
		}
		l1_Novaline = nova_standard_io_NovaFile_NovareadLine(l0_Novaf, exceptionData);
		l1_Novatimes++;
	}
	if (l1_Novatimes != stabilitytest_NovaFileStability_static_Novalines)
	{
		nova_standard_NovaString* nova_local_0;
		nova_standard_NovaString* nova_local_1;
		
		nova_local_0 = nova_standard_primitive_number_NovaInt_Nova2_toString(nova_standard_primitive_number_NovaInt_Novaconstruct(0, exceptionData, l1_Novatimes), exceptionData);
		nova_local_1 = nova_standard_primitive_number_NovaInt_Nova2_toString(nova_standard_primitive_number_NovaInt_Novaconstruct(0, exceptionData, 100), exceptionData);
		stabilitytest_NovaStabilityTest_Nova1_fail(l0_Novaprogram, exceptionData, nova_standard_NovaString_Nova0_concat(nova_standard_NovaString_Novaconstruct(0, exceptionData, "Failed; only read "), exceptionData, nova_local_0->vtable->nova_standard_NovaString_Novavirtual0_concat(nova_local_0, exceptionData, nova_standard_NovaString_Nova0_concat(nova_standard_NovaString_Novaconstruct(0, exceptionData, "/"), exceptionData, nova_local_1->vtable->nova_standard_NovaString_Novavirtual0_concat(nova_local_1, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, " lines"))))));
	}
	nova_standard_io_NovaConsole_static_Nova0_writeLine(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "OK"));
}

void stabilitytest_NovaFileStability_static_NovadeleteFile(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData, stabilitytest_NovaStabilityTest* l0_Novaprogram, nova_standard_io_NovaFile* l0_Novaf)
{
	nova_standard_io_NovaConsole_static_Nova0_write(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Deleting file... "));
	if (!nova_standard_io_NovaFile_Novadelete(l0_Novaf, exceptionData))
	{
		stabilitytest_NovaStabilityTest_Nova1_fail(l0_Novaprogram, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "Failed to delete file"));
	}
	nova_standard_io_NovaConsole_static_Nova0_writeLine(0, exceptionData, nova_standard_NovaString_Novaconstruct(0, exceptionData, "OK"));
}

void stabilitytest_NovaFileStability_Novathis(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
}

void stabilitytest_NovaFileStability_Novasuper(stabilitytest_NovaFileStability* this, nova_standard_exception_NovaExceptionData* exceptionData)
{
}
