#include<stdio.h>
int main()
{
    int i,j;

    printf("ENTER FIRST NO. : ");
    scanf("%d",& i);
    printf("ENTER SECOND NO. :");
    scanf("%d",& j);

    printf("THE SERIES OF A DATA WILL BE \n");
    while(i>=j){
        printf("%d\n",i);
        i--;
    }

    return 0;
}