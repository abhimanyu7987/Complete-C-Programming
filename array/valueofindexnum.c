#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE :");
    scanf("%d",&n);
    int index,i,a[n];

    printf("ENTER ARRAY ELEMENTS:");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }

    printf("ENTER INDEX NUMBER:");
    scanf("%d",&index);

    printf("INDEX VALUE: %d", a[index]);
    
    return 0;
}