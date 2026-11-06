#include<stdio.h>
int main()
{
    int num,r,n;
    
    r = 0;   
    printf("Enter Number:");
    scanf("%d",&num);
    n=num;
     printf("The Reverse Of A Digit Is :");
    while(n>0){
        r=n%10;
        n=n/10;
    
        printf("%d",r);
    }
    
    return 0;
}