#include <stdio.h>

int main()
{
    // int a = 4, b = 5, c;
    // printf("by using the third variable \n");
    // printf("value without swaping a= %d , b= %d \n", a, b);
    // // by using the third variable;
    // c = a;
    // a = b;
    // b = c;
    // printf("value after swaping a= %d , b= %d \n", a, b);

    // printf("without using the third variable \n");
    // printf("value without swaping a= %d , b= %d \n", a, b);
    // // by using the third variable;
    // a = a + b; // a=9 b=5;
    // b = a - b; // a=9 b=4;
    // a = a - b; // a=5 b=4;

    // printf("value after swaping a= %d , b= %d \n", a, b);
    // int a = 4, b = 5;

    // a = a * b;
    // b = a / b;
    // a = a / b;
    // printf("after swaping a=%d  b=%d", a, b);

    //  int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // printf("Before swap: a = %d, b = %d\n", a, b);

    // // XOR swap
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    // printf("After swap: a = %d, b = %d\n", a, b);

    // int num, sum = 0;
    // printf("enter the three digit number :");
    // scanf("%d", &num);

    // while (num > 0)
    // {
    //     sum += num % 10;
    //     num = num / 10;
    // }

    // printf("here is the sum of all digit in you number %d ", sum);
    // int num;
    // printf("enter the three digit number :");
    // scanf("%d", &num);

    // num = num/ 10 * 10;

    // printf("here is the sum of all digit in you number %d ", num);

    // char sym = '+';
    // printf("%d", sym);

    // int additional = 10, digit = 7, num = 765;
    // printf("enter the number :");
    // scanf("%d", &num);
    // printf("enter the digit :");
    // scanf("%d", &digit);

    // while (num > 0)
    // {

    //     digit += num % 10 * additional;
    //     num = num / 10;
    //     additional *= 10;
    // }
    // printf("%d", digit);

    int x;

    printf("enter the number to check its even or odd : ");
    scanf("%d", &x);
    x= x & 1;

    if (!x)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    printf("\n");
    return 0;
}