#include <iostream>
using namespace std;


int main()
{
	printf(" Lab_No_05_Addressing_Modes\n");
	printf(" Module: C++ progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: March 17, 2021\n");
	printf(" Due date: March 24, 2021\n");
	printf(" Example 6.1 extendingNum.cpp\n");
	printf(" file name: 6.1 extendingNum.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	unsigned short int us16 = 0xfffd;
	signed short int s16 = 0xffffd;
	unsigned int us32;
	signed int s32;

	//A 16-bit UNSIGNED number extending to a 32-bit UNSIGNED number
	cout << "--------------------------------------------------------\n";
	cout << "A 16-bit unsigned number extending to a 32-bit unsigned number\n";
	//Displays the unsigned hexadecimal value of 16-bit unsigned short int, us16
	cout << "unsigned hexadecimal value is " << hex << us16 << endl;
	//Displays the unsigned decimal value of 16-bit unsigned short int, us16
	cout << "its associated unsigned decimal value is " << dec << us16 << endl;;

	_asm
	{
		MOV AX, us16;	
		MOVZX EAX, AX;	
		MOV us32, EAX;	
	}

	//Displays the 32-bit identical hexadecimal and decimal value of us16
	cout << "After zero extension,\n the identical hex value with 32-bit unsigned number is " << hex << us32 << endl
		<< " and its associated decimal is " << dec << us32 << endl;


	//A 16-bit SIGNED number extending to a 32-bit SIGNED number
	cout << "--------------------------------------------------------\n";
	cout << "A 16-bit signed number extending to a 32-bit signed number\n";
	//Displays the signed hexadecimal value of 16-bit signed short int, s16
	cout << "signed hexadecimal value is " << hex << s16 << endl;
	//Displays the signed decimal value of 16-bit signed short int, s16
	cout << "its associated signed decimal value is " << dec << s16 << endl;

	_asm
	{
		MOV BX, s16;	
		MOVSX EBX, BX;
		MOV s32, EBX;	
	}

	//Displays the 32-bit identical hexadecimal and decimal value of s16
	cout << "After sign extension,\n" "the identical hex value with 32-bit signed number is " << hex << s32 << '\n'
		<< " and its associated decimal is " << dec << s32 << '\n';

	system("pause");
	exit(0);
	return 0;
}