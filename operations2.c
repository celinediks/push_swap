/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:28:02 by cdiks             #+#    #+#             */
/*   Updated: 2022/02/14 12:11:25 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **llist_a, t_action **a_list)
{
	rotate(llist_a);
	add_back_action(a_list, "ra\n");
}

void	rb(t_node **llist_b, t_action **a_list)
{
	rotate(llist_b);
	add_back_action(a_list, "rb\n");
}

void	rra(t_node **llist_a, t_action **a_list)
{
	rev_rotate(llist_a);
	add_back_action(a_list, "rra\n");
}

void	rrb(t_node **llist_b, t_action **a_list)
{
	rev_rotate(llist_b);
	add_back_action(a_list, "rrb\n");
}
