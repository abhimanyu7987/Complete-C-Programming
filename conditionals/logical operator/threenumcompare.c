#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE FIRST NO. =");
    scanf("%d",&a);
     printf("ENTER THE SECOND NO. =");
    scanf("%d",&b);
     printf("ENTER THE THIRD NO. =");
    scanf("%d",&c);

    if((a>b)&&(a>c)){
        printf("FIRST NUMBER IS GREATER");
    }
    else if((b>a)&&(b>c)){
        printf("SECOND NUMBER IS GREATER");
    }
    else{
        printf("THIRD NUMBER IS GREATER");
    }


    return 0;
}