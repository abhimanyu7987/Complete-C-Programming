#include<stdio.h>

int pallindrom(int num);

int pallindrom(int num){
    int sum,rem,n;
    sum = 0;
    n=num;
    while (num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if (n==sum)
    {
        printf("%d is pallindrom",n);
    }
    else{
        printf("%d is not a pallindrom",n);
    }
    return 0;
}
int main(){

    int x ;
    printf("ENTER NUMBER:");
    scanf("%d",&x);
    pallindrom(x);
    
    return 0;
}