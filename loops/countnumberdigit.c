#include<stdio.h>
int main()
{
    int num,digit,n; 
    
    printf("Enter A Number: ");
    scanf("%d",&num);
    digit = 0;
    n = num;
    while(n>0){
        digit=digit+1;
        n= n/10;
    }
    printf("THE DIGIT OF A GIVEN NUMBER IS : %d", digit);
    
    return 0;
}