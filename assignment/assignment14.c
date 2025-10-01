#include <stdio.h>
int main()
{

    // int fact = 1, num;
    // printf("enter the nunmber for find the factorial : ");
    // scanf("%d", &num);

    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }
    // printf("the factorial of %d is %d", num, fact);

    // int r=1,n=1, x ,i=10;
    // printf("enter the number : ");
    // scanf("%d", &x);
    // while (x > 0)
    // {
    //     x = x / 10;
    //     i = i * 10;
    //     n++;
    // }
    // printf("the digit of your number is : %d", n-1);

    // int x,prm;
    // printf("enter the number");
    // scanf("%d",&x);
    // for(int i = 2;i<x;i++){
    //     if(x%i==0){
    //         prm= 0;
    //         break;
    //     }
    //     else{
    //         prm= 1;
    //     }
    // }
    // if(prm){
    //     printf("%d is prime",x);

    // }
    // else{

    //     printf("%d is not prime",x);
    // }

    // int x ,r=0;
    // printf("enter a number : ");
    // scanf("%d",&x);
    // for(int i= 1;x>0;i++){
    //     r = r*10 + x%10;
    //     x= x/10;

    // }
    // printf("the resvers number of your number is %d",r);
    
        // int prm=0;
        // for (int i = 2; i < 100; i++)
        // {
        //     for (int j = 2; j < i; j++){
        //         if(i%j==0){
        //             prm= 0;
        //             break;
        //         }
        //         else{
        //             prm = 1;
        //         }
        //     }
        //     if(prm)
        //         printf("%2d is prime \n",i);
        // }





        // int prm=0 ,sn ,en;
        // printf("enter the staritng and ending number : ");
        // scanf("%d %d",&sn,&en);

        // for (int i = sn+1; i < en; i++)
        // {
        //     for (int j = 2; j < i; j++){
        //         if(i%j==0){
        //             prm= 0;
        //             break;
        //         }
        //         else{
        //             prm = 1;
        //         }
        //     }
        //     if(prm)
        //         printf("%2d is prime \n",i);
        // } 
        
        
        
        // int prm=0 ,sn ;
        // printf("enter the staritng number : ");
        // scanf("%d",&sn);

        // for (int i = sn+1; prm == 0; i++)
        // {
        //     for (int j = 2; j < i; j++){
        //         if(i%j==0){
        //             prm= 0;
        //             break;
        //         }
        //         else{
        //             prm = 1;
        //         }
        //     }
        //     if(prm)
        //         printf("the next prime number of your number is %2d  \n",i);
        // }
    


        //lcm


        // int x,y ,lcm;
        // printf("enter two number to find the lcm : ");
        // scanf("%d%d", &x,&y);
        // if(x<y){
        //     for(int i = x;i<=y*x;i++){
        //         if(i%x==0 && i%y==0){
        //             lcm = i;
        //             break;
        //         }
        //     }
        // }
        // else{
        //     for(int i = y;i<=x*y;i++){
        //         if(i%x==0 && i%y==0){
        //             lcm = i;
        //             break;
        //         }
        //     }
        // }
        // printf("the lcm of %d and %d is %d",x,y,lcm);
        


        //hcf

        // int a,b,hcf ,i ;
        // printf("enter two number to find the hcf : ");
        // scanf("%d%d", &a,&b);
        // if(a<b){
        //     for( i = a;i>=1;i--){
        //         if(a%i==0 && b%i==0){
        //             hcf = i;
        //             break;
        //         }
        //     }
        // }
        // else{
        //     for( i = b;i>=1;i--){
        //         if(a%i==0 && b%i==0){       
        //             hcf = i;
        //             break;
        //         }
        //     }
        // }
        // printf("the hcf of %d and %d is %d",a,b,hcf);   




        //pattern
        for(int i = 1;i<=5;i++){
            for(int j = 1;j<=5;j++){
                if(j<=i){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }




    printf("\n");
    return 0;
}