#include<stdio.h>
int main()
{
    int num;
    printf("ENTER NUMBER =");
    scanf("%d", & num);
    if (num%2==0)
    {
        printf("EVEN");
    } if (num%2==1)
    {
     printf("ODD");
    }
   return 0; 
    
}