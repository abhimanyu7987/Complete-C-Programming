#include<stdio.h>
int main(){
    char i,j;
    i='E';
    while (i>='A')
    {
        j='A';
        while (j<=i)
        {
            printf("%c",j);
            j++;
        }
        printf("\n");
        i--;
    }
    
    return 0;
}