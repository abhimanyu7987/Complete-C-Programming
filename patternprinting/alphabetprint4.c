#include<stdio.h>
int main(){
    int i,j,n;
    i=1;
    n=5;
    while (i<=n)
    {
        j=1;
        while (j<=n)
        {
            if ((i==1 )|| (i==3) ||  (i==n) || (j==1) )
            {
                printf("*");
                
            }
            else{
                printf(" ");
         
            }
            j++;            
        }
        printf("\n");
        i++;
    }
    
     

    return 0;
}