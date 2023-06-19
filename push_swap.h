/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:55:57 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 13:16:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_node
{
	int				nbr;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int			a_size;
	int			b_size;
	t_node		*stk_a;
	t_node		*last_a;
	t_node		*stk_b;
	t_node		*last_b;
	t_node		*stk_c;
	t_node		*last_c;
}	t_stack;

void		swap_a(void);
void		swap_b(void);
void		ss(void);
void		rotate_a(void);
void		rotate_b(void);
void		rr(void);
void		rrotate_a(void);
void		rrotate_b(void);
void		rrr(void);
void		add_back(t_node *new);
void		push_a(void);
void		push_b(void);
void		nbr_overflow(void);
void		ft_clean(void);
void		create_sorted(void);
int			ft_strcmp(char *s1, char *s2);
int			ft_atoi(const char *str);
int			check_input(char **argv);
int			ft_isdigit(int c);
int			is_sorted(void);
t_stack		*stack(void);
t_node		*new_node(int content);

void	push_swap(void);
void	base_sort(void);
void	reduce_a(void);
void		print_stks(void);

#endif
