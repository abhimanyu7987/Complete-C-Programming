#include<stdio.h>
int main(){
    int i,sum;
    i =1;
    sum =0;
    printf("THE NUMBERS FROM 1 TO 10 WILL BE : \n");
    while(i<=10){
        sum=sum+i;
        printf(" %d\n",i);
        i++;
    }
    printf("THE SUM OF ALL THE NUMBERS WILL BE: %d",sum);
    return 0;
}