#include <stdio.h>

int main(void)
{
    int February;
    int days;
    printf("If this year is a leap year enter 1, else enter another integer: ");
    scanf("%d", &February);

    int is_leap = 29; days = 28;
    if (February == 1)
    {
        printf("Numbers of day in February equals %d", is_leap);
    }
    else
    {
        printf("Number of days in February is %d", days);
    }
    return 0;
}