/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:41:51 by cdiks             #+#    #+#             */
/*   Updated: 2022/02/17 14:52:49 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest(t_node	*llist)
{
	int		lowest;
	t_node	*temp;

	temp = llist;
	lowest = temp->data;
	while (temp->next != NULL)
	{
		if (temp->next->data < lowest)
			lowest = temp->next->data;
		temp = temp->next;
	}
	return (lowest);
}

int	highest(t_node	*llist)
{
	t_node	*temp;
	int		highest;

	temp = llist;
	highest = temp->data;
	while (temp->next != NULL)
	{
		if (temp->next->data > highest)
			highest = temp->next->data;
		temp = temp->next;
	}
	return (highest);
}

void	push_lowest_four(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	int		i;
	t_node	*temp;

	temp = *llist_a;
	i = 0;
	while (temp != NULL)
	{
		if (temp->data == lowest(*llist_a) && i == 1)
			sa(*llist_a, a_list);
		else if (temp->data == lowest(*llist_a) && i == 2)
		{
			rra(llist_a, a_list);
			rra(llist_a, a_list);
		}
		else if (temp->data == lowest(*llist_a) && i == 3)
			rra(llist_a, a_list);
		i++;
		temp = temp->next;
	}
	pb(llist_a, llist_b, a_list);
}

void	push_lowest_five(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	int		i;
	t_node	*temp;

	temp = *llist_a;
	i = 0;
	while (temp != NULL)
	{
		if (temp->data == lowest(*llist_a) && i == 1)
			sa(*llist_a, a_list);
		else if (temp->data == lowest(*llist_a) && i == 2)
		{
			ra(llist_a, a_list);
			ra(llist_a, a_list);
		}
		else if (temp->data == lowest(*llist_a) && i == 3)
		{
			rra(llist_a, a_list);
			rra(llist_a, a_list);
		}
		else if (temp->data == lowest(*llist_a) && i == 4)
			rra(llist_a, a_list);
		i++;
		temp = temp->next;
	}
	pb(llist_a, llist_b, a_list);
}
