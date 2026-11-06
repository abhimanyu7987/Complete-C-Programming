#include<stdio.h>
void sr(int a[],int s);
void sr(int a[],int s){ 
    int f,r;
    printf("SELECT NUMBER:");
    scanf("%d",&f);
     printf("ENTER NUMBER WHICH YOU WANT TO REPLACE WITH SELECTED NUMBER:");
    scanf("%d",&r);

    for(int i=0;i<s;i++){
        if (f==a[i])
        {
            a[i]=r;
        }
       
    }
     printf("UPDATED ARRAY :");
     for (int i = 0; i < s; i++)
     {
        printf("%d\t",a[i]);
     }
     
}
    int main(){
    int ar[5];
    printf("ENTER ARRAY ELEMENTS:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",& ar[i]);
    }
    
    sr(ar,5);
    return 0;
}