#include<stdio.h>
int main(){
    int num,digit,z,n,sum,rem,i,pw,*p;
    digit = 0;
    printf("ENTER NUMBER : ");
    scanf("%d",&num);
    p=&num;
    z=*p;
    
    for(;*p>0;*p=*p/10){
        digit=digit+1;
    }
    *p=z;
    sum=0;
while(*p>0){
    rem=*p%10;
    i=1;
    pw=1;
    while(i<=digit){
        pw=pw*rem;
        i++;
    }
    sum =sum+pw;
    *p=*p/10;
}
*p=z;
if (z==sum)
{
    printf("%d is a armstrong number",z);
}else{
    printf("%d is not a armstrong number",z);
}

    return 0;
}