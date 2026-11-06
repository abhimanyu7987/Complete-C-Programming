#include<stdio.h>
int main(){
    char x,*p;
    p=&x;
    printf("ENTER ALPHABET:");
    scanf(" %c",&x);
    if(*p=='a' ||*p=='e' || *p=='i'|| *p=='o'|| *p=='u' ){
        printf("%c is vowel",*p);
    }else{
        printf("%c is consonant ",*p);
    }

    return 0;
}