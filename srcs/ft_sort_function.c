/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crath <crath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 23:22:03 by crath             #+#    #+#             */
/*   Updated: 2019/06/19 18:44:41 by crath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void       sa(t_stack *head)
{
    t_node *node_2;
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

void 	pa(t_stack *a, t_stack *b)
{
	t_node *anode;
	t_node *bnode;
	int 	tmp;

	anode = a->head;
	bnode = b->head;


}