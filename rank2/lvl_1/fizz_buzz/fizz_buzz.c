#include <unistd.h>

int main()
{
    int     x;
    char    x1;
    char    x2;

    x = 0;
    while (++x <= 100)
    {
        if (!(x % 3 == 0 || x % 5 == 0))
        {
            x2 =  x % 10 + '0';
            if (x < 10)
                write (1, &x2, 1);
            else if (x < 100)
            {
                x1 = x / 10 + '0';
                write (1, &x1, 1);
                write (1, &x2, 1);
            }
            else
                write (1, "100", 3);
        }
        else
        {
            if (x % 3 == 0)
                write (1, "fizz", 4);
            if (x % 5 == 0)
                write (1, "buzz", 4);
        }
        write (1, "\n", 1);
    }
    return (0);
}