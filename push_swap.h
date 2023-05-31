/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:55:57 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/24 15:25:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				nbr;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int			a_size;
	int			b_size;
	t_node	*stk_a;
	t_node	*last_a;
	t_node	*stk_b;
	t_node	*last_b;
}	t_stack;

void		swap_a(void);
void		swap_b(void);
void		rotate_a(void);
void		rotate_b(void);
void		rrotate_a(void);
void		rrotate_b(void);
void		add_back(t_node *new);
void		push_a(void);
void		push_b(void);
void		nbr_overflow(void);
void		ft_clean(void);
int			ft_strcmp(char *s1, char *s2);
int			ft_atoi(const char *str);
int			check_input(char **argv);
int			ft_isdigit(int c);
t_stack		*stack(void);
t_node	*new_node(int content);

void	print_stks(void);

#endif
