#include <unistd.h>

int	is_letter(char c)
{
	if (c == 32 || c == 9 || !(c <= 126 && c >= 33))
		return (0);
	return (1);
}

int	main (int	argc, char	**argv)
{
	int	x;

	x = 0;
	if (argc == 2)
	{
		while (argv[1][x] && is_letter(argv[1][x]) == 0)
			x++;
		while (argv[1][x] && is_letter(argv[1][x]) == 1)
			write (1, &argv[1][x++], 1);
	}
	write (1, "\n", 1);
	return (0);
}