#include<stdio.h>
int main()
{
    int a[5],num,z,digit,sum,rem,i,p,j;
    printf("ENTER ARRAY ELEMENT:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0; i<5; i++)
    {
        num = a[i];
        z = num;
        digit = 0;
    
    while(num>0)
    {
        digit=digit+1;
        num=num/10;

    }
    num=z;
    sum=0;
    while(num>0)
    {
        rem=num%10;
        j=1;
        p=1;
        while(j<=digit)
        {
            p=p*rem;
            j=j+1;

        }
        sum=sum+p;
        num=num/10;
        
    }
    if(sum==z)
    {
        printf("%d is armstrong number\n",z);
        }
        else{
            printf("%d is not amrstorng number\n",z);

    }
}
    return 0;
}