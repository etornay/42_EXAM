#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int	size;
	int	save;

	save = 0;
	size = end - start;
	if (size < 0)
		size = -size;
	int	*i = malloc((size + 1) * sizeof(int));
	if (end < start)
	{
		while (end <= start)
		{
			i[save] = start;
			start--;
			save++;
		}
	}
	else
	{
		while (end >= start)
		{
			i[save] = start;
			start++;
			save++;
		}
	}
	return (i);
}
