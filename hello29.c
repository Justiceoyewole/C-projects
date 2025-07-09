// Programme to build a pyramid
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Height: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}