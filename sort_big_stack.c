/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:24:55 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/07 16:11:26 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	int		max_num;
	int		max_bits;
	int		i;
	int		j;

	max_num = list_size(*llist_a);
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < max_num)
		{
			if ((((*llist_a)->index >> i) & 1) == 1)
				ra(llist_a, a_list);
			else
				pb(llist_a, llist_b, a_list);
			j++;
		}
		while (*llist_b)
			pa(llist_a, llist_b, a_list);
		i++;
	}
}

int	lowest_node(t_node *llist)
{
	t_node	*lowest;
	t_node	*temp;

	temp = llist;
	while (temp != NULL)
	{
		if (temp->index == -1)
		{
			lowest = temp;
			break ;
		}
		temp = temp->next;
	}
	while (llist != NULL)
	{
		if (llist->data < lowest->data && llist->index == -1)
			lowest = llist;
		llist = llist->next;
	}
	return (lowest->data);
}

void	index_list(t_node **llist)
{
	int		i;
	int		lowest;
	t_node	*temp;

	i = 0;
	while (i < list_size(*llist))
	{
		temp = *llist;
		lowest = lowest_node(*llist);
		while (temp != NULL)
		{
			if (temp->data == lowest)
			{
				temp->index = i;
				i++;
			}
			temp = temp->next;
		}
	}
}
