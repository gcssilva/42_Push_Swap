/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:16:12 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 13:16:16 by codespace        ###   ########.fr       */
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
		if (nbr > 2147483648 || (nbr == 2147483648 && s == 1))
			nbr_overflow();
	}
	return (nbr * s);
}

void	print_stks(void)
{
	t_node	*stk_a;
	t_node	*stk_b;
	t_node	*stk_c;

	stk_a = stack()->stk_a;
	stk_b = stack()->stk_b;
	stk_c = stack()->stk_c;
	printf("a\t\tb\t\tc\n");
	while (stk_a || stk_b || stk_c)
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
			printf("n\t\t");
		if (stk_c)
		{
			printf("%d\n", stk_c->nbr);
			stk_c = stk_c->next;
		}
		else
			printf("n\n");
	}
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

int	is_sorted(void)
{
	t_node	*temp;

	temp = stack()->stk_a;
	while (temp->next)
	{
		if (temp->nbr > temp->next->nbr)
			return (0);
	}
	return (1);
}