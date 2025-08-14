#include <stdio.h>

int is_power_of_2(unsigned int   n)
{
    return (((n != 0) && ((n & (n - 1)) == 0)) ? 1 : 0);
}

int main () //(int argc, char **argv)
{
   //if (argc == 2)
   //     printf("%d\n", is_power_of_2(*argv[1]));
   printf("%d\n", is_power_of_2(1));
   printf("%d\n", is_power_of_2(2));
   printf("%d\n", is_power_of_2(3));
   printf("%d\n", is_power_of_2(4));
   printf("%d\n", is_power_of_2(5));
   printf("%d\n", is_power_of_2(7));
   printf("%d\n", is_power_of_2(16));
   printf("%d\n", is_power_of_2(355));
   printf("%d\n", is_power_of_2(512));
}