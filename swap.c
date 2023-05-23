/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:13:39 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/23 13:56:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(void)
{
	t_stk_node	*tmp;

	tmp = stack()->stk_a->next;
	stack()->stk_a->next = tmp->next;
	tmp->next = stack()->stk_a;
	stack()->stk_a = tmp;
}