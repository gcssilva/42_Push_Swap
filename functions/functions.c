/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/01 18:05:45 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack(void)
{
	static t_stack	_stk;

	return (&_stk);
}

t_node	*new_node(int nbr)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->nbr = nbr;
	new_node->next = NULL;
	return (new_node);
}

void	add_back(t_node *new)
{
	if (!stack()->stk_a)
	{
		stack()->stk_a = new;
		stack()->last_a = new;
		return ;
	}
	stack()->last_a->next = new;
	stack()->last_a = new;
}

void	reduce_a(void)
{
	while (stack()->a_size > 3)
	{
		if (stack()->stk_a->next->nbr < stack()->stk_a->nbr
			&& stack()->stk_a->next->nbr < stack()->last_a->nbr)
		{
			if (stack()->b_size > 1 && stack()->stk_b->nbr < stack()->stk_b->next->nbr)
				ss();
			else
				swap_a();
			
		}
		else if (stack()->last_a->nbr < stack()->stk_a->nbr
			&& stack()->last_a->nbr < stack()->stk_a->next->nbr)
		{
			if (stack()->b_size > 1 && stack()->stk_b->nbr < stack()->last_b->nbr)
				rrr();
			else
				rrotate_a();
		}
		push_b();
		print_stks();
	}
}

void	base_sort(void)
{
	if (stack()->stk_a->nbr > stack()->stk_a->next->nbr
		&& stack()->stk_a->nbr > stack()->last_a->nbr)
	{
		if (stack()->b_size > 1 && stack()->stk_b->next->nbr
			< stack()->stk_b->nbr)
			rr();
		else
			rotate_a();
	}
	else if (stack()->stk_a->next->nbr > stack()->last_a->nbr
		&& stack()->stk_a->next->nbr > stack()->stk_a->nbr)
	{
		if (stack()->b_size > 1 && stack()->last_b->nbr > stack()->stk_b->nbr
			&& stack()->last_b->nbr > stack()->stk_b->next->nbr)
			rrr();
		else
			rrotate_a();
	}
	if (stack()->stk_a->nbr > stack()->stk_a->next->nbr)
	{
		if (stack()->b_size > 1 && stack()->stk_b->next->nbr > stack()->stk_b->nbr
			&& stack()->stk_b->next->nbr > stack()->last_b->nbr)
			ss();
		else
			swap_a();
	}
}

void	push_swap(void)
{
	reduce_a();
	if (stack()->a_size == 3)
		base_sort();
	else
	{
		if (stack()->stk_a->nbr > stack()->stk_a->next->nbr)
			swap_a();
	}
	print_stks();
}
