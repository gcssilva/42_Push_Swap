/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:16:55 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/25 13:34:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node *first, t_node *last)
{
	t_node	*tmp;

	tmp = first;
	first = first->next;
	tmp->next = 0;
	last->next = tmp;
	last = tmp;
}

static void	rrotate(t_node *first, t_node *last)
{
	t_node	*tmp;
	
	tmp = first;
	while (tmp->next->nbr != last->nbr)
		tmp = tmp->next;
	last->next = first;
	first = last;
	tmp->next = 0;
	last = tmp;
}

void	rotate_a(void)
{
	rotate(stack()->stk_a, stack()->last_a);
	write(1, "ra\n", 3);
}

void	rotate_b(void)
{
	rotate(stack()->stk_b, stack()->last_b);
	write(1, "rb\n", 3);
}

void	rrotate_a(void)
{
	rrotate(stack()->stk_a, stack()->last_a);
	write(1, "rra\n", 4);
}

void	rrotate_b(void)
{
	rrotate(stack()->stk_b, stack()->last_b);
	write(1, "rrb\n", 4);
}
