#include <unistd.h>

void	inter(char	*s1, char	*s2)
{
	int	lookup[256];
	int	i;
	int	j;

	i = 0;
	while (i < 256)
		lookup[i++] = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && !lookup[s1[i] + '0'])
			{
				lookup[s1[i] + '0'] = 1;
				write(1, &s1[i], 1);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{

	if (argc == 3)
	{
		inter (argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
