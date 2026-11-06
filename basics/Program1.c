#include <stdio.h>
int main()
{
    int n;
    printf("enter array size = ");
    scanf("%d", &n);
    int a[n], i;
    printf("enter array element = ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nPrint Array = ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}