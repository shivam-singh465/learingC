#include <stdio.h>
int main()
{
    /*
    for(int i = 1; i<=5; i++){
        for(int j= 1;j<=5; j++){
               if(j<=i){
                printf("*");
               }
               else{
                printf(" ");
               }
            }
            printf("\n");
        }


        */

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (j>=6-i && j<=5)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (j>=i && j<=5)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for(int i = 1; i<=4; i++){
    //        for(int j= 1;j<=4; j++){
    //               if(j<=i){
    //                printf("%d",i+1-j);
    //               }
    //               else{
    //                printf(" ");
    //               }
    //            }
    //            printf("\n");
    //        }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if(j>=i&&j<=5){
                printf("%c",65+j-i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}