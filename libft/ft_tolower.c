/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:13:00 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:13:01 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	counter;

	counter = 0;
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	else
		return (c);
	return (c);
}