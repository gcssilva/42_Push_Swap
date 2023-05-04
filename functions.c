/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/04 14:47:50 by codespace        ###   ########.fr       */
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
	print_stks();
	while (stack()->size_a > 3)
	{
		push_b();
		print_stks();
	}
	base_sort();
	print_stks();
	while (stack()->size_b > 0)
	{
		ft_sort();
		print_stks();
	}
}

void	base_sort(void)
{
	int	*tmp;

	tmp = stack()->stk_a;
	if (stack()->size_a == 2)
	{
		if (tmp[0] > tmp[1])
			swap_a();
	}
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

	i = 0;
	push_a();
	if (stack()->stk_a[0] < stack()->stk_a[1])
		return ;
	while (stack()->stk_a[0] > stack()->stk_a[i + 1] && (i + 1) < stack()->size_a)
		i++;
	if (i <= stack()->size_a / 2)
		down(i);
	else
		up(i);
}
