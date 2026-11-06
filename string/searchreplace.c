#include<stdio.h>
int main()
{
    char s,r,a[100];
    int index;

    printf("ENTER YOUR NAME:");
    scanf("%s",a);

    printf("ENTER CHARACTER FROM WHICH YOU WANT TO REPLACE:\n");
    scanf(" %c",&s);

     printf("ENTER CHARACTER WHICH YOU WANT TO CHANGE :\n");
    scanf(" %c",&r);
    
    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==s)
        {
            a[i]=r;
        }
        

    }

    printf("UPDATED NAME IS: %s", a);
    
    return 0;
}