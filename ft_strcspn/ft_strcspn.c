#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	t;
	int	x;

	t = 0;
	x = 0;
	while (reject[x] != '\0')
	{
		while (s[t] != '\0')
		{
			if (s[t] == reject[x])
				return (t);
			t++;
		}
		s++;
	}
	return ((size_t)t);
}

/*#include <stdio.h>

int	main(void)
{
	const char s[] = "Hola bon dia";
	const char reject[] = "lfgr";
	size_t t = ft_strcspn(s, reject);

	printf ("%zu", t);	
}*/
