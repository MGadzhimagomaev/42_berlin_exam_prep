#include <unistd.h>

int is_space(char c)
{
    if (c == 32 || c == 9 || c == 11)
        return (1);
    return (0);
}

void    last_word(char *str)
{
    int i;
    int start;

    i = 0;
    start = 0;
    while (str[i])
    {
        if (!(is_space(str[i])) && (i == 0 || is_space(str[i - 1])))
            start = i;
        i++;
    }
    while (str[start] && !(is_space(str[start])))
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}