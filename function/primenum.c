#include<stdio.h>
void prime(int num);
void prime(int num){
    int i,z;
    i=2;
    while (num>i)
    {
    if (num%2==0)
    {
        z=1;
        break;
    }
    i++;}
    if (z==1)
    {
     printf("%d is not a prime number",num);
    }
    else{
        printf("%d is a prime number",num);
    
    
    }
    
}
int main(){
    int x;
    printf("ENTER NUMBER:");
    scanf("%d",&x);
    prime(x);
    return 0;
}