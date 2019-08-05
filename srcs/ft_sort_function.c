/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 23:22:03 by pben              #+#    #+#             */
/*   Updated: 2019/08/02 19:07:52 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../includes/push_swap.h"

void	sa(t_stack *head)
{
	t_node	*node_2;
	int		tmp_data;

	node_2 = head->head->next;
	if (node_2 != NULL)
	{
		tmp_data = head->head->data;
		head->head->data = node_2->data;
		node_2->data = tmp_data;
	}
	printf("sa\n");
}

void	sb(t_stack *head)
{
	t_node	*node_2;
	int		tmp_data;

	node_2 = head->head->next;
	if (node_2 != NULL)
	{
		tmp_data = head->head->data;
		head->head->data = node_2->data;
		node_2->data = tmp_data;
	}
	printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}

void	ra(t_stack *head)
{
	t_node	*node_2;
	int		tmp_data;

	node_2 = head->head;
	tmp_data = head->head->data;
	while (node_2 != NULL)
	{
		if (node_2->next == NULL)
			break ;
		node_2->data = node_2->next->data;
		node_2 = node_2->next;
	}
	node_2->data = tmp_data;
	//head->size++;
	printf("ra\n");
}

void	rb(t_stack *head)
{
	t_node	*node_2;
	int		tmp_data;

	if ((!head) || !(head->head->next))
		return ;
	node_2 = head->head;
	tmp_data = head->head->data;
	while (node_2 != NULL)
	{
		if (node_2->next == NULL)
			break ;
		node_2->data = node_2->next->data;
		node_2 = node_2->next;
	}
	node_2->data = tmp_data;
	//head->size++;
	printf("rb\n");
}

void		rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	printf("rr\n");
}

void	rra(t_stack **stack)
{
	t_node	*cur;
	t_node	*tmp;
	int		n;

	if (!(*stack)->head || !(*stack)->head->next)
		return ;
	cur = (*stack)->head;
	while (cur->next->next)
		cur = cur->next;
	n = cur->next->data;
	tmp = cur->next;
	cur->next = NULL;
	free(tmp);
	push_front(*stack, n);
	printf("rra\n");
}

void	rrb(t_stack **stack)
{
	t_node	*cur;
	t_node	*tmp;
	int		n;

	if (!(*stack)->head || !(*stack)->head->next)
		return ;
	cur = (*stack)->head;
	while (cur->next->next)
		cur = cur->next;
	n = cur->next->data;
	tmp = cur->next;
	cur->next = NULL;
	free(tmp);
	push_front(*stack, n);
	printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	printf("rrr\n");
}

void	pa(t_stack *a, t_stack *b)
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
		//b->size++;
	}
	printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
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
		//a->size--;
	}
	printf("pb\n");
}
