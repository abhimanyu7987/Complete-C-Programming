#include<stdio.h>
void fabonacii(int a,int b);
void fabonacii(int a,int b){
    int res;
    printf("FABONACII SERIES IS:");
    for ( res = 0; res < 55; res=a+b)
    {
        printf(" %d",res);
        a=b;
        b=res;
    }

}
int main(){
    int x,y;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&x);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&y);
    fabonacii(x,y);
    return 0;
}