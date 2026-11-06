#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the value of A:");
    scanf("%d",& a);

    printf("Enter the value of B:");
    scanf("%d", & b);
    c = a;
    a = b;
    b = c;

    printf(" AFTER SWAPPING \n");
    printf(" A = %d B = %d", a,b);
    return 0;
}