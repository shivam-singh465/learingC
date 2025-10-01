#include <stdio.h>

int main()
{

    int x;
    printf("enter the value between the 1 to 5 : ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4 :
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;

    default:
        printf("invalid input please enter the number between 1 to 5\n");
        break;
    }

    printf("\n");
    return 0;
}