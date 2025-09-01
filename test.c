#include <stdio.h>
int main(void)
{
    // Q1. add two integers

    // int num1, num2, result;

    // printf("enter the number 1 : ");
    // scanf("%d", &num1);
    // printf("enter the number 2 : ");
    // scanf("%d", &num2);

    // result = num1 + num2;

    // printf("the sum of %d & %d is equal to %d", num1, num2, result);
    // Q1. complete

    // Q2. find the area of circle

    // double pai, area, redius;
    // pai = 3.14;

    // printf("enter redius of circle : ");
    // scanf("%lf", &redius);

    // area = pai * redius * redius ;
    // printf("the area of circle is %lf" , area);

    // Q.3 ASCII Value of a Character

    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';
    i1 = f1; // floating to integer conversion
    printf("%f assigned to an int produces %i\n", f1, i1);
    f1 = i2; // integer to floating conversion
    printf("%i assigned to a float produces %f\n", i2, f1);
    f1 = i2 / 100; // integer divided by integer
    printf("%i divided by 100 produces %f\n", i2, f1);
    f2 = i2 / 100.0; // integer divided by a float
    printf("%i divided by 100.0 produces %f\n", i2, f2);
    f2 = (float)i2 / 100; // type cast operator
    printf("(float) %i divided by 100 produces %f\n", i2, f2);

    return 0;
}