#include <stdlib.h>

int	nbrlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*s;
	int		size;

	size = nbrlen(nbr);
	s = malloc(nbrlen(nbr) * sizeof(char) + 1);
	if (nbr == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		s[2] = '1';
		s[3] = '4';
		s[4] = '7';
		s[5] = '4';
		s[6] = '8';
		s[7] = '3';
		s[8] = '6';
		s[9] = '4';
		s[10] = '8';
		s[11] = '\0';
		return (s);
	}
	if (nbr == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	s[size] = '\0';
	size--;
	while (nbr > 0)
	{
		s[size] = nbr % 10 + 48;
		nbr /= 10;
		size--;
	}
	return (s);
}

