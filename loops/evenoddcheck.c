#include<stdio.h>
int main()
{
    int i =1;

    
    while(i<=20){
        if (i%2==0)
        {
            printf("EVEN NUMBER: %d\n", i);
        }
        else
        {
            printf("ODD NUMBER: %d\n", i);
        }
        
        i++;
    }

    return 0;
}