/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:57:22 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/31 17:31:27 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrotate(t_node *first, t_node *last, int c)
{
	t_node	*tmp;

	tmp = first;
	while (tmp->next->nbr != last->nbr)
		tmp = tmp->next;
	last->next = first;
	if (c == 'a')
		stack()->stk_a = last;
	else
		stack()->stk_b = last;
	tmp->next = 0;
	if (c == 'a')
		stack()->last_a = tmp;
	else
		stack()->last_b = tmp;
}

void	rrotate_a(void)
{
	rrotate(stack()->stk_a, stack()->last_a, 'a');
	write(1, "rra\n", 4);
}

void	rrotate_b(void)
{
	rrotate(stack()->stk_b, stack()->last_b, 'b');
	write(1, "rrb\n", 4);
}

void	ft_rrr(void)
{
	rrotate(stack()->stk_a, stack()->last_a, 'a');
	rrotate(stack()->stk_b, stack()->last_b, 'b');
	write(1, "rrr\n", 4);
}
