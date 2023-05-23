/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:31:37 by gsilva            #+#    #+#             */
/*   Updated: 2023/05/23 13:52:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	// if (argc < 2 || !check_input())
	// {
	// 	write(1, "Invalid input!", 14);
	// 	return ;
	// }
	while (argv[++i])
		add_back(new_node(ft_atoi(argv[i])));
	stack()->a_size = i - 1;
	stack()->b_size = 0;
	return (0);
}
