/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 17:05:01 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(void)
{
	if (stack()->a_size > 10)
		ft_sort((stack()->a_size / 5), stack()->a_size % 5);
}

int	check_input(char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (argv[++i])
	{
		j = i;
		while (argv[++j])
		{
			if (ft_strcmp(argv[i], argv[j]))
				return (0);
		}
		k = -1;
		while (argv[i][++k])
		{
			if (k == 0 && argv[i][k] == '-')
				k++;
			if (!ft_isdigit(argv[i][k]))
				return (0);
		}
	}
	return (1);
}

void	ft_clean(void)
{
	t_node	*node;
	t_node	*next_node;

	node = stack()->stk_a;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	node = stack()->stk_b;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	node = stack()->stk_c;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}

void	ft_sort(int a, int b)
{
	int	c;

	c = 5;
	while (c-- < 0)
	{
		if (c > 1)
			find_limits(a);
		else
			find_limits(a + b)
		while (stack()->stk_a->nbr <= stack()->first && )
	}
}

void	find_limits(int x)
{
	static int	c = 1;
	t_node		*temp;
	
	i = 1;
	temp = stack()->stk_c;
	while (i++ < c)
		temp = temp->next;
	stack()->first = temp->nbr;
	c += x;
	i = 1;
	temp = stack()->stk_c;
	while (i++ < c)
		temp = temp->next;
	stack()->last = temp->nbr;
}
