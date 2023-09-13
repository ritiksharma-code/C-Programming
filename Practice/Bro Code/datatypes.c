#include <stdio.h>
#include <>
int main()
{
    char a = 'C';        //single character     %c
    char b[] = "Bro";    // array of characters %s

    float c = 3.141592653589793;         // 4 byte (32 bit of precision) 6-7 digits %f
    double d/*  */ = 3.141592653589793;    // 8 byte (64 bits of precision) 15-16 digits %lf

    //bool e = true;            // 1 byte (true or false) %d

    //char f = 100;             // 1 byte (0 to +127) %d or %c
    //unsigned char g = 255;    // 1 byte (0 to +255) %d or %c

    //short int h = 32767;              // 2 bytes (-32,768 to +32,767) %d
    //unsigned short int in = 65535;    // 2 bytes (0 to +65,535) %d 

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    //unsigned int k = 4294967295L;     // 4 bytes (0 to +4,294,967,295) %u

    //long long int i = 595618526186511854;
    //unsigned long long int m = 14495174916219115U;

    // %c   char
    // %s   character array
    // %f   float           to change the number of decimal places to print then we should use 0.x where x is the number of decimal places you need for example %0.15f  in this the 15 decimal places will show
    // %lf  double          while using float to show many decimal places, it can affect the accuracy of the output so we should use double to prevent that from happening
    // %d   bool
    // %d   char as numeric value
    // %d   unsigned char as numeric value
    // %d   short
    // %d   unsigned short
    // %d   int
    // %u   unsigned int
    // %lld long long int
    // %llu unsigned long long int
    return 0;
}