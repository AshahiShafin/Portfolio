#include "stdio.h"
#include<iostream>
#include<bitset>

using namespace std;



int main(void)
{
    printf(" Lab_No_02_Data_Formats_and_Data_Conversion\n");
    printf(" Module: C++ progrmming \n");
    printf(" Ashahi Shafin, ID#23607352\n");
    printf(" CET3510-OL25\n");
    printf(" Presentation date: February 17, 2021\n");
    printf(" Due date: February 24, 2021\n");
    printf(" Example 2.2 dataFormatTemp.cpp\n");
    printf(" file name: 2.2 dataFormatTemp.cpp\n");
    printf("-----------------------------------------------------------------------------\n");

    char c1;
    unsigned char uc1;
    short int i1;
    signed char sc1;
    unsigned short us1;
    unsigned int ui1;
   
    //Data type of char 
    cout <<"The minimun value of a char"<< CHAR_MIN << endl;
    cout <<"The maximun value of a char"<< CHAR_MAX << endl;
    cout <<"The stoeage bytes of a char is"<< sizeof(c1) << endl;
    
    cout <<"Input a hexidececimal munchber in the data type, for example 8a" <<endl;
    scanf_s("%x", &c1)
    // bitset display the number of bits in 8*sizeof(c1);
    bitset<8 * sizeof(c1)> charBits(c1);
    cout <<"The converted binary valueis "<< charBits << endl;
    printf("The converted decimal value is %i \n", c1);
    printf("-----------------------------------------------------------------------------\n");

    //Data type of signed char 
    cout <<"The minimun value of a signed char"<< UCHAR_MAX << endl;
    cout <<"The stoeage bytes of a sigened char is"<< sizeof(uc1) << endl;

    cout <<"Input a hexidececimal munchber in the data type, for example 8a"<< endl;
    scanf_s("%x", &uc1)
        // bitset display the number of bits in 8*sizeof(uc1)
    bitset<8 * sizeof(uc1)> ucharBits(uc1);
    cout <<"The converted binary valueis "<< ucharBits << endl;
    printf("The converted decimal value is %i \n", uc1);
    printf("-----------------------------------------------------------------------------\n");

    //Data type of signed short int 
    cout <<"The minimun value of a short int"<< SHRT_MIN << endl;
    cout <<"The maximun value of a short int"<< SHRT_MAX << endl;
    cout <<"The stoeage bytes of a short int is"<< sizeof(i1) << endl;

    cout <<"Input a hexidececimal munchber in the data type, for example 8a"<< endl;
    scanf_s("%x", &i1)
        // bitset display the number of bits in 8*sizeof(i1)
    bitset<8 * sizeof(i1)> shortBits(i1);
    cout <<"The converted binary valueis "<< shortBits << endl;
    printf("The converted decimal value is %i \n", i1);
    printf("-----------------------------------------------------------------------------\n");

    //Data type of signed int 
    cout <<"The minimun value of a signed char"<< SCHAR_MIN << endl;
    cout <<"The maximun value of a signed char"<< SCHAR_MAX << endl;
    cout <<"The stoeage bytes of a signed char is"<< sizeof(sc1) << endl;

    cout <<"Input a hexidececimal munchber in the data type, for example 8a"<< endl;
    scanf_s("%x", &sc1)
        // bitset display the number of bits in 8*sizeof(sc1)
        bitset<8 * sizeof(sc1)> scharBits(sc1);
    cout <<"The converted binary valueis "<< scharBits << endl;
    printf("The converted decimal value is %i \n", sc1);
    printf("-----------------------------------------------------------------------------\n");

    //Data type of unsigned short int
    cout <<"The minimun value of a signed char"<< USHRT_MAX << endl;
    cout <<"The stoeage bytes of a sigened char is"<< sizeof(us1) << endl;

    cout <<"Input a hexidececimal munchber in the data type, for example 8a"<< endl;
    scanf_s("%x", &us1)
        // bitset display the number of bits in 8*sizeof(us1)
        bitset<8 * sizeof(us1)> ushortBits(us1);
    cout <<"The converted binary valueis "<< ushortBits<< endl;
    printf("The converted decimal value is %i \n", us1);
    printf("-----------------------------------------------------------------------------\n");

    //Data type of sgned unsigened int 
    cout <<"The minimun value of a unsigned int"<< INT_MIN << endl;
    cout <<"The maximun value of a unsigned int"<< INT_MAX << endl;
    cout <<"The stoeage bytes of a unsigned int is" << sizeof(ui1) << endl;

    cout <<"Input a hexidececimal munchber in the data type, for example 8a"<< endl;
    scanf_s("%x", &ui1)
        // bitset display the number of bits in 8*sizeof(ui1)
        bitset<8 * sizeof(ui1)> intBits(ui1);
    cout <<"The converted binary valueis "<< intBits << endl;
    printf("The converted decimal value is %i \n", ui1);
    printf("-----------------------------------------------------------------------------\n");

    system("pause");
    exit(0);
    return 0;
}