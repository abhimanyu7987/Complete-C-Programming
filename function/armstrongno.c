#include<stdio.h>

int armstrong(int num);

int armstrong(int num){
    int rem,sum,n;
    sum=0;
    n=num;
    while (num>0)
    {
        rem=num%10;
        sum=(rem*rem*rem)+sum;
        num=num/10;
    }
    if (n==sum)
    {
        printf("%d is a armstrong number", n);
    }else{
        printf("%d is not a armstrong number",n);
    }
    return 0;
    
}

int main(){
    int x;
    printf("ENTER A NUMBER:");
    scanf("%d",&x);
    armstrong(x);
    return 0;
}