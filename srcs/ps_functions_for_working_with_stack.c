/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_functions_for_working_with_stack.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:24:25 by pben              #+#    #+#             */
/*   Updated: 2019/08/01 18:42:22 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

int			top(const t_node *head)
{
	if (head == NULL)
		error_2(STACK_UNDERFLOW);
	return (head->data);
}

int			pop_front(t_stack *stack) //not comand sabject
{
	t_node		*temp;
	int			data;

	temp = NULL;
	data = 0;

	if (stack->head == NULL)
		error_2(STACK_UNDERFLOW);

	temp = stack->head;
	data = temp->data;
	stack->head = stack->head->next;
	free(temp);
	stack->size--;

	return (data);
}

int			is_empty(t_stack *stack)
{
	if (stack->head == NULL)
		return (1);
	return (0);
}

void		push_front(t_stack *stack, int data)
{
	t_node	*tmp;
	if (!(tmp = (t_node *)malloc(sizeof(t_node))))
		error(FROM_ALLOC_MEMORY);

	tmp->data = data;
	tmp->next = stack->head;
	stack->head = tmp;
	stack->size++;
}
