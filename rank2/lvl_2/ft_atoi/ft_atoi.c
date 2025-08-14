#include <stdio.h>

int ft_is_space(char s)
{
    return ((s >= 9 &&  s <= 13) || s == 32 ? 1 : 0);
}

int ft_is_digit(char s)
{
    return (s >= 48 &&  s <= 57 ? 1 : 0);
}

int ft_atoi(const char *str)
{
    int n;
    int i;
    int s;

    i = 0;
    n = 0;
    s = 1;
    while (ft_is_space(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (ft_is_digit(str[i]))
    {
        n *= 10;
        n += str[i] - '0';
        i++;
    }
    return (n*s);
}

int main()
{
    printf("%d\n", ft_atoi("   -32145"));
}