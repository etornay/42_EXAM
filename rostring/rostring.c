#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int words;

	i = 0;
	words = 0;
	if (argc >= 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		j = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		i--;
		k = i;
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		l = i;
		i = k;
		i++;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (i <= l)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write(1, " ", 1);
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
				   i++;	
			}
			words++;
			write(1, &argv[1][i], 1);
			i++;
		}
		if (words > 1)
			write(1, " ", 1);
		while (j <= k)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
