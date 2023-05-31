/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:10:21 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/25 13:32:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(void)
{
	t_node	*tmp;

	tmp = stack()->stk_b;
	stack()->stk_b = stack()->stk_b->next;
	tmp->next = stack()->stk_a;
	stack()->stk_a = tmp;
	stack()->a_size += 1;
	stack()->b_size -= 1;
	write(1, "pa\n", 3);
}

void	push_b(void)
{
	t_node	*tmp;
	
	tmp = stack()->stk_a;
	stack()->stk_a = stack()->stk_a->next;
	tmp->next = stack()->stk_b;
	stack()->stk_b = tmp;
	stack()->b_size += 1;
	stack()->a_size -= 1;
	if (stack()->b_size == 1)
		stack()->last_b = tmp;
	write(1, "pb\n", 3);
}
