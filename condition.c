#include <stdio.h>

int main(void)
{

    // let's try some condition formating with if and else

    int age;

    printf("enter your age here : ");
    scanf("%d", &age);

    if(age < 0){
        printf("please enter corract age ");
    }
    else if(age <= 17){
        printf("your are underage ");
    }
    else if(age >= 60){
        printf("your are too old ");
    }
    else{
        printf("your can drive ");
    }


        return 0;
}