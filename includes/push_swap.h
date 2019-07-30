/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pben <pben@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:27:39 by crath             #+#    #+#             */
/*   Updated: 2019/07/30 16:23:56 by pben             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define FROM_ALLOC_MEMORY (-1)
# define FROM_INPUT (1)
# define FROM_PROGRAMM (0)
# define STACK_OVERFLOW (6)
# define STACK_UNDERFLOW (5)
# define DUPLICATES_IN_INPUT (7)

# define INT_MIN (-2147483648)
# define INT_MAX (2147483647)

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef	struct			s_node
{
	int					data;
	struct s_node		*next;
}						t_node;

typedef struct			s_stack
{
	t_node				*head;
	int					top;
	int					size;
}						t_stack;


int			error(int number);
int			is_empty(t_stack *a_or_b);
int			pop_front(t_stack *stack);
t_stack		*init_stack_a();
t_stack		*init_stack_b();
t_stack		*insert(int x, t_stack *head);
void		print_stack(t_stack *stack);
int			lenght_of_2D_array(char **av);
void		make_stack_a_from_string(t_stack *stack_a, char **av);
void		make_stack_a_from_mult_arg(t_stack *stack_a, int ac, char **av);
void 		free_stack(t_stack **stack);
void		check_input_from_string(char **temp);
void		check_input_from_mult_arg(char ac,char **av);
void		try_to_find_non_digit(char **temp, int i);
void		try_to_find_int_over_or_underflow(char **temp, int i);
int			error_2(int number);
int			top(const t_node *head);
void		try_to_find_duplicates(char **temp, int i, int depth);

void		push_front(t_stack *stack, int data);
void		sort_stack(t_stack *stack_a, t_stack *stack_b);
//tolya function
void       sa(t_stack *head);
void       ra(t_stack *head);
void       rra(t_stack **head);
void		pa(t_stack *a, t_stack *b);
void		print_stack_B(t_stack *stack);
void 		pb(t_stack *a, t_stack *b);
void		ft_get_median(t_stack *stack);

#endif
