/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:36:24 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/10 08:49:19 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_node **llist)
{
	t_node	*temp;

	if (!llist)
	{
		while (llist)
		{
			temp = (*llist)->next;
			free(*llist);
			*llist = temp;
		}
		llist = NULL;
	}
}

void	add_back(t_node **head, int num)
{
	t_node	*new;
	t_node	*last;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->data = num;
	new->index = -1;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

t_node	*create_list(char **argv)
{
	t_node	*head;

	head = NULL;
	argv++;
	while (*argv)
	{
		add_back(&head, ft_swap_atoi(*argv));
		argv++;
	}
	return (head);
}

void	print_list(t_node *llist)
{
	while (llist != NULL)
	{
		ft_putnbr_fd(llist->data, 1);
		llist = llist->next;
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_node		*llist_a;
	t_node		*llist_b;
	t_action	*a_list;

	if (argc <= 1)
		return (0);
	llist_b = NULL;
	a_list = NULL;
	check_digit(argv);
	llist_a = create_list(argv);
	check_dups(llist_a);
	if (check_if_sorted(llist_a) == 0)
		return (0);
	index_list(&llist_a);
	sort(&llist_a, &llist_b, &a_list);
	free_all(&llist_a);
	free_all_actions(&a_list);
	exit(0);
}
