/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 23:22:03 by pben              #+#    #+#             */
/*   Updated: 2019/07/30 16:19:15 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../includes/push_swap.h"

void	sa(t_stack *head)
{
	t_node	*node_2;
	int     tmp_data;
	
	node_2 = head->head->next;
	if(node_2 != NULL)
	{
		tmp_data = head->head->data;
		head->head->data = node_2->data;
		node_2->data = tmp_data;
	}
}


void       ra(t_stack *head)
{
	t_node	*node_2;
	int		tmp_data;

	node_2 = head->head;
	tmp_data = head->head->data;
	while (node_2 != NULL)
	{
		if(node_2->next == NULL)
			break;
		node_2->data = node_2->next->data;
		node_2 = node_2->next;
	}
	node_2->data = tmp_data;
}

void       rra(t_stack **head)
{
	t_node *node_2;
	t_node *temp;

	node_2 = (*head)->head;
	while (node_2->next->next != NULL)
	{
		node_2 = node_2->next;
	}
	temp = node_2->next;
	node_2->next= NULL;
	temp->next = (*head)->head;
	(*head)->head = temp; 
}

void 	pa(t_stack *a, t_stack *b)//
{
	t_node *tmp;

	if (is_empty(b) == 1)
	{
		exit(1);
	}
	else
	{
		tmp = b->head->next;
		b->head->next = a->head;
		a->head = b->head;
		b->head = tmp;
		b->size++;
	}

}
void 	pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (is_empty(a) == 1)
	{
		exit(1);
	}
	else
	{
		tmp = a->head->next;
		a->head->next = b->head;
		b->head = a->head;
		a->head = tmp;
		a->size--;
	}

}
