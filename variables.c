/*
    data types in c
    int   
    float
    double
    char
    _Bool

*/


#include <stdio.h>
int main(void)
{
    // int IntVal = 89;
    // float theFloadVal = 56.979;
    // double theDoubleVal = 8.44e+65;
    // char theCharVal = 's';

    // _Bool theBoolVal = 0;

    // printf("this is pirntf %i \n",IntVal);           // %i for integer
    // printf("this is pirntf %f \n",theFloadVal);      // %f for float
    // printf("this is pirntf %e \n",theDoubleVal);     // %e for double in scientific notation 
    // printf("this is pirntf %g \n",theDoubleVal);     // %g for double in general format
    // printf("this is pirntf %c \n",theCharVal);       // %c for character
    // printf("this is pirntf %i \n",theBoolVal);       // %i for boolean (0 or 1)

    int rgbColor = 0xffef0d;
    printf("Color is with #x %#x\n", rgbColor);
    printf("Color is with x %x\n", rgbColor);
    printf("Color is with #X %#X\n", rgbColor);
    printf("Color is with X %X\n", rgbColor);
    printf("Color is with X %o\n", rgbColor);

        return 0;
}