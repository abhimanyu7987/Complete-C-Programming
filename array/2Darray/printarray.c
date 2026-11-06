
#include <stdio.h>

int main()
{
    int n, o;

    printf("ENTER SIZE 1: ");
    scanf("%d", &n);

    printf("ENTER SIZE 2: ");
    scanf("%d", &o);

    int a[n][o];

    printf("ENTER ARRAY ELEMENTS:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("ARRAY ELEMENTS ARE:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
