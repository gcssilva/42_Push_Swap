/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:31:37 by gsilva            #+#    #+#             */
/*   Updated: 2023/04/11 15:15:22 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	// if (argc < 2 || !check_input())
	// {
	// 	write(1, "Invalid input", 13);
	// 	return ;
	// }
	while (argv[i])
		i++;
	stack()->stk_a = (int *)malloc((argc - 1) * sizeof(int));
	stack()->stk_b = (int *)malloc((argc - 4) * sizeof(int));
	i = 0;
	while (argv[++i])
		stack()->stk_a[i - 1] = ft_atoi(argv[i]);
	stack()->size_a = argc - 1;
	stack()->size_b = argc - 4;
	push_swap();
}
