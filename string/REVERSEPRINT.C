#include<stdio.h>
int main()
{

char a[100];
printf("ENTER YOUR NAME:");
scanf("%s", a);
int length =0;
printf("THE REVERSE OF A NAME IS:"); 
for (int i = 0; a[i] !='\0'; i++)
{
    length++;
}

for (int i = length -1; i >=0; i--)
{
    printf(" %c",a[i]);
}


    return 0;
}