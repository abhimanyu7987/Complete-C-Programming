#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE:");
    scanf("%d",&n);
    int i;
    char value,a[n];
    printf("ENTER ARRAY ELEMENT:\n");
    for(i=0;i<n;i++){
        scanf(" %c",& a[i]);
    }
    printf("ENTER VALUE:");
    scanf(" %c",&value);

    for(i=0;i<n;i++){
        if(value==a[i]){
            printf("INDEX NUMBER OF A VALUE IS : %d",i);
        }
    }
    return 0;
}