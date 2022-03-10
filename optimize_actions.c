/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize_actions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:05:05 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/09 10:39:30 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back_action(t_action **head, char *action)
{
	t_action	*new;
	t_action	*last;

	new = malloc(sizeof(t_action));
	if (!new)
		return ;
	new->action = action;
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

void	print_action_list(t_action *a_list)
{
	while (a_list != NULL)
	{
		ft_putstr_fd(a_list->action, 1);
		a_list = a_list->next;
	}
	return ;
}

int	list_action_size(t_action *llist)
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

void	optimize_action_list(t_action *a_list)
{
	t_action	*temp;
	int			key;
	int			size;

	key = 0;
	temp = a_list;
	size = list_action_size(a_list);
	while (temp->next != NULL)
	{
		if (((ft_strncmp(temp->action, "pb\n") == 0)
				&& (ft_strncmp(temp->next->action, "pa\n") == 0))
			|| ((ft_strncmp(temp->action, "pa\n") == 0)
				&& (ft_strncmp(temp->next->action, "pb\n") == 0)))
		{
			delete_node(&a_list, key);
			return ;
		}
		temp = temp->next;
		key++;
	}
	size--;
}

void	delete_node(t_action **a_list, int key)
{
	t_action	**prev;
	int			i;

	i = 0;
	prev = a_list;
	if (*a_list == NULL)
		return ;
	while (i < (key - 1) && a_list != NULL)
	{
		*prev = (*prev)->next;
		i++;
	}
	free((*prev)->next);
	(*prev)->next = (*prev)->next->next;
	free((*prev)->next);
	(*prev)->next = (*prev)->next->next;
}
