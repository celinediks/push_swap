/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:27:11 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/07 12:17:56 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	rotate(t_node **llist)
{
	t_node	*last;
	t_node	*first;

	if (*llist)
	{
		last = *llist;
		while (last->next != NULL)
			last = last->next;
		first = *llist;
		*llist = first->next;
		first->next = NULL;
		last->next = first;
	}
	return ;
}

void	rev_rotate(t_node **llist)
{
	t_node	*previous;
	t_node	*last;

	if (*llist)
	{
		last = *llist;
		while (last->next != NULL)
			last = last->next;
		previous = *llist;
		while (previous->next->next != NULL)
			previous = previous->next;
		previous->next = NULL;
		last->next = *llist;
		*llist = last;
	}
	return ;
}
