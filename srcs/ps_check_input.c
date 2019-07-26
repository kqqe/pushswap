/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crath <crath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 13:32:58 by crath             #+#    #+#             */
/*   Updated: 2019/06/15 21:56:53 by crath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/push_swap.h"

void		check_input_from_string(char **temp)
{
	int			i;
	int			depth_of_2d_array;

	depth_of_2d_array = lenght_of_2D_array(temp);

	if (depth_of_2d_array >= 1)
	{
		i = 0;
		while (i < depth_of_2d_array)
		{
			try_to_find_non_digit(temp, i);
			try_to_find_int_over_or_underflow(temp, i);
			try_to_find_duplicates(temp, i, depth_of_2d_array);
			i++;
		}
	}
}

void		check_input_from_mult_arg(char ac,char **av)
{
	int			i;

	if (ac >= 2)
	{
		i = 1;
		while (av[i] != NULL)
		{
			try_to_find_non_digit(av, i);
			try_to_find_int_over_or_underflow(av, i);
			try_to_find_duplicates(av, i, ac);
			i++;
		}
	}
}

void		try_to_find_duplicates(char **temp, int i, int depth)
{
	int		j;

	j = i + 1;
	while (j < depth)
	{
		if (ft_atoi(temp[i]) == ft_atoi(temp[j]))
			error_2(DUPLICATES_IN_INPUT);
		j++;
	}
}

void		try_to_find_non_digit(char **temp, int i)
{
	int		j;

	j = 0;
	while (temp[i][j] != '\0')
	{
		if (temp[i][j] == '-')
		{
			if (!(temp[i][j + 1] <= 57 && temp[i][j + 1] >= 48))
				error(FROM_INPUT);
		}
		else
			if (!(temp[i][j] <= 57 && temp[i][j] >= 48))
				error(FROM_INPUT);
		j++;
	}
}

void		try_to_find_int_over_or_underflow(char **temp, int i)
{
	if (ft_atoi(temp[i]) < 0 && temp[i][0] != '-')
		error(2);
	if (ft_atoi(temp[i]) == 0 && temp[i][0] == '-')
		error(4);
}
