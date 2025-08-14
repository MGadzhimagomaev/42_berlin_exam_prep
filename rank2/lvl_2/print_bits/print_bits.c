#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
    char bit;
    int i;

    bit = 0;
    i = 8;
    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write (1, &bit, 1);
    }
}

int main()
{
    print_bits(1);
    printf("\n");
    print_bits(2);
    printf("\n");
    print_bits(70);
    printf("\n");
    print_bits(100);
    printf("\n");
}