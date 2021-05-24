/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:11:13 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/25 16:57:28 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_comp(char c, char const *str)
{
	size_t	g;

	g = 0;
	while (str[g] != '\0')
	{
		if (c == str[g])
			return (1);
		g++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens;
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	new = (char*)s1;
	if (!s1)
		return (NULL);
	lens = ft_strlen(s1) - 1;
	while (new[lens] && ft_comp(new[lens], set) > 0)
	{
		if (lens-- == 0)
			return (ft_strdup(""));
		i++;
	}
	lens = ft_strlen(s1);
	while (new[j] && ft_comp(new[j], set) > 0)
	{
		if (lens == j)
			return (ft_strdup(""));
		j++;
	}
	return (ft_substr(new, j, (lens - i - j)));
}
