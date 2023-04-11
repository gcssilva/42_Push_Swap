/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/03/28 14:41:51 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack(void)
{
	static t_stack	_s;

	return (&_s);
}

void	push_swap(void)
{
	while (stack()->size_a > 3)
	{
		push_b();
	}
	base_sort();
	while (stack()->size_b > 0)
		ft_sort();
}

void	base_sort(void)
{
	int	*tmp;

	tmp = stack()->stk_a;
	if (tmp == 2)
		if (tmp[0] > tmp[1])
			swap_a();
	else
	{
		if (tmp[0] > tmp[1] && tmp[0] > tmp[2])
			rotate_a();
		else if (tmp[1] > tmp[0] && tmp[1] > tmp[2])
			rrotate_a();
		if (tmp[0] > tmp[1])
			swap_a();
	}
}

void	ft_sort(void)
{
	int	i;
	int	size;
	int	*tmp;

	i = 1;
	size = stack()->size_a;
	tmp = stack()->stk_a;
	push_a();
	if (tmp[0] < tmp[1])
		return ;
	while (i < size && tmp[0] > tmp[i])
		i++;
	if (i < size / 2)
	{
		swap_a();
		i--;
		while (i-- < 0)
		{
			rotate_a();
			swap_a();
		}
	}
	else
	{
		while (size > i)
	}
}
