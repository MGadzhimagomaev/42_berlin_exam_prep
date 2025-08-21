unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char   res;
    int             i;

    i = 8;
    while (i--)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return (res);
}

#include <unistd.h>

int main()
{
    char    bit;
    int     i;
    unsigned char   res;

    i = 8;
    bit = 0;
    res = reverse_bits((unsigned char)5);
    while (i--)
    {
        bit = (res >> i & 1) + 48;
        write (1, &bit, 1);
    }
    write (1, "\n", 1);
    return (0);
}