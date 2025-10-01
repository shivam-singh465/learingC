#include <stdio.h>
int addval(int arg1, int arg2)
{
    int arg3;

    arg3 = arg1 + arg2;
    printf("%d", arg3);
    return arg3;
}




int main()
{
    int val1, val2, returnValByAdd;
    printf("enter your value 1 :");
    scanf("%d", &val1);
    printf("enter your value 2 :");
    scanf("%d", &val2);

   returnValByAdd= addval(val1, val2);
    printf("the anser is = %d", returnValByAdd);
    return 0;
}



