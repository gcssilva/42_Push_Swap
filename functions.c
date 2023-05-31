/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/25 14:27:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack(void)
{
	static t_stack _stk;
	
	return(&_stk);
}

t_node	*new_node(int content)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->nbr = content;
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

// void	push_swap(void)
// {
// 	if (stack()->stk_a->nbr < stack()->stk_a->next->nbr && stack()->stk_a->nbr < stack()->last_a->nbr)
// 	{
// 		push_b();
// 		write(1, "pb\n", 3);
// 	}
// 	else if (stack()->stk_a->next->nbr < stack()->stk_a->nbr && stack()->stk_a->next->nbr < stack()->last_a->nbr)
// 	{
// 		if (stack()->stk_b->nbr < stack()->stk_b->next->nbr)
// 			ft_ss();
// 		else
// 		{
// 			swap_a();
// 			write(1, "sa\n", 3);
// 		}
// 		push_b();
// 		write(1, "pb\n", 3);
// 	}
// }

void	ft_ss(void)
{
	swap(stack()->stk_a, 0);
	swap(stack()->stk_b, stack()->last_b);
	write(1, "ss\n", 3);
}

void	ft_rr(void)
{
	rotate(stack()->stk_a, stack()->last_a);
	rotate(stack()->stk_b, stack()->last_b);
	write(1, "rr\n", 3);
}

void	ft_rrr(void)
{
	rrotate(stack()->stk_a, stack()->last_a);
	rrotate(stack()->stk_b, stack()->last_b);
	write(1, "rrr\n", 4);
}
