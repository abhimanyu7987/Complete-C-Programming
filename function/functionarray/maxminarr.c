#include<stdio.h>
 void maxmin(int a[],int s);
 void maxmin(int a[],int s){
    int max=a[0];
    int min=a[0];
    for (int i = 0;i<5; i++)
    {
        if (a[i]>max)
        {
            max=a[i];

        }
          if (a[i]<min)
       {
          min=a[i];
        }
    }
    printf("MAXIMUM ELEMENT:%d",max);
    printf("\n");

    printf("MINIMUM ELEMENT:%d",min);
  
}

int main()
{
    int ar[5] = {40, 60, 70, 90, 80};

    maxmin(ar, 5);

    return 0;
}