/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:15:06 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 13:17:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(void)
{
	
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
