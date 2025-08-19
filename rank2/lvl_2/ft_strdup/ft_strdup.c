#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while(src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	printf("%s", ft_strdup("Hallo!"));
}