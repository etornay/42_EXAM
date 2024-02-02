#include <unistd.h>
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *s = argv[1];
		int len = 0;
		while (s[len])
		{
			len++;
		}
		len--;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[len] == ' ' || s[len] == '\t')
			len--;
		while (i <= len)
		{
			if (s[i] == ' ')
			{
				while (s[i] == ' ' || s[i] == '\t')
					i++;
				write(1, "   ", 3);
			}
			write(1, &s[i++], 1);
		}
	}
	write(1, "\n", 1);
}
