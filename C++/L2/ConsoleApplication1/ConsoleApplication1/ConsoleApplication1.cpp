
#include<iostream>
#include<bitset>

using namespace std;

int main(void)
{
	signed char scl;
	signed short int ssil;
	signed int sil;
	unsigned short int usil;
	unsigned int uil;
	printf("LAB_No_02_Data_Format_and_Data_Conversion\n");
	printf(" Module:  C++ Programming approach \n");
	printf(" Aleem Ahmed, ID# 23792586\n");
	printf(" CET3510-OL25\n");
	printf(" Submission date: February 17, 2021\n");
	printf(" Due date: February 24, 2021\n");
	printf(" Example 2.2 dataFormttemp.cpp\n");
	printf(" file name:LAB_2_DATA_FORMATS_AND_DATA_CONVERSION\n");
	printf("-----------------------------------------\n\n\n");

	//Data type of signed char
	cout << "The minimum value of a signed char is " << SCHAR_MIN << endl;
	cout << "The Maximum value of a signed char is " << SCHAR_MAX << endl;
	cout << "The storage size in byte(s) of a signed char is " << sizeof(scl) << endl;

	cout << "Input a hexadecimal number in the data type of signed char , for example 8a" << endl;
	scanf_s("%x", &scl);
	//bitset stores the number of bits in 8*sizeof(scl)
	bitset<8 * sizeof(scl)>schartBits(scl);
	cout << "The converted binary value is " << schartBits << endl;
	printf(" The converted decimal value is %i \n", scl);

	printf("------------------------------------------------------------\n");
	//Data type of signed short int

	cout << "The Minimum value of a signed short int " << INT_MIN << endl;
	cout << "The Maximum value of a signed short int " << INT_MAX << endl;
	cout << "The storage size in byte(s) of a signed short int is " << sizeof(ssil) << endl;
	cout << "Input a hexadecimal number in the data type of signed short int, for example 8fff" << endl;
	scanf_s("%x", &ssil);

	//bitset stores the number of bits in 8*sizeof(ssil)
	bitset<8 * sizeof(ssil)>shortBits8(ssil);
	bitset<16 * sizeof(ssil)>shortBits16(ssil);
	cout << "The converted binary value in 8 bits is " << shortBits8 << endl;
	cout << "The converted binary value in 16 bits is " << shortBits16 << endl;

	printf(" The converted decimal value is %i \n", ssil);

	printf("------------------------------------------------------------\n");

	//Data type of signed int

	cout << "The Minimum value of a signed int " << INT_MIN << endl;
	cout << "The Maximum value of a signed int " << INT_MAX << endl;
	cout << "The storage size in byte(s) of a signed int is" << sizeof(sil) << endl;
	cout << "Input a hexadecimal number in the data type of signed int, for example 8fff" << endl;
	scanf_s("%x", &sil);

	//bitset stores the number of bits in 8*sizeof(sil)
	bitset<8 * sizeof(sil)>sintBits8(sil);
	bitset<16 * sizeof(sil)>sintBits16(sil);
	cout << "The converted binary value in 8 bits is " << sintBits8 << endl;
	cout << "The converted binary value in 16 bits is " << sintBits16 << endl;

	printf(" The converted decimal value is %i \n", sil);

	printf("------------------------------------------------------------\n");

	//Data type of unsigned short int

	cout << "The Maximum value of a unsigned short int  " << USHRT_MAX << endl;
	cout << "The storage size in byte(s) of a unsigned short int is " << sizeof(usil) << endl;
	cout << "Input a hexadecimal number in the data type of unsigned short int, for example 8fff" << endl;
	scanf_s("%x", &usil);

	//bitset stores the number of bits in 8*sizeof(usil)
	bitset<8 * sizeof(usil)>ushortBits8(usil);
	bitset<16 * sizeof(usil)>ushortBits16(usil);
	cout << "the converted binary value 8 in bits is " << ushortBits8 << endl;
	cout << "The converted binary value 16 in bits is " << ushortBits16 << endl;

	printf(" The converted decimal value is %u \n", usil);

	printf("------------------------------------------------------------\n");

	//Data type of unsigned int

	cout << "The Maximum value of a unsigned int  " << UINT_MAX << endl;
	cout << "The storage size in byte(s) of a unsigned int is " << sizeof(uil) << endl;
	cout << "Input a hexadecimal number in the data type of unsigned int, for example 8fff" << endl;
	scanf_s("%x", &uil);
	//bitset stores the number of bits in 8*sizeof(uil)
	bitset<8 * sizeof(uil)>uintBits8(uil);
	bitset<16 * sizeof(uil)>uintBits16(uil);
	cout << "The converted binary value in 8 bit is " << uintBits8 << endl;
	cout << "The converted binary value in 16 bit is " << uintBits16 << endl;

	printf(" The converted decimal value is %u \n", uil);

	printf("--------------------------------------------------------------\n");

	system("pause");
	exit(0);
	return 0;