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

// int get_pixel_colour_memcpy(unsigned char red, unsigned char green, unsigned char blue) 
// {
//     unsigned char bytes[4] = {red, green, blue};
//     unsigned int colour = 0;

//     memcpy(&colour, bytes, sizeof(colour));

//     printf("Memcpy: %i %x \n", colour, colour);

//     return colour;
// };

int get_pixel_colour_bitwise(unsigned char red, unsigned char green, unsigned char blue) 
{
    unsigned int colour = 0;

    colour = red | (green << 8) | (blue << 16);

    printf("Bitwise: %i %x \n", colour, colour);

    return colour;
};

struct rgb {
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

struct rgb get_pixel_rgb(int colour)
{
    return (struct rgb) {
        .r = colour & 0xff,
        .g = (colour >> 8) & 0xff,
        .b = (colour >> 16) & 0xff,
    };
}

void get_pixel_rgb_pointers(unsigned char *r, unsigned char *g, unsigned char *b, unsigned int c) 
{
    *r = c & 0xff;
    *g = (c >> 8) & 0xff;
    *b = (c >> 16) & 0xff;
}

int main(void) 
{
    unsigned char red = 0x69;
    unsigned char green = 0x8C;
    unsigned char blue = 0x58;
    unsigned int pixel_colour = 0;

    pixel_colour = get_pixel_colour_bitwise(red, green, blue);

    struct rgb pixel_colour_int = get_pixel_rgb(pixel_colour);

    printf("%hhx %hhx %hhx \n", pixel_colour_int.r, pixel_colour_int.g, pixel_colour_int.b);

    get_pixel_rgb_pointers(&red, &green, &blue, 0xD96AA7);

    printf("%hhx %hhx %hhx \n", red, green, blue);
};