#include<stdio.h>
int main()
{
    int num,i,res,k;
    for (k =2; k <= 9; k++)
    { num =k;
        i = 1;
     while(i<=10){
        res = num*i; 
     
        printf("%d\t", res);
         
        i++;
        
     }
     printf("\n");
    
    }
   
    
    return 0;
}