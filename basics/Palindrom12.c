#include <stdio.h>
int main()
{
    char name[100];
    int len = 0, i, count = 0, last;
    printf("Enter your name = ");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    printf("Name Length = %d\n", len);
    last = len - 1;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == name[last])
        {
            count++;
        }
        last--;
    }

    if (len == count)
    {
        printf("Palindrom = %s\n", name);
    }
    else
    {
        printf("Not Palindrom = %s\n", name);
    }
}