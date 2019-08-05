/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 21:36:37 by pben              #+#    #+#             */
/*   Updated: 2019/08/02 19:33:38 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

int		ft_for_little_size(t_stack *a, t_stack *b)
{
    if (b->head == NULL)
        return (0);
	if (b->size == 1)
	{
		pa(a, b);
	}
	else if (b->size == 2)
	{
		if (b->head->data < b->head->next->data)
        {
			sb(b);
            print_stack_B(b);
        }
		pa(a, b);
        print_stack_B(b);
		pa(a, b);
        print_stack_B(b);
	}
	return (1);
}

int				check_sort(t_stack *a)
{
	int		i;

	i = 1;
	while (i < a->size)
	{
        if (a->head->next > a->head->next->next)
            return (0);
        i++;
	}
	return (1);
}
void    rot(t_stack *stack, int rot_count)
{
    stack->size = rot_count;
}

void    push(t_stack *stack, int  push_count)
{
    stack->size = push_count;
}
void    quick_sort_a(t_stack *stack_a, t_stack *stack_b)
{
    int		push_count;
	int		rot_count;

    if (stack_a->size <= 2 || check_sort(stack_a))
    {
        if (stack_a->head->data > stack_a->head->next->data)
        {
            sa(stack_a);
            print_stack(stack_a);
        }
        return ;
    }
    rot_count = 0;
	push_count = 0;
    stack_a->pivot = ft_get_median(stack_a); 
    printf("pivot A = %d\n", stack_a->pivot);
    while (push_count + rot_count < stack_a->size)
    { 
        stack_a->head->data < stack_a->pivot ? push_count++ : rot_count++;
        if(stack_a->head->data < stack_a->pivot)
        {
            pb(stack_a, stack_b);

            print_stack_B(stack_b);
        }
        else
        {
            ra(stack_a);
            print_stack(stack_a);
        }
    }

    if(rot_count < stack_a->size - push_count)
    {
        printf("top %d", stack_a->top);
        rra(&stack_a);
       // print_stack(stack_a);
    }
    rot(stack_a, rot_count);
    quick_sort_a(stack_a, stack_b);
    push(stack_b, push_count);
    quick_sort_b(stack_a, stack_b);   
}

void    quick_sort_b(t_stack *stack_a, t_stack *stack_b)
{
	int		push_count;
	int		rot_count;
	int		i;

	if ((stack_b->size < 3) && ft_for_little_size(stack_a, stack_b))

		return ;

	stack_b->pivot = ft_get_median(stack_b);
    printf("pivot B = %d\n", stack_b->pivot);
	push_count = 0;
	rot_count = 0;
	while (push_count + rot_count < stack_b->size)
	{
        if (stack_b->head == NULL)
            return ;
		stack_b->head->data > stack_b->pivot ? push_count++ : rot_count++;
		if (stack_b->head->data > stack_b->pivot)
        {
			pa(stack_a, stack_b);
            print_stack_B(stack_b);
        }
		else
        {
			rb(stack_b);
            print_stack_B(stack_b);
        }
	}
    
    push(stack_a, push_count);
	quick_sort_a(stack_a, stack_b);
	i = 0;
	while (i++ < rot_count)
		rrb(&stack_b);
    print_stack_B(stack_b);
    rot(stack_b, rot_count);
	quick_sort_b(stack_a, stack_b);
        
}
