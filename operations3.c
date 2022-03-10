/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:45:23 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/03 09:34:23 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_node *llist_a, t_node *llist_b, t_action **a_list)
{
	if (llist_a)
		swap(&llist_a->data, &llist_a->next->data);
	if (llist_b)
		swap(&llist_b->data, &llist_b->next->data);
	add_back_action(a_list, "ss\n");
	return ;
}

void	rr(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	rotate(llist_a);
	rotate(llist_b);
	add_back_action(a_list, "rr\n");
}

void	rrr(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	rev_rotate(llist_a);
	rev_rotate(llist_b);
	add_back_action(a_list, "rrr\n");
}
