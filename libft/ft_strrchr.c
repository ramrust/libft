/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:41:36 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/24 16:34:40 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		strl;
	char	*str;

	str = (char*)s;
	strl = ft_strlen(str);
	while (strl >= 0)
	{
		if (str[strl] == c)
			return (&str[strl]);
		strl--;
	}
	return (NULL);
}
