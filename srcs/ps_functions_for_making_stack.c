/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_functions_for_making_stack.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:21:09 by GriK              #+#    #+#             */
/*   Updated: 2019/08/01 18:45:50 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

t_stack		*init_stack_a(int ac, char **av)
{
	t_stack		*stack_a;

	if (!(stack_a = (t_stack *)malloc(sizeof(t_stack))))
		error(FROM_ALLOC_MEMORY);
	
	stack_a->head = NULL;
	stack_a->size = 0;
	stack_a->top = 0;

	if (ac == 2)
		make_stack_a_from_string(stack_a, av);

	if (ac > 2)
		make_stack_a_from_mult_arg(stack_a, ac, av);

	return (stack_a);
}

t_stack		*init_stack_b()
{
	t_stack		*stack_b;

	if (!(stack_b = (t_stack *)malloc(sizeof(t_stack))))
		error(FROM_ALLOC_MEMORY);

	stack_b->head = NULL;
	stack_b->size = 0;
	stack_b->top = 0;

	return (stack_b);
}

void		make_stack_a_from_string(t_stack *stack_a, char **av)
{
	int			i;
	char		**temp;


	temp = ft_strsplit(av[1], ' ');

	check_input_from_string(temp);

	printf("\nThe count of integers: %d \n\n", lenght_of_2D_array(temp));

	i = 0;
	while (i < lenght_of_2D_array(temp))
	{
		printf("Adding an integer %d to the stack A... \n", ft_atoi(temp[i]));
		push_front(stack_a, ft_atoi(temp[i]));
		print_stack(stack_a);
		i++;
	}
	stack_a->top = top(stack_a->head);
	free(temp);
}

void		make_stack_a_from_mult_arg(t_stack *stack_a, int ac, char **av)
{
	int		i;

	check_input_from_mult_arg(ac, av);

	printf("\nThe count of integers: %d \n\n", ac - 1);

	i = ac - 1;
	while (i > 0)
	{
		printf("Adding an integer %d to the stack A... \n", ft_atoi(av[i]));
		push_front(stack_a, ft_atoi(av[i]));
		print_stack(stack_a);
		i--;
	}
	stack_a->top = top(stack_a->head);
}