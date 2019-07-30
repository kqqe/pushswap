/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_help_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:46:40 by crath             #+#    #+#             */
/*   Updated: 2019/07/30 15:26:51 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include "../includes/push_swap.h"

int			error(int number)
{
	if (number == -1)
	{
		ft_putstr("ERROR in memory allocation\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 1)
	{
		ft_putstr("ERROR in input: one or more arguments are not an integer\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 2)
	{
		ft_putstr("ERROR in input: int overflow\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 3)
	{
		ft_putstr("ERROR in input: duplicates\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 4)
	{
		ft_putstr("ERROR in input: int underflow\n");
		exit(FROM_PROGRAMM);
	}
	return (0);
}

int			error_2(int number)
{
	if (number == 5)
	{
		ft_putstr("ERROR: stack underflow\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 6)
	{
		ft_putstr("ERROR: stack overflow\n");
		exit(FROM_PROGRAMM);
	}
	if (number == 7)
	{
		ft_putstr("ERROR: duplicates in input");
		exit(FROM_PROGRAMM);
	}
	return (0);
}

void		print_stack(t_stack *stack)
{
	t_node	*iter;

	printf("Stack A is: ");
	
	iter = stack->head;
	while (iter)
	{
		printf(" %d", iter->data);
		iter = iter->next;
	}
	printf("\n");
}

void		print_stack_B(t_stack *stack)
{
	t_node	*iter;

	printf("Stack B is: ");
	
	iter = stack->head;
	while (iter)
	{
		printf(" %d", iter->data);
		iter = iter->next;
	}
	printf("\n");
}


int			lenght_of_2D_array(char **av)
{
	int		i;

	i = 0;
	while (av[i] != NULL)//'\0')
		i++;

	return (i);
}


void 		free_stack(t_stack **stack)
{
    t_node *prev = NULL;
    while ((*stack)->head->next) {
        prev = (*stack)->head;
        (*stack)->head = (*stack)->head->next;
        free(prev);
    }
    free((*stack)->head);
    free(*stack);
    *stack = NULL;
}