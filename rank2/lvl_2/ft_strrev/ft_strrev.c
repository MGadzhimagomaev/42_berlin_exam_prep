char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (str[i] && i < len - 1)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return(str);
}

#include <stdio.h>
int	main ()
{
	char s[] = "Hello World";
	printf("%s\n", ft_strrev(s));
}