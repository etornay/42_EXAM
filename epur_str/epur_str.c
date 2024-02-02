#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	word;
	
	i = 0;
	word = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				word++;
				if ((argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t') && (word >= 2))
				{
					write(1, " ", 1);
					write(1, &argv[1][i], 1);
				}
				else
					write(1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		}
	}
	write(1, "\n", 1);
}
