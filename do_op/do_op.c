#include <unistd.h>

void ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= (-1);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (sign * nbr);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '*')
			ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
		else if (argv[2][0] == '/')
            ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
		else if (argv[2][0] == '+')
            ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
		else if (argv[2][0] == '-')
            ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	}
	write(1, "\n", 1);
}

