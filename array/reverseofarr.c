#include<stdio.h>
int main()
{
    char arr[5]={'p','a','l','a','k'};

    for(int i = 4;i>=0;i--){
        printf("%c", arr[i]);
    }
    return 0;
}