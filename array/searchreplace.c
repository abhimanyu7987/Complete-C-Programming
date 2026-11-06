#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
     int s,r,i;

     printf("ENTER NO. WHICH YOU WANT TO CHANGE = ");
     scanf("%d",&s);

    printf("ENTER NO. WHICH YOU WANT TO REPLACE = ");
     scanf("%d",&r); 
     for( i = 0; i < 5; i++)
     {
        if (arr[i]==s)
        {
            arr[i]=r;
        }
        
     }
     printf("UPDATED NAME:");

     for ( i = 0; i < 5; i++)
     {
        printf(" %d",arr[i]);
     }
     

    return 0;
}