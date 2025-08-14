#include <stdio.h>
#include <stdlib.h>

void    do_op(char *par1, char c, char *par2)
{
    if (c == '+')
        printf("%d", atoi((const char *)par1) + atoi((const char *)par2));
    if (c == '-')
        printf("%d", atoi((const char *)par1) - atoi((const char *)par2));
    if (c == '*')
        printf("%d", atoi((const char *)par1) * atoi((const char *)par2));
    if (c == '/')
        printf("%d", atoi((const char *)par1) / atoi((const char *)par2));
    if (c == '%')
        printf("%d", atoi((const char *)par1) % atoi((const char *)par2));
}

int main(int argc, char **argv)
{
    if (argc == 4)
        do_op(argv[1], *argv[2], argv[3]);
    printf("\n");
    return(0);
}