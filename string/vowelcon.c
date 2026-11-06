
#include <stdio.h>

int main()
{
    char a[100];
    int i;

    printf("ENTER YOUR NAME: ");
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
           a[i] == 'o' || a[i] == 'u' || a[i] == 'A' ||
           a[i] == 'E' || a[i] == 'I' || a[i] == 'O' ||
           a[i] == 'U')
        {
            printf("%c is Vowel\n", a[i]);
        }
        else
        {
            printf("%c is Consonant\n", a[i]);
        }
    }

    return 0;
}
