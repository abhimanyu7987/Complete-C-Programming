#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE :");
    scanf("%d",&n);
    int value,i,a[n];

    printf("ENTER ARRAY ELEMENTS:");
    for ( i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }

   printf("ENTER VALUE:");
   scanf("%d",&value);
   for(int i=0;i<n;i++){
    if (value==a[i])
    {
        printf("INDEX NUMBER OF A VALUE IS:%d", i);
    }
    
    
   }

    return 0;
}