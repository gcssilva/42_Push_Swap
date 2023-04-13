/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:55:57 by gsilva            #+#    #+#             */
/*   Updated: 2023/04/13 14:53:33 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*stk_a;
	int	*stk_b;
	int	size_a;
	int	size_b;
}	t_stack;

t_stack	*stack(void);

void	push_a(void);

void	push_b(void);

void	swap_a(void);

void	swap_b(void);

void	rotate_a(void);

void	rotate_b(void);

void	rrotate_a(void);

void	rrotate_b(void);

void	base_sort(void);

void	print_stks(void);

void	ft_sort(void);

void	down(int i);

void	up(int i);

void	push_swap(void);

int		ft_atoi(const char *str);

#endif
