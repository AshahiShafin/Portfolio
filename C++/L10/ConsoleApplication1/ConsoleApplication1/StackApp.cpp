#include <stdio.h>
#include <iostream>
#include <time.h>
#include "windows.h"
using namespace std;
#define size 6




int main()
{
	printf("Lab_No_010 The Stack and LIFO Data Structure\n");
	printf("Module: C++ progrmming \n");
	printf("Ashahi Shafin, ID#23607352\n");
	printf("CET3510-OL25\n");
	printf("Presentation date: April 28, 2021\n");
	printf("Due date: May 5, 2021\n");
	printf("Example 10.1 StackApp.cpp\n");
	printf("file name: 10.1 StackApp.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

int i;					  
int arr_data[size];			
int arr_pop[size];			 
int stack_addr_push[size];	         
int stack_addr_pop[size];	        
int espb, espa;		          
int temp = 0;

//randomize seed
srand(time(0));

//random number 0 to 100
for (i = 0; i < size; i++)
{
	arr_data[i] = rand() % 100;

	}
	cout << "Generated random numbers store at the array" << endl;
	for (i = 0; i < size; i++)
{
	cout << arr_data[i] << " ";
}
	cout << endl;

	cout << "===============================PUSH===============================" << endl;
	_asm
	{
		mov espb, ESP;
	}
	cout << "The hexadecimal value of the ESP before the PUSH instruction is executed "
		<< hex << espb << endl;
	for (i = 0; i < size; i++)
	{
		temp = arr_data[i];
		_asm
		{
			mov eax, temp;
			push eax;
			mov espa, esp;
		}
		stack_addr_push[i] = espa;
		cout << "Push the number " << dec << arr_data[i] << " onto the stack" << endl;
		cout << "The hexadecimal value of the ESP after the PUSH instruction is executed "
			<< hex << espa << endl;
	}
	cout << endl;
	cout << "===============================POP===============================" << endl;
	_asm
	{
		mov espb, ESP;

	}
	cout << "The hexadecimal value of the ESP before the POP instruction is executed "
		<< hex << espb << endl;
	for (i = 0; i < size; i++)
	{
		_asm
		{
			pop eax;
			mov espa, esp;
			mov temp, eax;
		}
		arr_pop[i] = temp;
		stack_addr_pop[i] = espa;
		cout << "The number " << dec << arr_pop[i] << " popped off from the stack" << endl;
		cout << "The hexadecimal value of the ESP after the POP instruction is executed "
			<< hex << espa << endl;
	}
	cout << endl;
	cout << "==============================================================" << endl;
	cout << "The data stored onto the stack in order are " << endl;
	for (i = 0; i < size; i++)
	{
		cout << dec << arr_data[i] << " ";
	}
	cout << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "The ESP addresses onto the stack in order are " << endl;
	for (i = 0; i < size; i++)
	{
		cout << hex << stack_addr_push[i] << " ";
	}
	cout << endl << endl;;
	cout << "==============================================================" << endl;
	cout << "The values popped off from the stack in order are " << endl;
	for (i = 0; i < size; i++)
	{
		cout << dec << arr_pop[i] << " ";
	}
	cout << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "The ESP addresses popped off the stack in order are" << endl;
	for (i = 0; i < size; i++)
	{
		cout << hex << stack_addr_pop[i] << " ";
	}
	cout << endl;

	system("pause");
	exit(0);
	return 0;
}
