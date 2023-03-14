/*
    Recall that ints are 4 bytes... Let's say we're using an int to store
    the color of a pixel. We need 3 bytes for a pixel: red, green, blue,
    each of which go 0-255 (00-FF in hex, like you're used to seeing in
    CSS).

    Write a function that accepts 3 `unsigned char` arguments: r, g, and
    b, and returns an `unsigned int` where the least significant byte
    holds the red value, the second least significant byte is the green
    value, and the second most significant byte stores the blue value, and
    the most significant byte is zero. This can be done with bitwise
    operations or with a char array and memcpy. If you find one fairly
    easy, try the other way as well.
*/

#include <stdio.h>
#include <string.h>

int get_pixel_colour_bitwise(unsigned char red, unsigned char green, unsigned char blue) 
{
    unsigned char bytes[4] = {0x00, blue, green, red};
    unsigned int colour = 0;

    colour = (bytes[0]) | (bytes[1] << 8) | (bytes[2] << 16) | (bytes[3] << 24);

    printf("Bitwise: %i \n", colour);

    return colour;
};

int get_pixel_colour_memcpy(unsigned char red, unsigned char green, unsigned char blue) 
{
    unsigned char bytes[4] = {0x00, blue, green, red};
    unsigned int colour = 0;

    memcpy(&colour, bytes, sizeof(colour));

    printf("Memcpy: %i \n", colour);

    return colour;
};

int main(void) 
{
    unsigned char red = 0x69;
    unsigned char green = 0x8C;
    unsigned char blue = 0x58;
    unsigned int pixel_colour = 0;

    pixel_colour = get_pixel_colour_bitwise(red, green, blue);
    pixel_colour = get_pixel_colour_memcpy(red, green, blue);
};