#include <stdio.h>
int main()
{
    int i, j;

    
    printf("\n");
    for(i = 1; i <= 7; i++)
    {
        // A
        for(j = 1; j <= 7; j++)
        {
            if((j == 1 || j == 7) && i != 1 ||
               i == 1 && j > 1 && j < 7 ||
               i == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // B
        for(j = 1; j <= 7; j++)
        {
            if(j == 1 ||
               ((i == 1 || i == 4 || i == 7) && j < 7) ||
               (j == 7 && i != 1 && i != 4 && i != 7))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // H
        for(j = 1; j <= 7; j++)
        {
            if(j == 1 || j == 7 || i == 4)
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
        printf("  ");

        // N
        for(j = 1; j <= 7; j++)
        {
            if(j == 1 || j == 7 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // Y
        for(j = 1; j <= 7; j++)
        {
            if((i <= 4 && (j == i || j == 8 - i)) ||
               (i > 4 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // U
        for(j = 1; j <= 7; j++)
        {
            if((j == 1 || j == 7) && i < 7)
                printf("*");
            else if(i == 7 && j > 1 && j < 7)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    printf("\n   ABHIMANYU \n");

    return 0;
}
