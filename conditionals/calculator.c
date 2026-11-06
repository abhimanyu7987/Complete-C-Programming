#include<stdio.h>
int main()
{
    int a,b,op;
    int result;
    printf("ENTER FIRST VALUE:");
    scanf("%d",& a);
    printf("ENTER SECOND VALUE:");
    scanf("%d",& b);
    printf("ENTER OPERATION:\n");
    printf("press 1: add 2:sub 3:mul 4:div :" );
    scanf("%d",& op);

    if(op==1){
        result=a+b;
        printf("RESULT:%d",result);
    }else if(op==2){
        result=a-b;
        printf("RESULT:%d",result);
    }else if(op==3){
        result=a*b;
        printf("RESULT:%d",result);
    }else if(op==4){
        result=a/b;
        printf("RESULT:%d",result);
    }else{
        printf("INVALID OPERATION");
    }
    return 0;
}