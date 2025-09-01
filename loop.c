#include <stdio.h>

int main()
{
    // let ask the user what they wnat to print and how many times

    // char val[30];
    // int number;
    // printf("enter the word you want to print in the terminal\n");
    // scanf("%s", val);
    // printf("enter the number how many types you want to print\n");
    // scanf("%d", &number);

    // for (int i = 1; i <= number; ++i)
    // {
    //     printf("%2i. %s\n",i, val);

    // }

    // loop for trianguler number find

    // int i, num, tnum = 0;
    // printf("enter the numbem to find the triangluer number");
    // scanf("%i", &num);

    // for (i = 1; i <= num; ++i)
    // {
    //     tnum += i;
    // }
    // printf("the trianguler number of %i is equal  to %i", num, tnum);

    // -------------------------------------------------------------------lets use the nested loop in c

    // int howManyNum, num, n, tnum = 0;

    // printf("how many times you want to find the triangluer number\n");
    // scanf("%i", &howManyNum);

    // for (n = 1; n <= howManyNum; ++n)
    // {
    //     printf("enter the number to find the triangluer number\n");
    //     scanf("%i", &num);
    //     for (int i = 1; i <= num; ++i)
    //     {
    //         tnum += i;
    //     }
    //     printf("the trianguler number of %i this is %i\n\n\n\n", num, tnum);
    //     tnum = 0;
    // }

    //---------------------------------------------------------------- let create the reverse number program

    // int num, reversenum;
    // printf("enter the number for the reverse");
    // scanf("%i", &num);

    // while (num != 0)
    // {
    //     reversenum = num % 10;
    //     printf("%i", reversenum);
    //     num /= 10;
    // }

    // createing the table the n and n^2 the range of n is 1 to 10
    // printf("here is the tabe of n and n^2\n");
    // printf("|    n       |       n^2    |\n");
    // printf("_____________________________\n");
    // for (int n = 1, powerN = 0; n <= 10; ++n)
    // {
    //     powerN = n*n;
    //     printf("|    %2i      |      %3i     |\n",n,powerN);
    // }

    //-------------------------------------------------------- createing the table of trianguler number range is 1 to 500  and the only fifth number (5,10,15,....)
    //-------------------------------------------------------- formule of trianguler number

    // int num = 0, tnum = 0;
    // printf("|    num    |    tnum     |\n");

    // for (int i = 0; num <= 50; ++i)
    // {
    //     tnum = num * (num + 1) / 2;
    //     printf("|    %3i    |   %4i     |\n", num, tnum);
    //     num += 5;
    // }

    // ------------------------------------ fectorial number range of 1 to 10
    // int i = 1, j, fectNum = 1;
    // printf("     n       |              n!        \n");
    // printf("------------------------------------\n");

    // for (j = 1; j <= 10; ++j)
    // {

    //     while (i <= j)
    //     {
    //         fectNum = fectNum * i;
    //         ++i;
    //     }
    //     printf("    %2i      |       %8i     |\n", j, fectNum);
    // }

    // =-====================================================================================================

    // int n, two_to_the_n;
    // printf("TABLE OF POWERS OF TWO\n\n");
    // printf(" n     2 to the n\n");
    // printf("---    ---------------\n");
    // two_to_the_n = 1;
    // for (n = 0; n <= 10; ++n)
    // {
    //     printf("%2i        %i\n", n, two_to_the_n);
    //     two_to_the_n *= 2;
    // }

    // ----------------------------------------------------------------------------------------------------
    // int n, triangularNumber = 0;

    // printf("  n      Triangular Number\n");
    // printf("---------------------------\n");

    // for (n = 1; n <= 10; n++)
    // {
    //     triangularNumber = triangularNumber + n;
    //     printf(" %-2i           %i\n", n, triangularNumber); // ← left-justified field
    // }
    // -----------------------------------------------------------------------------------------------

    // int dollars, cents, count;
    // for (count = 1; count <= 10; ++count)
    // {
    //     printf("Enter dollars: ");
    //     scanf("%i", &dollars);
    //     printf("Enter cents: ");
    //     scanf("%i", &cents);
    //     printf("$%.2i.%.2i\n\n", dollars, cents);
    // }

    // -----------------------------------------------------------------------------------------------
    // creating the program that add the number like this 4653 ; 4+6+5+3 = ?

    int num, result = 0, i;
    printf("enter the number to add the each number : ");
    scanf("%i", &num);
    for (i = 1; num > 0; ++i)
    {
        result += num % 10;
        num /= 10;
    }
    printf("the sum of each digit of this number equal to %i \n", result);
    

    return 0;
}
