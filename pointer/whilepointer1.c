#include<stdio.h>
int main(){
    int num,sum,rem,*p;
           sum=0;
           
           printf("ENTER A NUMBER:");
           scanf("%d",&num);
           p=&num;
           int n= num;
           while(*p>0){
            rem=*p%10;
            sum=sum*10+rem;
            *p=*p/10;
           }
           if(n==sum){
            printf("%d is pallindrom number ",n);

           }else{
            printf("%d is not a pallindrom number",n);
           }
           return 0;
}