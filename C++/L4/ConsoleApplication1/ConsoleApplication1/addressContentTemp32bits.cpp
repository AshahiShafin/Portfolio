#include <stdio.h>
#include <iostream>
int main()
{
	printf(" Lab_No_04_Memory_Addresses\n");
	printf(" Module: C++ progrmming \n");
	printf(" Ashahi Shafin, ID#23607352\n");
	printf(" CET3510-OL25\n");
	printf(" Presentation date: March 03, 2021\n");
	printf(" Due date: March 10, 2021\n");
	printf(" Example 4.3 addressContentTemp32bits.cpp\n");
	printf(" file name: 4.3 addressContentTemp32bits.cpp\n");
	printf("-----------------------------------------------------------------------------\n");

	int const size = 4;
	int i32_arr[size] = { 0x8000000, 0x0000ffff, -660000, 6600000}; //32 bit array
	int *ivPtr0, *ivPtr1, *ivPtr2, *ivPtr3;                          //they are used to store the addresses
	int md[4], madd[4];
	int i;                                                           // used as index

	//address for each element in an array i32_arr[4]
	ivPtr0 = &i32_arr[0];
	ivPtr1 = &i32_arr[1];
	ivPtr2 = &i32_arr[2];
	ivPtr3 = &i32_arr[3];

	//Display Hax value, decimal value, and char value for each element of t array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The address of each element of 32 bit array--------\n\n");
	for (i = 0; i<size; i++)
{
		printf("The value of element %d in an array is 0x%X (hex), %d (decimal)\n",
			i, i32_arr[i], i32_arr[i], i32_arr[i]);
}
	//Display address in hexadecimal for each element of the array
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("----------The address of each element of 32 bit array--------\n\n");
	for (i = 0; i<size; i++)

{
	printf("The memory address of element %d in an array is 0x%x (hexidecimal),\n", i, ivPtr0+i);
}
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	//Find the total numbers in byte of array i32_arr[4]
	printf("----------The size information in bytes of an 32 bit array--------\n");
	printf("The total numbers in bytes of an 32 bit array with 4 elements in %d bytes\n",
		sizeof (i32_arr));

	//Find the number of bytes of each element 
	for (i = 0; i<size; i++)
{
		md[i] = sizeof(i32_arr[i]);
		madd[i] = sizeof(ivPtr0+i);
		printf("----------------------------------------\n");
		printf("The size of element %d is %d bytes\n", i, md[i]);
		printf("The size of the address of the element %d is %d bytes\n ", i, madd[i]);
}

	system("pause");
		return 0;

}