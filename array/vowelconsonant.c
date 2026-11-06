#include<stdio.h>
int main()
{
    char  arr[6] ={'a','e','i','o','u','b'};
    for(int j=0;j<6;j++){
        if(arr[j]=='a' || arr[j]=='e' || arr[j]=='i' || arr[j]=='o' || arr[j]=='u')
        {
            printf("%c is vowel\n",arr[j]);

        }
        else{
            printf("%c is consonant\n", arr[j]);
        }
    }
    return 0;
}