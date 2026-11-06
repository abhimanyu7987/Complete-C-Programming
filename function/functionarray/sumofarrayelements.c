#include<stdio.h>
void sum(int a[],int s);
void sum(int a[],int s){
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
        
    }
    printf("THE SUM OF ALL ARRAY ELEMENTTS ARE:%d",sum);
    
}
int main(){
    int ar[5] = {10,1,1,1,1};
    sum(ar,5);
    return 0;
}