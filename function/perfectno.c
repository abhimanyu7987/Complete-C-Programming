#include<stdio.h>
void perfect(int num);
void perfect(int num){
    int sum,i;
    sum=0;
    i=1;
    while (i<num)
    {
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }if (num==sum)
    {
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
}
    int main(){
        int x;
       printf("ENTER NUMBER:");
       scanf("%d",&x);
       perfect(x);
       return 0;
    }
    
