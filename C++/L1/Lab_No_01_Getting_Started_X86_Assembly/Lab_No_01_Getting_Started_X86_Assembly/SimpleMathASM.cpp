
#include "stdio.h"
#include<iostream>

int main(void)
{

	printf(" Lab_No_01_Getting_Stated_into_x86_Assembly_from_a_C++_program\n");
	printf(" Module B: Embedding an in-line asssembly language module in a C progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: February 10, 2021\n");
	printf(" Due date: February 17, 2021\n");
	printf(" Example 1.2 SimpleMathASM.cpp\n");
	printf(" file name: SimpleMathASM.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	int x1, y1, sum1, diff1;
	short int x2, y2, sum2, diff2;
	char x3, y3, sum3, diff3;

	printf("*****************************************************************************\n");

	//A. Find the sum of two integers (sum = x1 + y1)

	printf("Hello\n");

	printf("Using EAX, EBX, and ECX 32-bit Registers\n");

	printf("A. Find the sum of two integers (sum = x1 + y1) using 32-bit registers \n");

	printf("Enter two integers from a keynoard to add\n");
	scanf_s("%d%d", &x1, &y1);
	_asm
	{
		MOV EAX, 0;
		MOV EBX, 0;
		MOV ECX, 0;

		MOV EAX, x1;
		MOV EBX, y1;
		MOV ECX, EAX;
		ADD ECX, EBX;
		MOV sum1, ECX;

		// sum = x1 + y1 this operation is substituted using 32-bit registers;

	}
	printf("Addition result = %d\n", sum1);
	getchar();

	printf("***********************************************\n");

	//B. Find the difference of two integers (sub = x1 - y1)

	printf("Hello\n");

	printf("Using EAX, EBX, and ECX 32-bit Registers\n");

	printf("B. Find the difference of two integers (sub = x1 - y1) using 32-bits registers \n");

	printf("Enter two integers from a keyboard to minus\n");
	scanf_s("%d%d", &x1, &y1);
	_asm
	{
		MOV EAX, 0;
		MOV EBX, 0;
		MOV ECX, 0;

		MOV EAX, x1;
		MOV EBX, y1;
		MOV ECX, EAX;
		SUB ECX, EBX;
		MOV diff1, ECX;

		// sub = x1 - y1; this operation is substituted using registers;

	}

	printf("Subtraction result = %d\n", diff1);

	printf("***********************************************\n");
	printf("***********************************************\n");

	system("pause");


	//A. Find the sum of two integers (sum = x2 + y2)

	printf("Hello\n");

	printf("Using AX, BX, and CX 16-bit Registers\n");

	printf("A. Find the sum of two integers (sum = x1 + y1) using 16-bit registers \n");

	printf("Using AX, BX, and CX 16-bits Registers\n");

	printf("Enter two integers from a keyboard to add\n");
	scanf_s("%d%d", &x2, &y2);
	_asm
	{
		MOV EAX, 0;
		MOV EBX, 0;
		MOV ECX, 0;

		MOV AX, x2;
		MOV BX, y2;
		MOV CX, AX;
		ADD CX, BX;
		MOV sum2, CX;

		// sum = x2 + y2 this operation is substituted using 32-bit registers;

	}
	printf("Addition result = %d\n", sum2);
	getchar();

	printf("***********************************************\n");

	//B. Find the difference of two integers (sub = x2 - y2)

	printf("Hello\n");

	printf("Using AX, BX, and CX 16-bit Registers\n");

	printf("B. Find the difference of two integers (sub = x2 - y2) using 16-bit registers \n");

	printf("Enter two integers from a keyboard to minus\n");
	scanf_s("%d%d", &x2, &y2);
	_asm
	{
		MOV EAX, 0;
		MOV EBX, 0;
		MOV ECX, 0;

		MOV AX, x2;
		MOV BX, y2;
		MOV CX, AX;
		SUB CX, BX;
		MOV diff2, CX;

		// sub = x2 - y2; this operation is substituted using registers;
	}

	printf("Subtraction result = %d\n", diff2);

	printf("***********************************************\n");
	printf("***********************************************\n");

	system("pause");


	//A. Find the sum of two integers (sum = x3 + y3)

	printf("Hello\n");

	printf("Using AL, BL, and CL 8-bit Registers\n");

	printf("A. Find the sum of two integers (sum = x3 + y3) using 8-bit registers \n");

	printf("Using AL, BL, and CL 8-bits Registers\n");

	printf("Enter two integers from a keyboard to add\n");
	scanf_s("%d%d", &x3, &y3);
	_asm
	{
		MOV EAX, 0
		MOV EBX, 0
		MOV ECX, 0;

		MOV AL, x3
			MOV BL, y3
			MOV CL, AL;
		ADD CL, BL;
		MOV sum3, CL;

		// sum = x3 + y3 this operation is substituted using 32-bit registers;

	}

	printf("Addition result = %d\n", sum3);

	getchar(); // Hold the consult for result

	printf("***********************************************\n");

	//B. Find the difference of two integers (sub = x3 - y3)

	printf("Hello\n");

	printf("Using AL, BL, and CL 8-bit Registers\n");

	printf("B. Find the difference of two integers (sub = x3 - y3) using 8-bit registers \n");

	printf("Enter two integers from a keyboard to minus\n");
	scanf_s("%d%d", &x3, &y3);
	_asm
	{
		MOV EAX, 0;
		MOV EBX, 0;
		MOV ECX, 0;

		MOV AL, x3;
		MOV BL, y3;
		MOV CL, AL;
		SUB CL, BL;
		MOV diff3, CL;

		// sub = x3 - y3; this operation is substituted using registers;
	}

	printf("Subtraction result = %d\n", diff3);
	printf("***********************************************\n");
	printf("***********************************************\n");
	system("pause");
	return(0);
}