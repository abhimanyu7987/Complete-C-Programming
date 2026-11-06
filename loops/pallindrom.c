#include<stdio.h>
int main(){
    int num,rem,sum,n;
    printf("Enter Number:");
    scanf("%d",&num);
    n=num;
    sum=0;
    while (num>0)
    {
        rem = num%10;
        sum =sum*10+rem;
        num=num/10;
    }
   if (n==sum)
   {
    printf("%d IS PALLINDROM ",n);
   }
   else
   {
    printf("%d IS NOT A PALLINDROM ",n);
   }
   
   return 0; 
    
}