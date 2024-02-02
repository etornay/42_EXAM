#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc >= 2)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][0] >= 'a' && argv[j][0] <= 'z')
					argv[j][0] -= 32;
				if (argv[j][i] == ' ' || argv[j][i] == '\t')
				{
					if (argv[j][i + 1] >= 'a' && argv[j][i + 1] <= 'z')
						argv[j][i + 1] -= 32;
				}
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
