#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

void	print_hex(int	num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
	{
		print_hex(num / 16);
	}
	write(1, &hex[num % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
