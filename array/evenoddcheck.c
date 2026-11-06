#include<stdio.h>
int main()
{
int a[5]={2,3,6,5,10};

for ( int i = 0; i < 5; i++)
{
    if(a[i]%2==0)
    {
printf("Even : %d\n",a[i]);
    }
    else{
        printf("Odd : %d\n",a[i]);
    }
}



    return 0;
}