int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	j;

	i = 0;
	j = 0;
	if (!tab)
		return (0);
	
	while (i < len)
	{
		if (j < tab[i])
			j = tab[i];
		i++;
	}
	return (j);
}

