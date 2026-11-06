#include<stdio.h>
int main()
{
    int age;

    printf("Enter Age :");
    scanf("%d",&age);

    if(!(age>=18)){
        printf("You Are Not Eligible For Voting");
    }
    else{
        printf(" You Are Eligible For Voting");
    }
    return 0;
}