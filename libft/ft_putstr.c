/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:54:33 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/14 10:03:11 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		write(1, "NULL", 6);
	else
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
