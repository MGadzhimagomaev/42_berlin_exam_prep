char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return((char *)s1);
			i++;
		}
		s1++;
	}
	return ("/0");
}

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%p\n", ft_strpbrk("Hello","kfdjld"));
	printf("%p\n", strpbrk("Hello","kfdjld"));
	return 0;
}
