#include <stdio.h>

int main()
{
    
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter characters:\n");

    for(i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }

    printf("Length of array = %d", n);

    return 0;
}



