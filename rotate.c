/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:16:55 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/23 13:53:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(void)
{
	t_stk_node	*tmp;

	tmp = stack()->stk_a;
	stack()->stk_a = stack()->stk_a->next;
	tmp->next = 0;
	stack()->last_a->next = tmp;
	stack()->last_a = tmp;
}

void	rotate_b(void)
{
	t_stk_node	*tmp;

	tmp = stack()->stk_b;
	stack()->stk_b = stack()->stk_b->next;
	tmp->next = 0;
	stack()->last_b->next = tmp;
	stack()->last_b = tmp;
	
}

void	rrotate_a(void)
{
	t_stk_node	*tmp;
	
	tmp = stack()->stk_a;
	while (tmp->next->nbr != stack()->last_a->nbr)
		tmp = tmp->next;
	stack()->last_a->next = stack()->stk_a;
	stack()->stk_a = stack()->last_a;
	tmp->next = 0;
	stack()->last_a = tmp;
}

void	rrotate_b(void)
{
	t_stk_node	*tmp;
	
	tmp = stack()->stk_b;
	while (tmp->next->nbr != stack()->last_b->nbr)
		tmp = tmp->next;
	stack()->last_b->next = stack()->stk_b;
	stack()->stk_b = stack()->last_b;
	tmp->next = 0;
	stack()->last_b = tmp;
}
