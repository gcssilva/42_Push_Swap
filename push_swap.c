/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsilva <gsilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:51:36 by gsilva            #+#    #+#             */
/*   Updated: 2023/06/19 16:51:42 by gsilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;

	if (argc < 2 || !check_input(argv))
	{
		write(1, "Invalid input!\n", 15);
		return (0);
	}
	if (argc == 2)
		return (0);
	i = 0;
	while (argv[++i])
		add_back(new_node(ft_atoi(argv[i])));
	stack()->a_size = i - 1;
	stack()->b_size = 0;
	create_sorted();
	print_stks();
	ft_clean();
	return (0);
}
