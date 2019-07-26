/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_functions_for_working_with_stack.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crath <crath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:24:25 by GriK              #+#    #+#             */
/*   Updated: 2019/06/15 23:09:33 by crath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/push_swap.h"

int			top(const t_node *head)
{
	if (head == NULL)
		error_2(STACK_UNDERFLOW);
	return (head->data);
}

int			pop_front(t_stack *stack)
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
