#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc(i * sizeof(char) + 1);
	j = 0;
	i = 0;
	while (src[i] != '\0')
	{
		copy[j] = src[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
