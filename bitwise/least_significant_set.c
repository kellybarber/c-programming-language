#include <stdio.h>

void check_least_sig_set(int number)
{
    printf("%i \n", number & 1);
}

int main(void)
{
    int max[5] = {200, 50, 223, 543, 5};

    for(int i = 0; i < 5; i++) {
        check_least_sig_set(max[i]);
    }

    return 0;
}