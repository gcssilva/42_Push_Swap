/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:13:39 by gsilva            #+#    #+#             */
/*   Updated: 2023/03/27 16:25:32 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(void)
{
	int	tmp;

	tmp = stack()->stk_a[0];
	stack()->stk_a[0] = stack()->stk_a[1];
	stack()->stk_a[1] = tmp;
	write(1, "sa", 2);
}

void	swap_b(void)
{
	int	tmp;

	tmp = stack()->stk_b[0];
	stack()->stk_b[0] = stack()->stk_b[1];
	stack()->stk_b[1] = tmp;
	write(1, "sb", 2);
}
