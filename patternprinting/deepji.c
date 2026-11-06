#include <stdio.h>

int main()
{
    int i, j;

    // D
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j==1 || (i==1 && j<5) || (i==7 && j<5) || (j==5 && i>1 && i<7))
                printf("* ");
            else
                printf("  ");
        }
        printf("   ");

        // E
        for(j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==4 || i==7)
                printf("* ");
            else
                printf("  ");
        }
        printf("   ");

        // E
        for(j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==4 || i==7)
                printf("* ");
            else
                printf("  ");
        }
        printf("   ");

        // P
        for(j=1; j<=5; j++)
        {
            if(j==1 || i==1 || i==4 || (j==5 && i>1 && i<4))
                printf("* ");
            else
                printf("  ");
        }
        printf("   ");

        // J
        for(j=1; j<=5; j++)
        {
            if(i==1 || j==3 || (i==7 && j<4) || (j==1 && i>4 && i<7))
                printf("* ");
            else
                printf("  ");
        }
        printf("   ");

        // I
        for(j=1; j<=5; j++)
        {
            if(i==1 || i==7 || j==3)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}