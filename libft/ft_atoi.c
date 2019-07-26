/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crath <crath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:10:53 by crath             #+#    #+#             */
/*   Updated: 2019/06/13 20:30:50 by crath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	ato;
	int	plmi;
	int			check;
	
	ato = 0;
	plmi = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' 
	|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		plmi = -1;
	if (*str == '-' || *str == '+')
		str++;
	
	check = ato;
	while (*str >= '0' && *str <= '9')
	{
		ato = ato * 10 + plmi * (*str - '0');
		if (ato < check && plmi == 1)
			return (-1);
		if (ato > check && plmi == -1)
			return (0);
		check = ato;
		str++;
	}
	return (ato);
}
