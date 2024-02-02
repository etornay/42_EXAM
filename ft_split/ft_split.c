#include <stdlib.h>

char    **ft_split(char *str)
{
	char	**wea;
	int		word;
	int		i;
	int		j;
	int		k;
	int		l;

	word = 0;
	i = 0;
	k = 0;
	l = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
            i++;
		if ((str[i] != '\t' && str[i] != '\n' && str[i] != ' ') && str[i])
		{
			word++;
		}
		while ((str[i] != '\t' && str[i] != '\n' && str[i] != ' ') && str[i])
			i++;
	}
	wea = malloc(sizeof(char *) * word + 1);
	i = 0;
	while (str[i] != '\0')
    {
		while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
            i++;
		j = i;
	   	while ((str[i] != '\t' && str[i] != '\n' && str[i] != ' ') && str[i])
			i++;
		if (i > j)
		{
			wea[k] = malloc(sizeof(char) * (i - j + 1));
			while (i > j)
			{
				wea[k][l] = str[j];
				j++;
				l++;
			}
			wea[k][l] = '\0';
			k++;
		}
		l = 0;
    }
	wea[k] = NULL;
	return (wea);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "   	hola   como 		estas				 ";
	char	**cosa = ft_split(str);
	int	i;
	char *s;
	i = 0;
	while (cosa[i] != NULL)
	{
		s =  cosa[i];
		printf("%s", s);
		i++;
	}
}
