/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:26:22 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/16 17:40:48 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *st;

	st = s;
	while (n)
	{
		if (*st == (char)c)
			return ((void *)st);
		st++;
		n--;
	}
	return (NULL);
}
