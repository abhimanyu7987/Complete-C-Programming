
#include <stdio.h>

int main()
{
    char name[100];
    int i, len = 0;

    printf("ENTER YOUR NAME: ");
    scanf("%s", &name);

    for(i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

   

    return 0;
}
