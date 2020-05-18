#include "push_swap.h"

void	exc_sa_ch(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a_size < 2)
		return ;
	tmp = stacks->a_stack[0];
	stacks->a_stack[0] = stacks->a_stack[1];
	stacks->a_stack[1] = tmp;
}

void	exc_sb_ch(t_stacks *stacks)
{
	int	tmp;

	if (stacks->b_size < 2)
		return ;
	tmp = stacks->b_stack[0];
	stacks->b_stack[0] = stacks->b_stack[1];
	stacks->b_stack[1] = tmp;
}

void	exc_ss_ch(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a_size > 1)
	{
		tmp = stacks->a_stack[0];
		stacks->a_stack[0] = stacks->a_stack[1];
		stacks->a_stack[1] = tmp;
	}
	if (stacks->b_size > 1)
	{
		tmp = stacks->b_stack[0];
		stacks->b_stack[0] = stacks->b_stack[1];
		stacks->b_stack[1] = tmp;
	}
}

void	exc_pa_ch(t_stacks *stacks)
{
	int i;

	if (stacks->b_size == 0)
		return ;
	i = stacks->a_size;
	while (i--)
		stacks->a_stack[i + 1] = stacks->a_stack[i];
	stacks->a_stack[0] = stacks->b_stack[0];
	i = 0;
	while (i++ <= stacks->b_size - 1)
		stacks->b_stack[i - 1] = stacks->b_stack[i];
	stacks->a_size++;
	stacks->b_size--;
}

void	exc_pb_ch(t_stacks *stacks)
{
	int i;

	if (stacks->a_size == 0)
		return ;
	i = stacks->b_size;
	while (i--)
		stacks->b_stack[i + 1] = stacks->b_stack[i];
	stacks->b_stack[0] = stacks->a_stack[0];
	i = 0;
	while (i++ <= stacks->a_size - 1)
		stacks->a_stack[i - 1] = stacks->a_stack[i];
	stacks->b_size++;
	stacks->a_size--;
}
