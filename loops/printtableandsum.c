#include<stdio.h>
int main()
{
    int i,num,sum,res;
    i=1;
    sum=0;
    printf("Enter Number:");
    scanf("%d",&num);
    printf("THE TABLE OF %d is\n",num);
    while(i<=10){
        res=num*i;
        sum=sum+res;
        printf("%d\n",res);
        i++;
        }
        printf("\nTHE SUM OF ALL THE NUMBERS ARE : %d", sum);
    return 0;
}