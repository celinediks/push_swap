/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:05:35 by cdiks             #+#    #+#             */
/*   Updated: 2022/03/10 08:50:46 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_node {
	int				data;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_action {
	char			*action;
	struct s_action	*next;
}	t_action;

void	add_back(t_node **head, int num);
void	add_back_action(t_action **head, char *action);
void	print_list(t_node *llist);
void	print_action_list(t_action *a_list);
int		list_size(t_node *llist);
t_node	*create_list(char **argv);
void	check_digit(char **argv);
void	check_dups(t_node *llist);
int		check_atoi(long long x);
int		check_if_sorted(t_node *llist);
void	swap(int *a, int *b);
void	rotate(t_node **llist);
void	rev_rotate(t_node **llist);
void	sa(t_node *llist, t_action **a_list);
void	sb(t_node *llist, t_action **a_list);
void	ss(t_node *llist_a, t_node *llist_b, t_action **a_list);
void	pb(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	pa(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	ra(t_node **llist_a, t_action **a_list);
void	rb(t_node **llist_b, t_action **a_list);
void	rr(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	rra(t_node **llist_a, t_action **a_list);
void	rrb(t_node **llist_b, t_action **a_list);
void	rrr(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	sort_small_stack(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	sort_big_stack(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	sort_three(t_node **llist_a, t_action **a_list);
void	push_lowest_four(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	push_lowest_five(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	sort_four(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	sort_five(t_node **llist_a, t_node **llist_b, t_action **a_list);
int		lowest(t_node *llist);
int		highest(t_node *llist);
void	index_list(t_node **llist);
int		lowest_node(t_node *llist);
void	sort(t_node **llist_a, t_node **llist_b, t_action **a_list);
void	optimize_action_list(t_action *a_list);
void	delete_node(t_action **a_list, int key);
int		list_action_size(t_action *llist);
void	free_all_actions(t_action **a_list);
void	free_all(t_node **llist);
int		ft_swap_atoi(const char *str);
int		check_min_max(const char *str, int min);
int		ft_swap_strlen(const char *str);
void	exit_error(void);

#endif