// #include <stdio.h>
// int main()
// {

// int x;
// printf("enter the number between 1 to 12 : ");
// scanf("%d", &x);
// switch (x)
// {
// case 1:
//     printf("the month has 31 days");
//     break;

// case 3:
//     printf("the month has 31 days");
//     break;
// case 5:
//     printf("the month has 31 days");
//     break;
// case 7:
//     printf("the month has 31 days");
//     break;
// case 8:
//     printf("the month has 31 days");
//     break;
// case 10:
//     printf("the month has 31 days");
//     break;
// case 12:
//     printf("the month has 31 days");
//     break;
// case 6:
//     printf("the month has 31 days");
//     break;
// case 4:
//     printf("the month has 30 days");
//     break;

// case 2:
//     printf("the month has 28 or 29 days");
//     break;
// case 9:
//     printf("the month has 30 days");
//     break;
// case 11:
//     printf("the month has 30 days");
//     break;
// default:
//     printf("invalid input");
// }

// int x, y, opr;
// printf("enter first  number : ");
// scanf("%d", &x);
// printf("enter second number : ");
// scanf("%d", &y);
// printf("enter press key for \n for addition :1   \n for multiplication : 2 \n for division : 3 \n for subtraction : 4 \n  for exit : 5 \n");
// scanf("%d", &opr);

// switch (opr)
// {
// case 1:
//     printf("the addition of %d and %d is %d", x, y, x + y);
//     break;
// case 2:
//     printf("the multiplication of %d and %d is %d", x, y, x * y);
//     break;
// case 3:
//     if (y != 0)
//         printf("the division of %d and %d is %d", x, y, x / y);
//     else
//         printf("division by zero is not allowed");
//     break;
// case 4:
//     printf("the subtraction of %d and %d is %d", x, y, x - y);
//     break;
// case 5:
//     printf("exit");
//     break;

// default:
//     printf("invalid input");
//     break;
// }

// int a, b, c, x;
// printf("enter the sides of triangle : ");
// scanf("%d %d %d", &a, &b, &c);
// printf("enter the number to chech the triangle is : \n 1 : isosceles \n 2 : right angle \n 3 : equilateral \n 4 : exit\n");
// scanf("%d", &x);
// switch (x)
// {
// case 1:
//     a == b || a == c || b == c ? printf("yes this is isosceles triangle") : printf("no this is not isosceles triangle");
//     break;
// case 2:
//     a *a + b *b == c *c || c *c + b *b == a *a || a *a + c *c == b *b ? printf("yes this is right angle triangle") : printf("no this is not right angle triangle");
//     break;
// case 3:
//     a == b &&a == c &&b == c ? printf("yes this is equilateral triangle") : printf("no this is not equilateral triangle");
//     break;
// case 4:
//     break;

// default:
//     printf("invalid input");
//     break;
// }

// int var;
// printf("emter the value of val : ");
// scanf("%d", &var);
// switch (var)
// {
// case 1:
//     printf("good");
//     break;
// case 2:
//     printf("better");
//     break;
// case 3:
//     printf("best");

// default:
//     printf("invalid");
//     break;
// }

//     printf("\n");
//     return 0;
// }

// =---------------------=--------------=-====================assignment 20-============================-=====

#include <stdio.h>
int main()
{
    // int stdmark;
    // printf("student enter your number obtained in test : \n");
    // scanf("%d", &stdmark);
    // switch (stdmark)
    // {
    // case :
    //     printf("gade is A");
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    // int x;
    // printf("menu \n 1 : Factorial of a number \n 2 : Check Even or Odd \n 3 : Area of Circle \n 4 : sum of first N natural numbers \n 5 : exit\n");
    // scanf("%d", &x);

    // switch (x)
    // {

    // case 1:
    //     int fact = 1, a;
    //     printf("enter the number to find factorial : ");
    //     scanf("%d", &a);
    //     for (int i = 1; i <= a; i++)
    //     {
    //         fact = fact * i;
    //     }
    //     printf(" the feactori is %d ", fact);

    //     break;

    // case 2:
    //     int b;
    //     printf("enter the number to find even or odd : ");
    //     scanf("%d", &b);
    //     if (b % 2 == 0)
    //     {
    //         printf(" the number %d is is even  ", b);
    //     }
    //     else
    //     {
    //         printf(" the number %d is is odd", b);
    //     }

    //     break;

    // case 3:
    //     float r;
    //     printf("enter the radius of circle : ");
    //     scanf("%f", &r);
    //     printf("the are of radius %f is : %f", r, 3.14 * r * r);

    //     break;

    // case 4:
    //     int sum = 0, userval;
    //     printf("enter the number fo find the sum of first n naturl numbers : ");
    //     scanf("%d", &userval);
    //     for (int j = 1; j <= userval; j++)
    //     {
    //         sum = sum + j;
    //     }
    //     printf("the sum of first %d natural numbers is %d", userval, sum);

    //     break;

    // case 5:

    //     break;

    // default:
    //     printf("please enter a valid number");
    //     break;
    // }

    int x;
    printf("menu \n 1 : Calculate the LCM of 2 number \n 2 : Sum of a digit of a number \n 3 : volum of a Cubeboid \n 4 : Check the number is prime or not \n 5 : exit\n");
    scanf("%d", &x);

    switch (x)
    {

    case 1:
        int lcm = 1, a , b;
        printf("enter the number to find factorial : ");
        scanf("%d %d", &a, &b);
        
        break;

    case 2:
        int b;
        printf("enter the number to find even or odd : ");
        scanf("%d", &b);
        if (b % 2 == 0)
        {
            printf(" the number %d is is even  ", b);
        }
        else
        {
            printf(" the number %d is is odd", b);
        }

        break;

    case 3:
        float r;
        printf("enter the radius of circle : ");
        scanf("%f", &r);
        printf("the are of radius %f is : %f", r, 3.14 * r * r);

        break;

    case 4:
        int sum = 0, userval;
        printf("enter the number fo find the sum of first n naturl numbers : ");
        scanf("%d", &userval);
        for (int j = 1; j <= userval; j++)
        {
            sum = sum + j;
        }
        printf("the sum of first %d natural numbers is %d", userval, sum);

        break;

    case 5:

        break;

    default:
        printf("please enter a valid number");
        break;
    }

    printf("\n");
    return 0;
}