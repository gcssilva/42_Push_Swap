/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:16:12 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/31 16:58:11 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	long int	s;
	long int	nbr;

	s = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str++ - 48);
		if (nbr > 2147483648)
		{
			nbr_overflow();
			return (0);
		}
	}
	return (nbr * s);
}

void	print_stks(void)
{
	t_node	*stk_a;
	t_node	*stk_b;

	stk_a = stack()->stk_a;
	stk_b = stack()->stk_b;
	printf("a\t\tb\n");
	while (stk_a || stk_b)
	{
		if (stk_a)
		{
			printf("%d\t\t", stk_a->nbr);
			stk_a = stk_a->next;
		}
		else
			printf("n\t\t");
		if (stk_b)
		{
			printf("%d\n", stk_b->nbr);
			stk_b = stk_b->next;
		}
		else
			printf("n\n");
	}
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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	nbr_overflow(void)
{
	write(1, "Invalid input!\n", 15);
	ft_clean();
	exit(0);
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
}
