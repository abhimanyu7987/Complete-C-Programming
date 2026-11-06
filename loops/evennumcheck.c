#include<stdio.h>
int main()
{
    int i,j;
    i = 0;
    j = 20;

    printf("THE EVEN NUMBERS FROM 1 TO 20 WILL BE \n");
    while(i<=j){
        printf("%d\n",i);
        i=i+2;
    }

    return 0;
}