#include <stdio.h>

#define BITS sizeof(int) * 8;

// int main(void)
// {
//     int number = 0, nth = 0, checker = 0;

//     printf("Input number to get nth bit from: ");
//     scanf("%d", &number);
//     printf("Input n of nth bit: ");
//     scanf("%d", &nth);

//     checker = 1 << nth;

//     if (number & checker)
//         printf("Nth bit of %i is set (1) \n", number);
//     else 
//         printf("Nth bit of %i is not set (0) \n", number);
// 
//     return 0;
// }

int main(void)
{
    int number = 0, nth = 0, bit = 0;

    printf("Input number to get nth bit from: ");
    scanf("%d", &number);
    printf("Input n of nth bit: ");
    scanf("%d", &nth);

    bit = (number << nth) & 1;

    printf("The %d bit of %d is set to %d \n", nth, number, bit);

    return 0;
}