/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:16:55 by gsilva            #+#    #+#             */
/*   Updated: 2023/04/11 15:17:44 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(void)
{
	int	tmp;
	int	i;

	tmp = stack()->stk_a[0];
	i = 0;
	while (++i < stack()->size_a - 1)
		stack()->stk_a[i - 1] = stack()->stk_a[i];
	stack()->stk_a[stack()->size_a - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rotate_b(void)
{
	int	tmp;
	int	i;

	tmp = stack()->stk_b[0];
	i = 0;
	while (++i < stack()->size_b - 1)
		stack()->stk_b[i - 1] = stack()->stk_b[i];
	stack()->stk_b[stack()->size_b - 1] = tmp;
	write(1, "rb\n", 3);
}

void	rrotate_a(void)
{
	int	tmp;
	int	i;

	tmp = stack()->stk_a[stack()->size_a - 1];
	i = stack()->size_a - 1;
	while (--i > 0)
		stack()->stk_a[i] = stack()->stk_a[i - 1];
	stack()->stk_a[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrotate_b(void)
{
	int	tmp;
	int	i;

	tmp = stack()->stk_b[stack()->size_b - 1];
	i = stack()->size_b - 1;
	while (--i > 0)
		stack()->stk_b[i] = stack()->stk_b[i - 1];
	stack()->stk_b[0] = tmp;
	write(1, "rra\n", 4);
}
