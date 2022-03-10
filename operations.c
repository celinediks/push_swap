/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:25:31 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/03 09:34:11 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *llist, t_action **a_list)
{
	if (llist)
	{
		swap(&llist->data, &llist->next->data);
		add_back_action(a_list, "sa\n");
	}
	return ;
}

void	sb(t_node *llist, t_action **a_list)
{
	if (llist)
	{
		swap(&llist->data, &llist->next->data);
		add_back_action(a_list, "sb\n");
	}
	return ;
}

void	pb(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	t_node	*temp;

	if (*llist_a == NULL)
		return ;
	temp = *llist_a;
	if (temp->next == NULL)
		*llist_a = NULL;
	else
		*llist_a = temp->next;
	temp->next = *llist_b;
		*llist_b = temp;
	add_back_action(a_list, "pb\n");
}

void	pa(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	t_node	*temp;

	if (!*llist_b)
		return ;
	temp = *llist_b;
	if (temp->next == NULL)
		*llist_b = NULL;
	else
		*llist_b = temp->next;
	temp->next = *llist_a;
	*llist_a = temp;
	add_back_action(a_list, "pa\n");
}
