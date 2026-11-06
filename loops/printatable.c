#include<stdio.h>
int main()
{
int i,res,num;
i=1;

  printf("Enter A Number :");
  scanf("%d",& num);
while(i<=10){

    res = num*i;
    printf("%d\n",res);
    
    i++; 
}
    return 0;
}