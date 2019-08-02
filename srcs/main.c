/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 13:32:47 by crath             #+#    #+#             */
/*   Updated: 2019/08/02 19:28:47 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../includes/push_swap.h"

int			main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = init_stack_a(ac, av);
	stack_b = init_stack_b();
	print_stack(stack_a);
	quick_sort_a(stack_a, stack_b);
	//cheak(stack_a, stack_b);
	//sa(stack_a);
	//ra(stack_a);
	//rra(&stack_a);

	//ft_get_median(stack_a);
	//pb(stack_a, stack_b);
	print_stack(stack_a);
	//print_stack_B(stack_b);
	//ft_get_median(stack_a);
	// printf("\nStack's TOP: %d\n", stack_a->top);
	// printf("Stack's SIZE: %d\n", stack_a->size);

	//sort_stack(stack_a, stack_b);
	// print_stack(stack_b);
	// printf("\nStack's TOP: %d\n", stack_a->top);
	// printf("Stack's SIZE: %d\n", stack_a->size);
	//free_stack(&stack_a);
	//free_stack(&stack_b);

	return (0);
}

 //https://habr.com/ru/post/346930/qqicksellect
 //https://www.youtube.com/watch?v=ULVgSl5qWik // track

void 	cheak(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = a->head;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
		{
			quick_sort_a(a , b);
		}	
		else
		{
			printf("otrabotano 4etko \n");
		}
		tmp = tmp->next;
	} 
}