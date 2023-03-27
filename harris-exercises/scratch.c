#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;
    int *p = &x;

    // printf("%zu %zu \n", sizeof(x), sizeof(y));
    printf("%i %i \n", x, y);
    *p = 6;
    printf("%i %i \n", x, y);
    p--;
    *p = 30;
    printf("%i %i \n", x, y);
}