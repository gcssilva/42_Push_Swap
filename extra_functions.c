/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:16:12 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/04 14:48:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	long int	s;
	long int	nbr;

	s = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str++ - 48);
		if (nbr > 2147483648)
		{
			if (s > 0)
				return (-1);
			return (0);
		}
	}
	return (nbr * s);
}

void	down(int i)
{
	int	j;

	j = i;
	swap_a();
	i--;
	while (i-- > 0)
	{
		rotate_a();
		swap_a();
	}
	while (--j > 0)
		rrotate_a();
}

void	up(int i)
{
	while (i-- > 0)
	{
		rrotate_a();
		swap_a();
	}
	while (--i > 0)
		rotate_a();
}

void	print_stks(void)
{
	int	i;

	i = 0;
	while (i < stack()->size_a || i < stack()->size_b)
	{
		printf("%d\t%d\n", stack()->stk_a[i], stack()->stk_b[i]);
		i++;
	}
	printf("\n\n");
}
