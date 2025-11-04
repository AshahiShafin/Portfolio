#include <stdio.h>
#include <iostream>
#include <bitset>
#include <time.h>
#include "windows.h"
using namespace std;



int main()
{
	printf("Lab_No_09 Bit_Manipulation_and_Mask_Desigen\n");
	printf("Module: C++ progrmming \n");
	printf("Ashahi Shafin, ID#23607352\n");
	printf("CET3510-OL25\n");
	printf("Presentation date: April 21, 2021\n");
	printf("Due date: April 28, 2021\n");
	printf("Example 9.1 BitsAndMaskApp.cpp\n");
	printf("file name: 9.1 BitsAndMaskApp.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	unsigned short packedDate;
	unsigned char m;
	unsigned char d;
	unsigned char y;
	int count = 0;

	//randomize seed
	srand(time(0));

	//generate a random number between 1 and 12
	unsigned char month = (unsigned char)rand() % 12 + 1;

	//generate a random number between 1 and 31 
	unsigned char day = (unsigned char)rand() % 31 + 1;

	//generate a random number between 0 and 255
	unsigned char year = (unsigned char)rand() & 0xff;

	//generate a number between 0 and 100
	while (year > 100 || year < 0)
	{
		year = (unsigned char)rand() & 0xff;
		count++;
	}
	cout << "The value of the loop counter to generate the year between 0 and 100: " << dec << count << endl;
	cout << "-----------------------------------------" << endl;
	cout << "The generated month, day, and year (in decimal format) are:\n";
	printf("%u\t %u\t %u\n", month, day, year);
	cout << "The generated month, day, and year (in hexadecimal format) are:\n";
	printf("0x%x\t 0x%x\t 0x%x\n", month, day, year);

	bitset<8> monthBits(month);						
	cout << "month bits:\t" << monthBits << endl;	
	bitset<8> dayBits(day);							
	cout << "day bits:\t" << dayBits << endl;		
	bitset<8> yearBits(year);						
	cout << "year bits:\t" << yearBits << endl;		
	_asm
	{
		mov BL, month;
		shl BX, 5;
		or BL, day;
		shl BX, 7;
		or BL, year;
		mov packedDate, BX;
	}
	cout << "-----------------------------------------" << endl; \
		cout << "The packed date in hexadecimal is \t0x" << hex << packedDate << endl;

	//convert packetDate to a 16-bit number to store in a bitset
	bitset<16> packetBits(packedDate);
	cout << "packed date:\t" << packetBits << endl;	
	cout << "-----------------------------------------" << endl;
	_asm
	{
		mov AX, packedDate;
		and AX, 0xf000;		
		rol AX, 4;			
		mov m, AL;			
		mov AX, packedDate;
		and AX, 0x0f80;		
		ror AX, 7;			
		mov d, AL;			
		mov AX, packedDate;
		and AX, 0x007f;		
		mov y, AL;
	}
	cout << "The retrieved month, day, and year from bit string (in decimal format) are:\n";
	printf("%u\t %u\t %u\n", month, day, year);
	cout << "The retrieved month, day, and year from bit string (in hexadecimal format) are:\n";
	printf("0x%x\t 0x%x\t 0x%x\n", month, day, year);
	system("pause");
	exit(0);
}
