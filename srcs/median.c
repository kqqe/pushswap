/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:08:58 by pben              #+#    #+#             */
/*   Updated: 2019/08/02 16:02:39 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

int		ft_get_median(t_stack *stack)
{
	int		tmp1;
	int		tmp2;
	int		tmp3;
	t_node	*node;

	node = stack->head;
	if (stack->head == NULL)
	{
		stack->pivot = 0;
		return (stack->pivot);
	}
	if (stack->size == 2)
	{
		tmp1 = node->data;
		tmp2 = node->next->data;
		stack->pivot = tmp1 > tmp2 ? tmp2 : tmp1;
	}
	else
	{
		tmp1 = node->data;
		while ((node->next))
		{
			if(stack->size / 2)
				tmp2 = node->data;
			node = node->next;	
		}
		node = stack->head;
		while (node->next)
		{
			if(node->next)
				tmp3 = node->next->data;
			node = node->next; 
		}
		stack->pivot = (tmp1 + tmp2 + tmp3) / 3;
	}
	// printf("res  = %d\n ", stack->pivot);
	// printf("tmp3  = %d\n ", tmp3);
    return(stack->pivot);
}