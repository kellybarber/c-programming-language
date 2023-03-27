#include <stdio.h>

#define BITS sizeof(int) * 8

int main(void)
{
    int number = 0, msb = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    msb = 1 << (BITS - 1);

    if (number & msb) 
        printf("Most significant bit of %i is set (1) \n", number);
    else 
        printf("Most significant bit of %i is not set (0) \n", number);

    return 0;
}