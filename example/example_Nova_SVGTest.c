#include <precompiled.h>
#include <example/example_Nova_SVGTest.h>

example_Extension_VTable_SVGTest example_Extension_VTable_SVGTest_val =
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
};


void example_Nova_SVGTestNova_init_static(nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	{
	}
}

example_Nova_SVGTest* example_Nova_SVGTest_Nova_SVGTest(example_Nova_SVGTest* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	CCLASS_NEW(example_Nova_SVGTest, this,);
	this->vtable = &example_Extension_VTable_SVGTest_val;
	nova_standard_Nova_Object_Nova_super((nova_standard_Nova_Object*)this, exceptionData);
	example_Nova_SVGTest_Nova_super(this, exceptionData);
	
	{
		example_Nova_SVGTest_0_Nova_this(this, exceptionData);
	}
	
	return this;
}

void example_Nova_SVGTest_Nova_destroy(example_Nova_SVGTest** this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
	if (!*this)
	{
		return;
	}
	
	
	NOVA_FREE(*this);
}

void example_Nova_SVGTest_Nova_main(example_Nova_SVGTest* this, nova_standard_exception_Nova_ExceptionData* exceptionData, nova_standard_Nova_String** example_Nova_SVGTest_Nova_args)
{
	nova_standard_svg_Nova_SVG* l1_Nova_s = (nova_standard_svg_Nova_SVG*)nova_null;
	double l1_Nova_pi2 = 0;
	int l1_Nova_numVerts = 0;
	double l1_Nova_coefficient = 0;
	int l1_Nova_numPoints = 0;
	nova_standard_time_Nova_Timer* l1_Nova_timer = (nova_standard_time_Nova_Timer*)nova_null;
	double* l1_Nova_points = (double*)nova_null;
	double l1_Nova_radius = 0;
	double l1_Nova_offset = 0;
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l1_Nova_i = 0;
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_1 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l4_Nova_n = 0;
	double l1_Nova_cx = 0;
	double l1_Nova_cy = 0;
	nova_standard_datastruct_list_Nova_IntRangeIterator* nova_local_2 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)nova_null;
	int l5_Nova_p = 0;
	nova_standard_io_Nova_File* l1_Nova_f = (nova_standard_io_Nova_File*)nova_null;
	
	l1_Nova_s = nova_standard_svg_Nova_SVG_Nova_SVG(0, exceptionData);
	l1_Nova_pi2 = (double)(nova_standard_math_Nova_Math_Nova_PI * 2);
	nova_standard_io_Nova_Console_0_Nova_write(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Enter the number of vertices: "));
	l1_Nova_numVerts = nova_standard_io_Nova_Console_Nova_readInt(0, exceptionData);
	nova_standard_io_Nova_Console_0_Nova_write(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Enter the coefficient: "));
	l1_Nova_coefficient = nova_standard_io_Nova_Console_Nova_readDouble(0, exceptionData);
	nova_standard_io_Nova_Console_0_Nova_write(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Enter the number of points: "));
	l1_Nova_numPoints = nova_standard_io_Nova_Console_Nova_readInt(0, exceptionData);
	l1_Nova_timer = nova_standard_time_Nova_Timer_Nova_start(nova_standard_time_Nova_Timer_Nova_Timer(0, exceptionData), exceptionData);
	l1_Nova_points = (double*)NOVA_MALLOC(sizeof(nova_standard_primitive_number_Nova_Double) * l1_Nova_numVerts * 2);
	l1_Nova_radius = (double)(450);
	l1_Nova_offset = l1_Nova_pi2 / 12;
	nova_local_0 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)l1_Nova_numVerts), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData))
	{
		double l1_Nova_rad = 0;
		float nova_zero_check5 = 0;
		
		l1_Nova_i = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_0), exceptionData));
		nova_zero_check5 = (l1_Nova_numVerts * 1.0);
		if (nova_zero_check5 == 0)
		{
			THROW(8, nova_standard_exception_Nova_DivideByZeroException_Nova_DivideByZeroException(0, exceptionData));
		}
		l1_Nova_rad = l1_Nova_pi2 * (l1_Nova_i / nova_zero_check5) + l1_Nova_offset;
		l1_Nova_points[l1_Nova_i * 2 + 0] = l1_Nova_radius * nova_standard_math_Nova_Math_Nova_cos(0, exceptionData, l1_Nova_rad) + l1_Nova_radius + 10;
		l1_Nova_points[l1_Nova_i * 2 + 1] = l1_Nova_radius * nova_standard_math_Nova_Math_Nova_sin(0, exceptionData, l1_Nova_rad) + l1_Nova_radius + 10;
	}
	nova_local_1 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)l1_Nova_numVerts), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData))
	{
		double l4_Nova_x = 0;
		double l4_Nova_y = 0;
		nova_standard_svg_Nova_SVGCircle* l4_Nova_circle2 = (nova_standard_svg_Nova_SVGCircle*)nova_null;
		
		l4_Nova_n = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_1), exceptionData));
		l4_Nova_x = l1_Nova_points[l4_Nova_n * 2 + 0];
		l4_Nova_y = l1_Nova_points[l4_Nova_n * 2 + 1];
		l4_Nova_circle2 = nova_standard_svg_Nova_SVGCircle_Nova_SVGCircle(0, exceptionData, l4_Nova_x, l4_Nova_y, 3);
		nova_standard_svg_Nova_SVGComponentList_Nova_addChild(l1_Nova_s->nova_standard_svg_Nova_SVG_Nova_root->nova_standard_svg_Nova_SVGComponent_Nova_children, exceptionData, (nova_standard_svg_Nova_SVGComponent*)(l4_Nova_circle2));
	}
	l1_Nova_cx = l1_Nova_radius + 10;
	l1_Nova_cy = l1_Nova_radius + 10;
	nova_local_2 = (nova_standard_datastruct_list_Nova_IntRangeIterator*)(nova_standard_datastruct_list_Nova_IntRange_Accessor_Nova_iterator(nova_standard_datastruct_list_Nova_IntRange_1_Nova_IntRange(0, exceptionData, (int)0, (int)l1_Nova_numPoints), exceptionData));
	while (nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_hasNext((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_2), exceptionData))
	{
		int l5_Nova_rand = 0;
		double l5_Nova_x = 0;
		double l5_Nova_y = 0;
		
		l5_Nova_p = (int)(nova_standard_datastruct_list_Nova_Iterator_virtual_Accessor_Nova_next((nova_standard_datastruct_list_Nova_Iterator*)(nova_local_2), exceptionData));
		l5_Nova_rand = nova_standard_math_Nova_Math_Nova_random(0, exceptionData, l1_Nova_numVerts);
		l5_Nova_x = l1_Nova_points[l5_Nova_rand * 2 + 0];
		l5_Nova_y = l1_Nova_points[l5_Nova_rand * 2 + 1];
		l1_Nova_cx = l1_Nova_cx - (l1_Nova_cx - l5_Nova_x) * l1_Nova_coefficient;
		l1_Nova_cy = l1_Nova_cy - (l1_Nova_cy - l5_Nova_y) * l1_Nova_coefficient;
		if (l5_Nova_p > 15)
		{
			nova_standard_svg_Nova_SVGCircle* l6_Nova_circle = (nova_standard_svg_Nova_SVGCircle*)nova_null;
			
			if ((l5_Nova_p + 1) % 1000 == 0)
			{
				nova_standard_io_Nova_Console_2_Nova_writeLine(0, exceptionData, (nova_standard_Nova_Object*)(nova_standard_primitive_number_Nova_Int_Nova_Int(0, exceptionData, l5_Nova_p + 1)));
			}
			l6_Nova_circle = nova_standard_svg_Nova_SVGCircle_Nova_SVGCircle(0, exceptionData, l1_Nova_cx, l1_Nova_cy, 1);
			nova_standard_svg_Nova_SVGComponentList_Nova_addChild(l1_Nova_s->nova_standard_svg_Nova_SVG_Nova_root->nova_standard_svg_Nova_SVGComponent_Nova_children, exceptionData, (nova_standard_svg_Nova_SVGComponent*)(l6_Nova_circle));
		}
	}
	l1_Nova_f = nova_standard_io_Nova_File_0_Nova_File(0, exceptionData, nova_standard_Nova_String_1_Nova_String(0, exceptionData, "C:/Users/Braden Steffaniak/svgoutput.html"));
	nova_standard_io_Nova_File_Nova_create(l1_Nova_f, exceptionData);
	nova_standard_io_Nova_File_Nova_clearContents(l1_Nova_f, exceptionData);
	nova_standard_svg_Nova_SVG_Nova_generateHTMLOutput(l1_Nova_s, exceptionData, l1_Nova_f);
	nova_standard_time_Nova_Timer_Nova_stop(l1_Nova_timer, exceptionData);
	nova_standard_io_Nova_Console_0_Nova_write(0, exceptionData, nova_standard_Nova_String_0_Nova_concat(nova_standard_Nova_String_1_Nova_String(0, exceptionData, "Done generating "), exceptionData, nova_standard_primitive_number_Nova_Long_2_Nova_toString(0, exceptionData, nova_standard_time_Nova_Timer_Accessor_Nova_duration(l1_Nova_timer, exceptionData))));
	nova_standard_io_Nova_Console_Nova_waitForEnter(0, exceptionData);
}

void example_Nova_SVGTest_0_Nova_this(example_Nova_SVGTest* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

void example_Nova_SVGTest_Nova_super(example_Nova_SVGTest* this, nova_standard_exception_Nova_ExceptionData* exceptionData)
{
}

