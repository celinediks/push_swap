/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:04:50 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/09 15:23:17 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) == 0 || argv[i][j] == '-')
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_dups(t_node *llist)
{
	int		i;
	t_node	*temp;

	temp = llist;
	while (llist != NULL)
	{
		i = 0;
		temp = llist;
		while (temp != NULL)
		{
			if (llist->data == temp->data && i > 0)
				exit_error();
			if (llist->data == temp->data)
				i++;
			temp = temp->next;
		}
		llist = llist->next;
	}
}

int	check_if_sorted(t_node *llist)
{
	int	i;
	int	size;

	size = list_size(llist);
	i = 1;
	while (llist->next != NULL)
	{
		if (llist->data < llist->next->data)
			i++;
		llist = llist->next;
	}
	if (i == size)
		return (0);
	return (1);
}

void	sort(t_node **llist_a, t_node **llist_b, t_action **a_list)
{
	int	i;

	i = 0;
	if (list_size(*llist_a) <= 5)
		sort_small_stack(llist_a, llist_b, a_list);
	else
		sort_big_stack(llist_a, llist_b, a_list);
	while (i != list_action_size(*a_list))
	{
		optimize_action_list(*a_list);
		i++;
	}
	print_action_list(*a_list);
}

void	free_all_actions(t_action **a_list)
{
	t_action	*temp;

	if (!a_list)
	{
		while (a_list)
		{
			temp = (*a_list)->next;
			free(*a_list);
			*a_list = temp;
		}
		a_list = NULL;
	}
}
