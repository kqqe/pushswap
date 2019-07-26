/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crath <crath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 13:32:47 by crath             #+#    #+#             */
/*   Updated: 2019/06/19 18:40:50 by crath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = init_stack_a(ac, av);
	stack_b = init_stack_b();
	//sa(stack_a);
	//ra(stack_a);
	rra(&stack_a);
	print_stack(stack_a);
	// printf("\nStack's TOP: %d\n", stack_a->top);
	// printf("Stack's SIZE: %d\n", stack_a->size);

	//sort_stack(stack_a, stack_b);
	// print_stack(stack_b);
	// printf("\nStack's TOP: %d\n", stack_a->top);
	// printf("Stack's SIZE: %d\n", stack_a->size);

	return (0);
}





