/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:42:08 by cdiks             #+#    #+#             */
/*   Updated: 2022/02/17 14:52:25 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	if (list_size(*llist_a) == 2)
		sa(*llist_a, a_list);
	if (list_size(*llist_a) == 3)
		sort_three(llist_a, a_list);
	if (list_size(*llist_a) == 4)
		sort_four(llist_a, llist_b, a_list);
	if (list_size(*llist_a) == 5)
		sort_five(llist_a, llist_b, a_list);
}

void	sort_four(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	push_lowest_four(llist_a, llist_b, a_list);
	if (check_if_sorted(*llist_a) == 1)
		sort_three(llist_a, a_list);
	pa(llist_a, llist_b, a_list);
}

void	sort_five(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	push_lowest_five(llist_a, llist_b, a_list);
	sort_four(llist_a, llist_b, a_list);
	pa(llist_a, llist_b, a_list);
}

void	sort_three(t_node **llist, t_action **a_list)
{
	int		head;
	int		middle;
	int		tail;
	t_node	*temp;

	temp = *llist;
	head = temp->data;
	middle = temp->next->data;
	tail = temp->next->next->data;
	if (head == lowest(*llist))
	{
		rra(llist, a_list);
		sa(*llist, a_list);
	}
	else if (tail == lowest(*llist) && head == highest(*llist))
	{
		ra(llist, a_list);
		sa(*llist, a_list);
	}
	else if (middle == lowest(*llist) && tail == highest(*llist))
		sa(*llist, a_list);
	else if (middle == lowest(*llist) && head == highest(*llist))
		ra(llist, a_list);
	else if (tail == lowest(*llist) && middle == highest(*llist))
		rra(llist, a_list);
}
