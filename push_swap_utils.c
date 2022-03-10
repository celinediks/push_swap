/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:03:43 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/09 13:36:09 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	ft_swap_atoi(const char *str)
{
	int	i;
	int	result;
	int	min;

	i = 0;
	min = 1;
	result = 0;
	if (*str != '\0' && *str == '-')
	{
		min = -1;
		str++;
	}
	if (!*str)
		return (1);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			result = (result * 10) + (str[i++] - '0');
		else
			exit_error();
		if (!check_min_max(str, min))
			exit_error();
	}
	return (result * min);
}

int	check_min_max(const char *str, int min)
{
	long long	temp;

	temp = ft_atoi(str);
	temp *= min;
	if (temp >= INT_MIN && temp <= INT_MAX && ft_swap_strlen(str) < 12)
		return (1);
	return (0);
}

int	ft_swap_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	list_size(t_node *llist)
{
	int	i;

	i = 0;
	while (llist != NULL)
	{
		i++;
		llist = llist->next;
	}
	return (i);
}
