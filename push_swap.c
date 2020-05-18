#include "push_swap.h"

int		main(int argc,char **argv)
{
	t_stacks	*stacks;

	if(argc > 1)
	{
		stacks = (t_stacks*)malloc(sizeof(t_stacks));
		check_argv(stacks, argv, argc);
		sort(stacks);
		delete_stacks(&stacks);
	}
	return (0);
}
