#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	s[500];

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
			s[j++] = argv[1][i++];
		i = 0;
		while (argv[2][i] != '\0')
			s[j++] = argv[2][i++];
		s[j] = '\0';
		i = 0;
		write (1, &s[i], 1);
		i++;
		while (s[i] != '\0')
		{
			j = i;
			j--;
			while (j >= 0 && s[i] != s[j])
				j--;
			if (j == -1)
				write (1, &s[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
