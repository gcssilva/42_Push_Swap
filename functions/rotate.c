/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:16:55 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/01 18:07:55 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_node *first, t_node *last, int c)
{
	t_node	*tmp;

	tmp = first;
	if (c == 'a')
		stack()->stk_a = first->next;
	else
		stack()->stk_b = first->next;
	tmp->next = 0;
	last->next = tmp;
	if (c == 'a')
		stack()->last_a = tmp;
	else
		stack()->last_b = tmp;
}

void	rotate_a(void)
{
	rotate(stack()->stk_a, stack()->last_a, 'a');
	write(1, "ra\n", 3);
}

void	rotate_b(void)
{
	rotate(stack()->stk_b, stack()->last_b, 'b');
	write(1, "rb\n", 3);
}

void	rr(void)
{
	rotate(stack()->stk_a, stack()->last_a, 'a');
	rotate(stack()->stk_b, stack()->last_b, 'b');
	write(1, "rr\n", 3);
}
