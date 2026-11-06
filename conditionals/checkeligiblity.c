#include<stdio.h>
int main()
{
    int age;
    printf("ENTER AGE=");
    scanf("%d", & age);
    if (age>=18)
    {
        printf("YOUR ARE ELIGIBLE FOR VOTE AND DRIVING LICENSE");
    } if (age<18)
    {
     printf("YOU ARE NOT ELIGIBLE FOR VOTE AND DRIVING LICENSE");
    }
   return 0; 
    
}