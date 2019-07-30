/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 23:22:03 by pben              #+#    #+#             */
/*   Updated: 2019/07/30 16:16:59 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../includes/push_swap.h"

void		sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	int			tmp;

	while (is_empty(stack_a) == 0)
	{
		tmp = top(stack_a->head);
		pop_front(stack_a);
		//printf("\npop_a\n");
		while((is_empty(stack_b) == 0 && top(stack_b->head) > tmp))
		{
			push_front(stack_a, top(stack_b->head));
			printf("pa\n");
			pop_front(stack_b);
			//printf("pop_b\n");
		}
		push_front(stack_b, tmp);
		printf("pb\n");
	}
}
