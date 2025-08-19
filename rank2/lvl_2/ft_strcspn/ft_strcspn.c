#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <string.h>
int	main(void)
{
	printf("%lu\n", ft_strcspn("Hello","hgfseas"));
	printf("%lu\n\n", strcspn("Hello","hgfseas"));
	printf("%lu\n", ft_strcspn("Hello","dsaH"));
	printf("%lu\n\n", strcspn("Hello","dsaH"));
	printf("%lu\n", ft_strcspn("Hello","vcxssazjjAEE"));
	printf("%lu\n\n", strcspn("Hello","vcxssazjjAEE"));
}