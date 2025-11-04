#include <stdio.h>
#include <iostream>
int main()
{
	printf(" Lab_No_03_Data_Movement_between_General_Purpose_Registers\n");
	printf(" Module: C++ progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: February 24, 2021\n");
	printf(" Due date: February 03, 2021\n");
	printf(" Example 3.3 SwapXBytesErr.cpp\n");
	printf(" file name: 3.3 SwapXBytesErr.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	char temp;
	char r1, r2;
	short int r;

	//A. Assignning bytes in two general registers BL, BH
	_asm
	{
		MOV BL, 'a';
		MOV BH, 'A';
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "============================================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;

	//To display characters
	printf("BH = %c, BL = %c, BX = %c\n", r2, r1, r);
	//Display the hexadecimal value of each character
	printf("BH = 0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);

	//Swap bytes in two general registers BL, BH
	_asm
	{
		XCHG BL, BH;
		MOV r1, BL;
		MOV r2, BH;
		MOV r, BX;
	}
	std::cout << "============================================================================" << std::endl;
	std::cout << "After swapping" << std::endl;

	//To display characters
	printf("BH = %c, BL = %c, BX = %c\n", r2, r1, r);
	//Display the hexadecimal value of each character
	printf("BH = 0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);
	/**********************************************************************************************************/
	//B. Assignning bytes in two general registers AL, AH
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "============================================================================" << std::endl;
	std::cout << "Before swapping" << std::endl;

	//To display characters
	printf("AH = %c, AL = %c, AX = %c\n", r2, r1, r);
	//Display the hexadecimal value of each character
	printf("AH = 0x%x, AL = 0x%x, AX = 0x%x\n", r2, r1, r);

	//Swap bytes in two general registers AL, AH
	_asm
	{
		MOV AL, 'b';
		MOV AH, 'B';
		MOV temp, AH;
		MOV AH, AL;
		MOV AL, temp;
		XCHG AL, AH;
		MOV r1, AL;
		MOV r2, AH;
		MOV r, AX;
	}
	std::cout << "============================================================================" << std::endl;
	std::cout << "After swapping" << std::endl;
	//To display characters
	printf("AH = %c, AL = %c, AX = %c\n", r2, r1, r);
	//Display the hexadecimal value of each character
	printf("AH = 0x%x, AL = 0x%x, AX = 0x%x\n", r2, r1, r);

	system("pause");
		return 0;

}