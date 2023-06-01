/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:13:39 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/01 18:07:42 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_node *first, t_node *last, int c)
{
	t_node	*tmp;

	tmp = first->next;
	first->next = tmp->next;
	tmp->next = first;
	if (c == 'a')
		stack()->stk_a = tmp;
	else
		stack()->stk_b = tmp;
	if (last && stack()->b_size == 2)
		stack()->last_b = stack()->stk_b->next;
}

void	swap_a(void)
{
	swap(stack()->stk_a, 0, 'a');
	write(1, "sa\n", 3);
}

void	swap_b(void)
{
	swap(stack()->stk_b, stack()->last_b, 'b');
	write(1, "sb\n", 3);
}

void	ss(void)
{
	swap(stack()->stk_a, 0, 'a');
	swap(stack()->stk_b, stack()->last_b, 'b');
	write(1, "ss\n", 3);
}
