/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:55:57 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/23 13:51:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stk_node
{
	int					nbr;
	struct s_stk_node	*next;
}	t_stk_node;

typedef struct s_stack
{
	int			a_size;
	int			b_size;
	t_stk_node	*stk_a;
	t_stk_node	*last_a;
	t_stk_node	*stk_b;
	t_stk_node	*last_b;
}	t_stack;

void		rotate_a(void);
void		rotate_b(void);
void		rrotate_a(void);
void		add_back(t_stk_node *new);
void		push_a(void);
void		push_b(void);
int			ft_atoi(const char *str);
t_stack		*stack(void);
t_stk_node	*new_node(int content);

#endif
