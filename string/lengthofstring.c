#include<stdio.h>
int main()
{
    char arr[50];
    printf("ENTER YOUR NAME:");
    scanf("%s",& arr);

    printf("NAME : %s", arr);
    int length = 0;
    for ( int i = 0; arr[i] != '\0'; i++)
    {
        length ++;
    }
     printf("\nLENGTH = %d", length);
    return 0;
}