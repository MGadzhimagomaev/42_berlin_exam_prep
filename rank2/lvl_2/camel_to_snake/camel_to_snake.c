#include <unistd.h>
#include <stdlib.h>

void    write_str(char  *str)
{
    while (*str)
        write(1, str++, 1);
}

int is_upper_case(char  c)
{
    return (c >= 'A' && c <= 'Z' ? 1 : 0);
}

int count_new_len(char  *str)
{
    int new_len;
    int i;

    new_len = 0;
    i = 0;
    while (str[i])
    {
        new_len++;
        if (is_upper_case(str[i]))
            new_len++;
        i++;
    }
    return(new_len);
}

void    camel_to_snake(char *str)
{
    int     len;
    char    *snake_case;
    int     i;
    int     j;

    len = count_new_len(str);
    i = 0;
    j = 0;
    snake_case = malloc(sizeof(char) * len + 1);
    while (str[i])
    {
        if (is_upper_case(str[i]))
        {
            snake_case[j] = '_';
            snake_case[++j] = str[i] + 32;
        }
        else
            snake_case[j] = str[i];
        j++;
        i++;
    }
    snake_case[len] = 0;
    write_str(snake_case);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
}