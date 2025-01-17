#include <gui/screen4_screen/Screen4View.hpp>
#include <stdlib.h>
#include <string.h>
Screen4View::Screen4View()
{

}

void Screen4View::setupScreen()
{
    Screen4ViewBase::setupScreen();
}

void Screen4View::tearDownScreen()
{
    Screen4ViewBase::tearDownScreen();
}


void Screen4View::clicked_one()
{
	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '1';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '1';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_two()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '2';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '2';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}




}

void Screen4View::clicked_three()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '3';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '3';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_four()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '4';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '4';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_five()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '5';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '5';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_six()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '6';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '6';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_seven()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '7';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '7';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_eight()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '8';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '8';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_nine()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '9';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '9';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_zero()
{

	if(value == 0)
	{

	text_buffer1[i_text_buffer1] = '0';
	value1 = atoi(text_buffer1);
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
	calculation_text_area.invalidate();
	i_text_buffer1++;
	}
	else if (value == 1)
	{

	text_buffer2[i_text_buffer2] = '0';
	value2 = atoi(text_buffer2);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	calculation_text_area_2.invalidate();
	i_text_buffer2++;
	}



}

void Screen4View::clicked_add()
{
	value = 1;
	add_v = 1;
	sign = '+';
	Unicode::snprintf(sign_text_areaBuffer, SIGN_TEXT_AREA_SIZE, "%c", sign);
	sign_text_area.invalidate();
}

void Screen4View::clicked_sub()
{
	value = 1;
	sub = 1;

	sign = '-';
	Unicode::snprintf(sign_text_areaBuffer, SIGN_TEXT_AREA_SIZE, "%c", sign);
	sign_text_area.invalidate();
}

void Screen4View::clicked_div()
{
	value = 1;
	div = 1;

	sign = ':';
	Unicode::snprintf(sign_text_areaBuffer, SIGN_TEXT_AREA_SIZE, "%c", sign);
	sign_text_area.invalidate();
}

void Screen4View::clicked_mul()
{
	value = 1;
	mul = 1;

	sign = 'x';
	Unicode::snprintf(sign_text_areaBuffer, SIGN_TEXT_AREA_SIZE, "%c", sign);
	sign_text_area.invalidate();

}

void Screen4View::clicked_eq()
{
	if(add_v==1&&value==1)
	{
		result = value1 + value2;
	}
	else if (sub == 1 && value == 1)
	{
		result = value1 - value2;
	}
	else if (div == 1 && value == 1)
	{
		result = value1 / value2;
	}
	else if (mul == 1 && value == 1)
	{
		result = value1 * value2;
	}

	Unicode::snprintf(result_text_areaBuffer, RESULT_TEXT_AREA_SIZE, "%d",result);
	result_text_area.invalidate();


}


void Screen4View::clicked_clear()
{
	value = 0;
	add_v = 0;
	sub = 0;
	mul = 0;
	div = 0;
	i_text_buffer1 = 0;
	i_text_buffer2 = 0;
	value1 = 0;
	value2 = 0;
	result = 0;
	sign = ' ';
	memset(text_buffer1, 0, sizeof(text_buffer1));
	memset(text_buffer2, 0, sizeof(text_buffer2));
	Unicode::snprintf(calculation_text_areaBuffer, CALCULATION_TEXT_AREA_SIZE, "%d", value1);
    Unicode::snprintf(calculation_text_area_2Buffer, CALCULATION_TEXT_AREA_2_SIZE, "%d", value2);
	Unicode::snprintf(result_text_areaBuffer, RESULT_TEXT_AREA_SIZE, "%d",result);
	Unicode::snprintf(sign_text_areaBuffer, SIGN_TEXT_AREA_SIZE, "%c", sign);
	sign_text_area.invalidate();
	calculation_text_area.invalidate();
	calculation_text_area_2.invalidate();
	result_text_area.invalidate();


}
