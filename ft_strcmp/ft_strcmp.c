int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "perra";
	char	s2[] = "perro";

	ft_strcmp(s1, s2);
	printf("%i", ft_strcmp(s1, s2));
}*/
