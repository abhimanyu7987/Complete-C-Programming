#include<stdio.h>
int main(){
    char i,j,s;
    i='A';
    while (i<='E')
    {
        s=1;
        while (s<='E'-i)
        {
            printf(" ");
            s++;
        }
        
        j='A';
        while (j<=i)
        {
            printf("%c",j);
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}