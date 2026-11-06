#include<stdio.h>
int main()
{
    int age;
     printf("ENTER AGE:");
     scanf("%d",& age);

     if(age>=18){
        printf("YOU ARE ELIGIBLE FOR VOTING AND DRIVING LICENSE");
     }else{
        printf("YOU ARE NOT ELIGIBLE FOR VOTING AND DRIVING LICENSE");
     }
     return 0;
}