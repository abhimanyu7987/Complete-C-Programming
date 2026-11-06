
#include <stdio.h>

int main()
{
    int i, j;
    printf("\n");

    for(i = 1; i <= 7; i++)
    {
        // G
        for(j = 1; j <= 7; j++)
        {
            if((i == 1 || i == 7) && j > 1 && j < 7 ||
               (j == 1 && i > 1 && i < 7) ||
               (j == 7 && i >= 4 && i < 7) ||
               (i == 4 && j >= 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for(j = 1; j <= 7; j++)
        {
            if((j == 1 || j == 7) && i != 1 ||
               (i == 1 && j > 1 && j < 7) ||
               i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // R
        for(j = 1; j <= 7; j++)
        {
            if(j == 1 ||
               ((i == 1 || i == 4) && j < 7) ||
               (j == 7 && i > 1 && i < 4) ||
               (i == j && i >= 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // I
        for(j = 1; j <= 7; j++)
        {
            if(i == 1 || i == 7 || j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // M
        for(j = 1; j <= 7; j++)
        {
            if(j == 1 || j == 7 ||
               (i == j && i <= 4) ||
               (i + j == 8 && i <= 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for(j = 1; j <= 7; j++)
        {
            if((j == 1 || j == 7) && i != 1 ||
               (i == 1 && j > 1 && j < 7) ||
               i == 4)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    printf("\n       GARIMA \n");

    return 0;
}
