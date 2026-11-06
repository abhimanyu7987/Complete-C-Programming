#include<stdio.h>
int main()
{
     char ch;
    printf("ENTER ALPHABET :");
    scanf(" %c",&ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        printf("Alphabet Is Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}