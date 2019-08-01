/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qick_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 21:36:37 by pben              #+#    #+#             */
/*   Updated: 2019/08/01 21:52:12 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"


void    quick_sort_a(t_stack *stack_a, t_stack *stack_b)
{
    int		push_count;
	int		rot_count;

    if (!stack_a->head && !stack_a->head->next)
        sa(stack_a);
    rot_count = 0;
	push_count = 0;    
    while (push_count + rot_count < stack_a->size)
    {
        stack_a->pivot = ft_get_median(stack_a);
        stack_a->top < stack_a->pivot ? push_count++ : rot_count++;
        if(stack_a->top < stack_a->pivot)
            ft_pb(stack_a);
        else
            ft_ra(stack_a)
    }
    if(stack_a->top + 1 > stack_a->size - push_count)
        ft_rra(stack_a)
    quick_sort_a(stack_a, stack_b);
    quick_sort_b(stack_a, stack_b);
        
}
//not true
rot_count = 0;
	push_count = 0;
	pivot = ft_get_median(&(a->data[a->top - size + 1]), size);
	while (push_count + rot_count < size)
	{
		(float)(a->data[a->top]) < pivot ? push_count++ : rot_count++;
		if ((float)(a->data[a->top]) < pivot)
			ft_lst_add(head, ft_pb(a, b));
		else
			ft_lst_add(head, ft_ra(a, b));
	}
	if (a->top + 1 > size - push_count)
		ft_rotate_back(a, b, rot_count, head);
	ft_qsort_stack_a(a, b, rot_count, head);
	ft_qsort_stack_b(a, b, push_count, head);
}
void		a_partition(t_push *p)
{
	int m;
	int n;
	int	count;

	if (!p->lst1->next)
		a_partition_vip(p);
	while ((p->lst1)->data > 3 && !(is_top_sorted(p)))
	{
		count = 0;
		m = median(p->stack1, (p->lst1)->data);
		n = (p->lst1)->data;
		ft_pushfront(&p->lst2, 0);
		while (n--)
			if ((p->stack1)->data > m)
				ft_ra_count(p, &count);
			else
				ft_pb(p);
		while (count-- > 0)
			ft_rra(p);
	}
}