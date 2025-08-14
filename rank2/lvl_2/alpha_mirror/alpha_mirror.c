#include <unistd.h>

void    alpha_mirror(char *str)
{
    char    c;

    c = 0;
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            if (*str <= 'M')
                c = *str + 2 * (13 - *str + 'A') - 1;
            else if (*str >= 'N')
                c = *str + 2 * ('Z' - *str - 13) + 1;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            if (*str <= 'm')
                c = *str + 2 * (13 - *str + 'a') - 1;
            else if (*str >= 'n')
                c = *str + 2 * ('z' - *str - 13) + 1;
        }
        else 
            c = *str;
        write (1, &c, 1);
        str++;
    }
    write (1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    return (0);
}