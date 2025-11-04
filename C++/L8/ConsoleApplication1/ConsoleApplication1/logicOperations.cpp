#include <iostream>
#include <bitset>
#include "windows.h"
using namespace std;

void mainMenu();
void subMenu1();
void AND_operation(unsigned short r1, unsigned short r2);
void OR_operation(unsigned short r1, unsigned short r2);
void XOR_operation(unsigned short r1, unsigned short r2);
void NOT_operation(unsigned short r1);


int main()
{
	printf(" Lab_No_08_Logic_Operations\n");
	printf(" Module: C++ progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: April 14, 2021\n");
	printf(" Due date: April 21, 2021\n");
	printf(" Example 8.1 logicOperations.cpp\n");
	printf(" file name: 8.1 logicOperations.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	//Declare variables here 
	char ch, ch1, ch2, ch3;
	unsigned short r1, r2;		

	cout << "Start the logic operation Y/N, enter Y(y) or N(n): ";
	cin >> ch;
	ch1 = ch;

	mainMenu();
	cout << "Menu Options: ";
	cin >> ch;
	ch2 = ch;
	while (ch1 == 'Y' || ch1 == 'y')
	{
		if (ch2 == '1')
		{
		Submenu:
			subMenu1;
			cout << "Submenu - input your choices a(AND), b(OR), c(XOR) or d(NOT): ";
			std::cin >> ch;
			ch3 = ch;
			switch (ch3)
			{
			case 'a':
			{
				cout << "Enter the first number in hexadecimal format (for example, 12ae): ";
				cin >> hex >> r1;
				cout << "Enter the second number in hexadecimal format (for example, ff00): ";
				cin >> hex >> r2;
				AND_operation(r1, r2);
				break;
			}
			case 'b':
			{
				cout << "Enter the first number in hexadecimal format (for example, 12ae): ";
				cin >> hex >> r1;
				cout << "Enter the second number in hexadecimal format (for example, ff00): ";
				cin >> hex >> r2;
				OR_operation(r1, r2);
				break;
			}
			case 'c':
			{
				cout << "Enter the first number in hexadecimal format (for example, 12ae): ";
				cin >> hex >> r1;
				cout << "Enter the second number in hexadecimal format (for example, ff00): ";
				cin >> hex >> r2;
				XOR_operation(r1, r2);
				break;
			}
			case 'd':
			{
				cout << "Enter the first number in hexadecimal format (for example, 12ae): ";
				cin >> hex >> r1;
				NOT_operation(r1);
				break;
			}

			default: goto Submenu;

			}
		}
		else
		{
			goto EndLable;
		}

		cout << "Do you like to continue the logic operations (Y/N)? Enter Y(y) or N(n): " << endl;
		cin >> ch;
		ch1 = ch;
	}

EndLable:
	cout << "Exit program" << endl;

	system("pause");
	exit(0);
	return 0;
}
void mainMenu()
{
	cout << "Menu:" << endl;
	cout << "1, Perform logic operation with 16-bit operand(s)" << endl;
	cout << "2, Exit" << endl;
}

void subMenu1()
{
	cout << "a. Input two 16-bit unsigned number operands and perform an AND (&) operation.\n"
		<< "	Display the operands and the result in binary format. " << endl;
	cout << "b. Input two 16-bit unsigned number operands and perform an OR (|) operation.\n"
		<< "	Display the operands and the result in binary format. " << endl;
	cout << "c. Input two 16-bit unsigned number operands and perform an XOR (^) operation.\n"
		<< "	Display the operands and the result in binary format. " << endl;
	cout << "d. Input two 16-bit unsigned number operands and perform an NOT (~) operation.\n"
		<< "	Display the operands and the result in binary format. " << endl;
}

void AND_operation(unsigned short r1, unsigned short r2)
{
	unsigned short r;

	// AND operation
	_asm
	{
	mov AX, r1;
	mov CX, r2;
	and AX, CX;
	mov r, AX;
	}


	bitset<16> operant1_Bits(r1);		
	bitset<16> operant2_Bits(r2);		
	bitset<16> result_Bits(r);			

	cout << "Perform an AND operation:" << endl;
	cout << "\t\t" << operant1_Bits << endl;
	cout << "\tAND" << "\t" << operant2_Bits << endl;
	cout << "------------------------------------\n";
	cout << "\t\t" << result_Bits << endl;
	cout << "===========================================================\n";
}

void OR_operation(unsigned short r1, unsigned short r2)
{
	unsigned short r;

	// OR operation
	_asm
	{
		mov AX, r1;
		mov CX, r2;
		or AX, CX;
		mov r, AX;
	}

	bitset<16> operant1_Bits(r1);		
	bitset<16> operant2_Bits(r2);		
	bitset<16> result_Bits(r);			

	cout << "Perform an OR operation:" << endl;
	cout << "\t\t" << operant1_Bits << endl;
	cout << "\tOR" << "\t" << operant2_Bits << endl;
	cout << "------------------------------------\n";
	cout << "\t\t" << result_Bits << endl;
	cout << "===========================================================\n";
}

void XOR_operation(unsigned short r1, unsigned short r2)
{
	unsigned short r;

	// XOR operation
	_asm
	{
		mov AX, r1;
		mov CX, r2;
		xor AX, CX;
		mov r, AX;
	}

	bitset<16> operant1_Bits(r1);		
	bitset<16> operant2_Bits(r2);		
	bitset<16> result_Bits(r);			

	cout << "Perform an XOR operation:" << endl;
	cout << "\t\t" << operant1_Bits << endl;
	cout << "\tXOR" << "\t" << operant2_Bits << endl;
	cout << "------------------------------------\n";
	cout << "\t\t" << result_Bits << endl;
	cout << "===========================================================\n";
}

void NOT_operation(unsigned short r1)
{
	unsigned short r;

	// NOT operation
	_asm
	{
		mov AX, r1;
		not AX;
		mov r, AX;
	}

	bitset<16> operant1_Bits(r1);		
	bitset<16> result_Bits(r);			

	cout << "Perform an XOR operation:" << endl;
	cout << "\tNOT" << "\t" << operant1_Bits << endl;
	cout << "------------------------------------\n";
	cout << "\t\t" << result_Bits << endl;
	cout << "===========================================================\n";
}
