/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:02:43 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/07 13:07:56 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	if ((dst == NULL && src == NULL) || (n < 0))
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
