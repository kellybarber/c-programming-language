#include <stdio.h>

int main(void)
{
    int number = 0, nth = 0;

    printf("Input number to set nth bit in: ");
    scanf("%d", &number);
    printf("Input n of nth bit: ");
    scanf("%d", &nth);

    number = number | (1 << nth);

    printf("Number after setting the %d bit: %d \n", nth, number);

    return 0;
}