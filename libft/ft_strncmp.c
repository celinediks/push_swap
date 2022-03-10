/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:12:09 by cdiks             #+#    #+#             */
/*   Updated: 2022/02/23 13:23:48 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2)
{
	size_t	counter;

	counter = 0;
	while (*s1)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else
		{
			s1++;
			s2++;
		}
		counter++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
