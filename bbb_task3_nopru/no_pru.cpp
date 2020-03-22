////////////////////////////////////////////////////////////////////////////////
// 	Source File	:	no_pru_main.c
//	Author			: Daniel Wolf
//  Date				: 22 Mar 2020
//	Version			: 1
//
//	Description	: Toggler pin P8-45 som aftastet af P9-31
//	DoxyUsage		: @ brief
//								"@tparam for template arguments"
//								"@arg for function arguments"
//								"@return for return values"
//								"@brief for intro/description"
//								"@details for highlighting details"
///////////////////////////////////////80///////////////////////////////////////

#include<iostream>
#include"GPIO.h"

using namespace exploringBB;
using namespace std;

// Output: P8_45 GPIO2_6 = 2x32 + 6 = 70
// Input: P9_31 GPIO3_14 = 3x32 + 14 = 110

int main ( )
{
	GPIO outGPIO (70), inGPIO (110);
	outGPIO.setDirection (OUTPUT);
	inGPIO.setDirection (INPUT);

	// Enable output
	outGPIO.streamOpen ();

	for (;;)
	{
		while (inGPIO.getValue() != HIGH)
		{
			outGPIO.streamWrite(LOW);
		}
		outGPIO.streamWrite (HIGH);
	}

	// Disable output
	outGPIO.streamClose ();

	return 0;
}
