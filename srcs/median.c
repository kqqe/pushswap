/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:08:58 by pben              #+#    #+#             */
/*   Updated: 2019/08/02 19:27:21 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

char static	*ft_bubble_sort(char *str, int count)
{
	int		a;
	int		b;
	char 	t;

	a = 1;
	while (a++ < count)
	{
		b = count - 1;
		while (b-- >= a)
			if (str[b - 1] > str[b])
			{
				t = str[b - 1];
				str[b - 1] = str[b];
				str[b] = t;
			}
	}
	return(str);
}

int		ft_get_median(t_stack *stack)
{
	t_node	*node;
	int		*arr;
	char		*sort;

	sort = (char *)malloc(sizeof(char) * (stack->size + 1));
	arr = (int *)malloc(sizeof(int) * (stack->size + 1));
	node = stack->head;
		int i = 0;
		while (node->next)
		{
			arr[i] = node->data;
			node = node->next;
			//printf("arr = %d\n", arr[i]);
			i++;
			
		}
		arr[i] = node->data;
		//printf("arr = %d\n", arr[i]);

		i = 0;
		while(i < stack->size)
		{
			int j = stack->size - 1;
			while(j >= i)
			{
				if(arr[j] < arr[j - 1])
				{
					int tmp;
					tmp = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = tmp;
				}
				j--;
			}
			i++;
		}

		i = 0;
		while (i < stack->size)
		{
			//printf("arr Poszle = %d I= %d\n", arr[i], i);
			i++;
		}
		stack->pivot = arr[stack->size / 2 ];
		//printf("pivot %d\n", stack->pivot);
		return(stack->pivot);
}
