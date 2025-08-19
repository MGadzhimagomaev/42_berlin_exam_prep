int ft_strspn(char *s1, char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s1[i])
	{
		j = 0;
		check = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%d\n", ft_strspn("Hello","dfghfdsfH"));
	printf("%lu\n\n", strspn("Hello","dfghfdsfH"));
	printf("%d\n", ft_strspn("Hello","asdhaevfdoHfl"));
	printf("%lu\n\n", strspn("Hello","asdhaevfdoHfl"));
	printf("%d\n", ft_strspn("Hello","hHasalgfved"));
	printf("%lu\n\n", strspn("Hello","hHasalgfved"));
}