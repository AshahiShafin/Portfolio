#include <iostream>
using namespace std;

int main()
{
	printf(" Lab_No_05_Addressing_Modes\n");
	printf(" Module: C++ progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: March 10, 2021\n");
	printf(" Due date: March 17, 2021\n");
	printf(" Example 5.2 addressingModesTemp.cpp\n");
	printf(" file name: 5.2 addressingModesTemp.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	const int n = 5; //the dimension of an array
	//more delclaration and initilization here
	unsigned int u32_arr[n] = { 0x00000041, 0x00000052, 0xabcd1169, '1234', 'aABc'}; 
	unsigned int u0, u1, u2, u3, u4;
	unsigned int *uPtr;
	int i;  // used as index
	int u0_addr, u1_addr, u2_addr, u3_addr, u4_addr;
	
	signed int i32_arr[n] = { 0x00000041, 0x00000052, 0xabcd1169, '1234', 'aABc' };
	signed int i0, i1, i2, i3, i4;
	signed int *iPtr;
	int i0_addr, i1_addr, i2_addr, i3_addr, i4_addr;

	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	//Display hxadecimal and decimal value each element of the unsigned int array
	cout << "The value of each element of 32 bit unsigned int array" << endl << endl << endl;
	for (i = 0; i < n; i++)
{	
		cout<<"The value and the size of element" <<dec<<i;
		cout << " in an array are 0x" << hex << u32_arr[i]
			<< "and " << sizeof(u32_arr[i]) << "byte(s)" << endl;
}
	printf("-----------------------------------------------------------------------------\n");
	uPtr = u32_arr;
	//Display the 32-bit address in hexadecimal format 
	cout << "The memory address of the array is 0x" << hex << uPtr << endl;

	//The retrieved value from different address modes
	_asm
	{
		//EBX holds the address of element 0 in the array 
		mov EBX, uPtr;

		/*u0 holds the retrieved value from the indirect address contained
		in the register EBX*/
		mov EAX, [EBX];
		mov u0, EAX;
		mov u0_addr, EBX;

		/*EBX is increased by 4 due u32_arr is an unsigned int array (4 bytes)
		EBX holds the address of element 1 in the array*/
		mov ECX, 4H;
		add EBX, ECX;

		/*u1 holds the retrieved value from the indirect address contained
		in the register EBX*/
		mov EAX, [EBX];
		mov u1, EAX;
		mov u1_addr, EBX;

		/*EBX+4H holds the address of element 2 in the array
		u2 holds the retrieved values from the register relative addressing*/
		mov EAX, [EBX + 4H];
		mov u2, EAX;

		//EDI hold the address of element 2 in an array 
		mov EDI, EBX;
		add EDI, 4H;
		mov u2_addr, EDI;

		/*EBX+8H holds the address of element 3 in the array
		u3 holds the retrieved value from the register relative addressing*/
		mov EAX, [EBX + 8H];
		mov u3, EAX;

		//EDI holds the address of element 3 in the array
		mov EDI, EBX;
		add EDI, 8H;
		mov u3_addr, EDI;

		/*EBX+12H holds the address of element 4 in the array
		u4 holds the retrieved value from the register relative addressing*/
		mov EAX, [EDI + 4H];
		mov u4, EAX;

		//EDI holds the address of element 4 in the array
		mov ESI, EDI;
		add ESI, 4H;
		mov u4_addr, ESI;
	}

	//Display the retrieved value from different address modes 
	cout << "--------------------------------------------------------------" << endl;
	cout << "The retrieved values 0x" << hex << u0 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << u1 << "\t at the address of 0x" << hex << u1_addr << endl;
	cout << "The retrieved values 0x" << hex << u2 << "\t at the address of 0x" << hex << u2_addr << endl;
	cout << "The retrieved values 0x" << hex << u3 << "\t at the address of 0x" << hex << u3_addr << endl;
	cout << "The retrieved values 0x" << hex << u4 << "\t at the address of 0x" << hex << u4_addr << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

	//Display hexadecimal and decimal values each element of the signed int array 
	cout << "--- The value of each element of 32-bit signed int array ----" << endl << endl << endl;
	for (i = 0; i < n; i++)
	{
		cout << "The value and the size of element " << dec << i;
		cout << " in an array are 0x" << hex << i32_arr[i] << " and " << sizeof(i32_arr[i]) << " byte(s) " << endl;
	}
	printf("---------------------------------------------------------------\n");
	iPtr = i32_arr;

	//Display the 32-bit address in hexadecimal format 
	cout << "The memory address of the array is 0x" << hex << iPtr << endl;

	//The retrieved value from different address modes
	_asm
	{
		//EBX holds the address of element 0 in the array 
		mov EBX, iPtr;

		/*i0 holds the retrieved value from the indirect address contained
		in the register EBX*/
		mov EAX, [EBX];
		mov i0, EAX;
		mov i0_addr, EBX;

		/*EBX is increased by 4 due i32_arr is an signed int array (4 bytes)
		EBX holds the address of element 1 in the array*/
		mov ECX, 4H;
		add EBX, ECX;

		/*i1 holds the retrieved value from the indirect address contained
		in the register EBX*/
		mov EAX, [EBX];
		mov i1, EAX;
		mov i1_addr, EBX;

		/*EBX+4H holds the address of element 2 in the array
		u2 holds the retrieved values from the register relative addressing*/
		mov EAX, [EBX + 4H];
		mov i2, EAX;

		//EDI hold the address of element 2 in an array 
		mov EDI, EBX;
		add EDI, 4H;
		mov i2_addr, EDI;

		/*EBX+8H holds the address of element 3 in the array
		i3 holds the retrieved value from the register relative addressing*/
		mov EAX, [EBX + 8H];
		mov i3, EAX;

		//EDI holds the address of element 3 in the array
		mov EDI, EBX;
		add EDI, 8H;
		mov i3_addr, EDI;

		/*EBX+12H holds the address of element 4 in the array
		i4 holds the retrieved value from the register relative addressing*/
		mov EAX, [EDI + 4H];
		mov i4, EAX;

		//EDI holds the address of element 4 in the array
		mov ESI, EDI;
		add ESI, 4H;
		mov i4_addr, ESI;
	}

	//Display the retrieved value from different address modes 
	cout << "--------------------------------------------------------------" << endl;
	cout << "The retrieved values 0x" << hex << i0 << "\t at the address of 0x" << hex << i0_addr << endl;
	cout << "The retrieved values 0x" << hex << i1 << "\t at the address of 0x" << hex << i1_addr << endl;
	cout << "The retrieved values 0x" << hex << i2 << "\t at the address of 0x" << hex << i2_addr << endl;
	cout << "The retrieved values 0x" << hex << i3 << "\t at the address of 0x" << hex << i3_addr << endl;
	cout << "The retrieved values 0x" << hex << i4 << "\t at the address of 0x" << hex << i4_addr << endl;
	cout << "\n\n\n\n\n";


	system("pause");
	exit(0);
	return 0;

}