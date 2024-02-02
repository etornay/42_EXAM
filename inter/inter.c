#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            while (argv[2][j] != '\0')
            {
                k = i;
                while (k >= 0 && argv[1][i] != '\0')
                {
                    if (argv[1][i] == argv[1][k - 1])
                    {
                        i++;
                        break;
                    }
					else
                    	k--;
                }
                if (argv[1][i] == argv[2][j])
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                j++;
            }
			if (argv[1][i] == '\0')
				break;
            i++;
        }
    }
    write(1, "\n", 1);
}