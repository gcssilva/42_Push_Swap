/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:51:17 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 16:51:20 by gsilva           ###   ########.fr       */
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

void	add_back_c(t_node *new)
{
	if (!stack()->stk_c)
	{
		stack()->stk_c = new;
		stack()->last_c = new;
		return ;
	}
	stack()->last_c->next = new;
	stack()->last_c = new;
}

void	create_sorted(void)
{
	t_node	*temp;
	int		i;
	int		nb;
	int		last;

	last = INT_MAX;
	i = 0;
	while (i++ < stack()->a_size)
	{
		nb = INT_MIN;
		temp = stack()->stk_a;
		while (temp)
		{
			if (temp->nbr > nb && temp->nbr < last)
				nb = temp->nbr;
			temp = temp->next;
		}
		add_back_c(new_node(nb));
		last = nb;
	}
}