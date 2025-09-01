#include <stdio.h>

int main()
{
    // we are using the scanf function to take input from the user
    char name[30];
    int age;

    printf("enter your name :");
    scanf("%s", name);

    printf("enter your age here :");
    scanf("%d" , &age);

    printf("name :%s\n" , name);
    printf("age : %d\n" , age);


    return 0;
}