/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:10:21 by gsilva            #+#    #+#             */
/*   Updated: 2023/03/27 16:13:11 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(void)
{
	int	i;

	i = stack()->size_a;
	while (i > 0)
	{
		stack()->stk_a[i] = stack()->stk_a[i - 1];
		i--;
	}
	stack()->stk_a[0] = stack()->stk_b[0];
	while (i < stack()->size_b)
	{
		stack()->stk_b[i] = stack()->stk_b[i + 1];
		i++;
	}
	stack()->size_a += 1;
	stack()->size_b -= 1;
	write(1, "pa", 2);
}

void	push_b(void)
{
	int	i;

	i = stack()->size_b;
	while (i > 0)
	{
		stack()->stk_b[i] = stack()->stk_b[i - 1];
		i--;
	}
	stack()->stk_b[0] = stack()->stk_a[0];
	while (i < stack()->size_a)
	{
		stack()->stk_a[i] = stack()->stk_b[i + 1];
		i++;
	}
	stack()->size_b += 1;
	stack()->size_a -= 1;
	write(1, "pb", 2);
}
