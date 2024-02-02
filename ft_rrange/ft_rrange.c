#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int len = end - start;
	if (len < 0)
		len = -len;
	int	*i = malloc((len + 1) * sizeof(int));
	int	start1;
	int	end1;
	int	save;
	
	save = 0;
	start1 = start;
	end1 = end;
	if (end1 < start1)
	{
		while (end1 <= start1)
		{
			i[save] = end1;
			end1++;
			save++;
		}
	}
	else
	{
		while (start1 <= end1)
		{
			i[save] = end1;
			end1--;
			save++;
		}
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	size;
	int	i;
	int	j;
	int	k;

	i = 0;
	start = 6;
	end = -6;
	j = start;
	if (j < 0)
		j = -j;
	k = end;
	if (k < 0)
		k = -k;
	size = j + k + 1;
	if (size < 0)
		size = -size;
	int *array = ft_rrange(start, end);
	while (i < size)
		printf("%d ", array[i++]);
}*/
