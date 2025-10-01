// #include <stdio.h>
// int main()
// {
//     // question 1 : chceck whethre a number is 3 digit or more than 3 digit;

//     // int x;
//     // printf("enter the number : ");
//     // scanf("%d", &x);
//     // if ((x / 1000) > 0){
//     //     printf("more than 3 digit");
//     // }
//     // else {
//     //     printf("3 digit");
//     // }

//     // int num1 , num2;
//     // printf("enter the tow numberr  : ");
//     // scanf("%d %d", &num1, &num2);
//     // if(num1 > num2){
//     //     printf("num1 is greater");
//     // }
//     // else if(num2 > num1){
//     //     printf("num2 is greater");
//     // }
//     // else{
//     //     printf("both are equal");
//     // }

//     // int a, b, c, D;
//     // printf("enter the value of a,b and c");
//     // scanf("%d %d %d", &a, &b, &c);
//     // D = b * b - 4 * a * c;
//     // if (D > 0)
//     // {
//     //     printf("roote are real and distincts");
//     // }
//     // else if (D == 0)
//     // {
//     //     printf("roote are real and equal");
//     // }
//     // else
//     // {
//     //     printf("roote are imaginery");
//     // }

//     // int year;
//     // printf("enter the year");
//     // scanf("%d", &year);
//     // if (year % 100 == 0 && year % 100 == 0)
//     // {
//     //     printf("yes this is leap year");
//     // }
//     // else if (year % 4 == 0)
//     // {
//     //     printf("yes this is leap year");
//     // }
//     // else
//     // {
//     //     printf("no this is not leap year");
//     // }

//     // int x, y, z;
//     // printf("enter the three number");
//     // scanf("%d %d %d", &x, &y, &z);
//     // if (x >= y && x >= z)
//     // {
//     //     if (x == y || x == z)
//     //     {
//     //         printf("x %d is repeated ", x);
//     //     }
//     //     else
//     //     {
//     //         printf("x %d is gratest number", x);
//     //     }
//     // }
//     // else if (y >= x && y >= z)
//     // {
//     //     if (y == x || y == z)
//     //     {
//     //         printf("y %d is repeated ", y);
//     //     }
//     //     else
//     //     {
//     //         printf("y %d is gratest number ", y);
//     //     }
//     // }
//     // else
//     // {
//     //     printf("z %d is gratest number", z);
//     // }

//     // float cp, sp, percent;
//     // printf("enter the cost price and selling price respecbly : ");
//     // scanf("%f %f", &cp, &sp);
//     // percent = ((sp - cp) / cp) * 100;
//     // if (percent >= 0)
//     // {
//     //     printf("profit %0.2f%%", percent);
//     // }
//     // else if (percent < 0)
//     // {
//     //     printf("loss %0.2f%%", percent);
//     // }
//     // else
//     // {
//     //     printf("no profit no loss");
//     // }

//     // printf("next Q __________________\n");

//     // int m1, m2, m3, m4, m5;
//     // printf("enter the marks of five sujects ");
//     // scanf(" %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
//     // if (m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33)
//     // {
//     //     printf("pass");
//     // }
//     // else
//     // {
//     //     printf("fail");
//     // }

//     // printf("next Q __________________\n");

//     char sym;
//     printf("enter the alpha bet ");
//     scanf("%c", &sym);
//     if (sym >= 'a' && sym <= 'z')
//     {
//         printf("thisis lower case");
//     }
//     else if (sym >= 'A' && sym <= 'Z')
//     {
//         printf("thisis upper case");
//     }
//     else
//     {
//         printf("not a alphabet");
//     }

//     printf("next Q __________________\n");

//     int newMethod;
//     newMethod = sym;
//     if (newMethod >= 65 && newMethod <= 80)
//     {
//         printf("thisis upper  case");
//     }
//     else if (newMethod >= 97 && newMethod <= 122)
//     {
//         printf("thisis lower case");
//     }
//     else
//     {
//         printf("not a alphabet");
//     }

//     printf("next Q __________________\n");

//     printf("\n");
//     return 0;
// }

// assignment 10 ----------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {

// int num;
// printf("enter the number :");
// scanf("%d", &num);
// if (num > 0)
// {
//     printf("+ve");
// }
// else if (num < 0)
// {
//     printf("-ve");
// }
// else
// {
//     printf("numer iis 0");
// }

// printf("\n ------------------------\n");

// char sym;
// printf("enter a character or symbol: ");
// scanf(" %c", &sym);

// if (sym >= 'A' && sym <= 'Z')
// {
//     printf("you entered an uppercase alphabet");
// }
// else if (sym >= 'a' && sym <= 'z')
// {
//     printf("you entered a lowercase alphabet");
// }
// else if (sym >= '0' && sym <= '9')
// {
//     printf("this is a digit 0 to 9");
// }
// else
// {
//     printf("special character");
// }
// printf("\n ------------------------\n");

// int s1, s2, s3;
// printf("enter the length or trignle all side");
// scanf("%d %d %d", &s1, &s2, &s3);
// if (s1 + s2 > s3 || s2 + s3 > s1 || s1 + s3 > s2)
// {
//     printf("valid");
// }
// else
// {
//     printf("invalid");
// }

// printf("\n ------------------------\n");

// int month;
// printf("enter the number of month");
// scanf("%d", &month);
// if (month == 2)
// {
//     printf("28 day in leap year 29 days");
// }
// else if (month == 4 || month == 6 || month == 11 || month == 9)
// {
//     printf("30 days only");
// }
// else if (month > 12 || month < 1)
// {
//     printf("please enter the valid number");
// }
// else
// {
//     printf("31 days");
// }

//     printf("\n");
//     return 0;
// }

// assignment 11 ----------------------------------------------------------------------------------

// #include <stdio.h>
// int main()
// {

// int i = 1;
// while(i<=5){

//     printf("mysirg\n");
//     i++;
// }

// int i =1;

// while(i<=10){
//     printf("%d\n",i);
//     i++;
// }

// int i = 10;

// while (i >= 1)
// {
//     printf("%d\n", i);
//     i--;
// }

// int i = 10;
// while (i >= 1)
// {
//     printf("%d\n", i*2-1);
//     i--;
// }

// int i = 1;
// while (i <=10)
// {
//     printf("%d\n", i*2-1);
//     i++;
// }

// int i = 1;
// while (i <=10)
// {
//     printf("%d\n", i*2);
//     i++;
// }

// int i = 10;
// while (i >= 1)
// {
//     printf("%d\n", i*2);
//     i--;
// }

// int i = 10;
// while (i >= 1)
// {
//     printf("%d\n", i*i);
//     i--;
// }

// int i = 10;
// while (i >= 1)
// {
//     printf("%d\n", i*i*i);
//     i--;
// }

// int i = 10;
// while (i >= 1)
// {
//     printf("%d\n", 5*i);
//     i--;
// }

//     printf("\n");
// return 0;
// }

// assignment 12 ----------------------------------------------------------------------------------

/*
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("how mnay times you want to print mysirg\n");
    scanf("%d", &n);

    while (i <= n)
    {

    printf("mysirg\n");
    i++;
}

int i = 1, n;
    printf("how mnay first naturel number you wnat to print\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
        }

        int i,n;
        printf("how mnay first naturel number you wnat to print in reverst order\n");
        scanf("%d", &n);

        i=n;
        while (i >= 1)
        {
            printf("%d\n", i);
        i--;
        }

        int i  ,n;
    printf("how mnay first odd naturel number you wnat to print");
    scanf("%d", &n);
    i=n;
    while (i >= 1)
    {
        printf("%d\n", i * 2 - 1);
        i--;
        }


        int i = 1,n;
        printf("how mnay first odd naturel number you wnat to print");
        scanf("%d", &n);
        while (i <= n)
        {
            printf("%d\n", i * 2 - 1);
            i++;
            }

            int i = 1,n;
            printf("how mnay first  even naturel number you wnat to print");
    scanf("%d", &n);
    while (i <=n)
    {
        printf("%d\n", i*2);
        i++;
    }

    int i = 10,n;
    printf("how mnay first naturel number you wnat to print in reverst order");
    scanf("%d", &n);
    i=n;
    while (i >= 1)
    {
        printf("%d\n", i * 2);
        i--;
        }


    int i = 1, n;
    printf("how mnay first naturel number's squar you wnat to print");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i * i);
        i++;
        }

        int i = 1,n;
    printf("how mnay first naturel number's cube you wnat to print");
    scanf("%d", &n);

    while (i <=n)
    {
        printf("%d\n", i * i * i);
        i++;
        }


        int i = 1,r;

        printf("which table you enat to to print : ");
          scanf("%d",&r);
   while (i <= 10)
   {
           printf("%d\n", r*i);
           i++;
           }


        printf("\n");
        return 0;
    }

    */

// assignment 13 ----------------------------------------------------------------------------------
/*

#include <stdio.h>
int main()
{

    int n, i=1, result = 0;
    printf("enter how many first numbe you wnat to add : ");
    scanf("%d", &n);

    while (i <= n)
    {
        result += i;

        i++;
    }
    printf("the sum of first %d number is : %d ", n, result);

    int n, i = 1, sum = 0;
    printf("enter how many first even numbers you wnat to add : ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i * 2;

        i++;
    }
    printf("the sum of first %d even number is : %d ", n, sum);

    int n, i = 1, sum = 0;
    printf("enter how many first even numbers you wnat to add : ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i * 2 - 1;

        i++;
    }
    printf("the sum of first %d even number is : %d ", n, sum);

    int n, i = 1, sum = 0;
    printf("enter how many first even numbers you wnat to add : ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i * i;

        i++;
    }
    printf("the sum of first %d even number is : %d ", n, sum);
    
    int n, i = 1, sum = 0;
    printf("enter how many first even numbers you wnat to add : ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        sum += i * i * i;
        
        i++;
    }
    printf("the sum of first %d even number is : %d ", n, sum);
    
    printf("\n");
    return 0;
}

*/