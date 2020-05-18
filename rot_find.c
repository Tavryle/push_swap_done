#include "push_swap.h"

int		find_a_rot(int len, int position, char **rot)
{
	if(position > len / 2)
	{
		*rot  = ft_strcpy(*rot, "rra");
		if(len > 2)
			position = len - position;
	}
	else
		*rot = ft_strcpy(*rot, "ra");
	return (position);
}

int		find_b_rot(int len, int position, char **rot)
{
	if(position > len / 2)
	{
		*rot = ft_strcpy(*rot, "rrb");
		if(len > 2)
			position = len - position;
	}
	else
		*rot = ft_strcpy(*rot, "rb");
	return (position);
}
