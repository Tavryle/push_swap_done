#include "push_swap.h"

int		check_if_dup(int argc, char **argv)
{
	int i;
	int j;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
