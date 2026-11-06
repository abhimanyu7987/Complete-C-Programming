#include<stdio.h>
int main()
{
    int i,num,res;
    i=1;

    printf("Enter Number:");
    scanf("%d",&num);

    while(i<=10){
        res=num*i;
        if(res%2==0){
            printf("Even:%d\n",res);
        }
        else{
            printf("Odd:%d\n",res);
        }
        i++;
    }

    return 0;
}