/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/04/11 15:49:10 by gsilva           ###   ########.fr       */
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
	if (stack()->size_a == 2)
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

	i = 0;
	tmp = stack()->stk_a;
	push_a();
	if (tmp[0] < tmp[1])
		return ;
	while ((i + 1) < stack()->size_a && tmp[0] > tmp[i])
	{
		i++;
		printf("%d %d %d\n", i, tmp[0], tmp[i]);
	}
	if (i <= stack()->size_a / 2)
		down(i);
	else
		up(i);
}
