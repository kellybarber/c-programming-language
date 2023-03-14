#include <stdio.h>
#include <string.h>

void out(int i, int value) 
{
    char bytes[4] = {0};

    printf("Value %i: %10i %08x  ", i, value, value);

    memcpy(bytes, &value, sizeof(value));
    printf("%02hhx %02hhx %02hhx %02hhx  ", bytes[0], bytes[1], bytes[2], bytes[3]);

    int shifted = value;

    for(int i = 0; i < 8 * sizeof(value); i++) {
        printf(shifted & (1 << 31) ? "1" : "0");
        shifted = shifted << 1;       
    }

    printf("\n");
}

int main(void) 
{
    int x[10] = {3344, 4343, 17676, 53, 342, 4324, 24324, 111439, -43566, 456908};

    for(int i = 0; i < 10; i++) {
        out(i, x[i]);
    }
};