#include<stdio.h>
int main()
{
    int n,r,sum,num;
    printf("Enter A Number:");
    scanf("%d",&n);
    r=0;
    sum=0;
    num =n;
    while(n>0){
        r = n%10;
        sum = (r*r*r)+sum;
        n = n/10;
        
    }
    printf("SUM OF A NUMBER : %d\n", sum);
    
    if(num==sum){
        printf("NUMBER IS ARMSTRONG");
    }
    else{
        printf("IT IS NOT A ARMSTRONG NUMBER");
    }
    return 0;
}