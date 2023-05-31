/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:13:39 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/25 13:42:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node *first, t_node *last)
{
	t_node	*tmp;

	tmp = first->next;
	first->next = tmp->next;
	tmp->next = first;
	first = tmp;
	if (last && stack()->b_size == 2)
		stack()->last_b = stack()->stk_b->next;
}

void	swap_a(void)
{
	swap(stack()->stk_a, 0);
	write(1, "sa\n", 3);
}

void	swap_b(void)
{
	swap(stack()->stk_b, stack()->last_b);
	write(1, "sb\n", 3);
}
