#include <stdio.h>

#define LOWER_A 97
#define LOWER_Z 122

char get_uppercase(char letter)
{
    return (letter >= LOWER_A && letter <= LOWER_Z) ? letter - 32 : 0;
};

int main(void)
{
    char alphabet[27] = {0};
    char uppercase = 0;

    for(int letter = LOWER_A; letter <= LOWER_Z; letter++) {
        uppercase = get_uppercase(letter);
        printf("%3i %c %c \n", letter, letter, uppercase);
    };
};