#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		/*if (num == 1)
		{
			printf("%d\n", 1);
			return(0);
		}*/
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num = num / i;
				if (num >= i)
					printf("*");
				else
				{
					printf("\n");
					return (0);
				}
			}
			else
				i++;
		}
	}
	printf("\n");
}
