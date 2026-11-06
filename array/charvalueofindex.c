#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE:");
    scanf("%d",&n);
    int i,index;
    char a[n];
    printf("ENTER ARRAY ELEMENT:");
    for(i=0;i<n;i++){
        scanf(" %c",&a[i]);
    }
    printf("ENTER INDEX NUMBER:");
    scanf("%d",&index);
    printf("VALUE = %c", a[index]);
    return 0;
}