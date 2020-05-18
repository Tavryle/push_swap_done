#include "push_swap.h"

static	void		sort_3(t_stacks *stacks)
{
	int	max_i;

	if(stacks->a_size == 2)
	{
		sa(stacks);
		return ;
	}
	max_i = find_max_num(stacks->a_stack, stacks->a_size);
	if(max_i == 0)
		ra(stacks);
	if(max_i == 1)
		rra(stacks);
	if(stacks->a_stack[0] > stacks->a_stack[1])
		sa(stacks);
}

void		sort(t_stacks *stacks)
{
	if(is_it_sorted(stacks->a_stack, stacks->a_size) && stacks->b_size == 0)
		return ;
	if(stacks->a_size <= 3)
		return (sort_3(stacks));
	else
		sort_large(stacks);
}
