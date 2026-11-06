#include<stdio.h>
int main(){
    int i,j;
    i = 1;
    while(i<=5){
       j=5;
       while(j>=1){
        printf("%d%d\t", i,j);
        j--;
       }
       printf("\n");
       i++;
    }

    return 0;
}