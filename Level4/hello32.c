// Time indicator
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL);  // Current time in seconds
    printf("Unix time: %ld\n", now);

    char *time_str = ctime(&now);  // Convert to readable string
    printf("Current time: %s", time_str);

    return 0;
}
