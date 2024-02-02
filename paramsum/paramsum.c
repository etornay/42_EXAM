#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}

int	main(int argc, char **argv)
{
	(void)	argv;
	if (argc > 0)
	{
		ft_putnbr(argc - 1);
	}
	/*else
		write(1, "0", 1);*/
	write(1, "\n", 1);
}
