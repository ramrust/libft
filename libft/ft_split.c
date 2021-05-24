/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:37:53 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/25 17:45:03 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_slova(char const *s, char c)
{
	size_t	ls;
	size_t	i;
	int		bukv;
	int		slova;

	ls = ft_strlen(s);
	i = 0;
	bukv = 0;
	slova = 0;
	while (ls > i)
	{
		while (*s == c && ls > i)
		{
			bukv = 0;
			s++ && i++;
		}
		while ((*s != c && *s + 1 != '\0') && ls > i)
		{
			bukv++;
			s++ && i++;
		}
		if (bukv != 0)
			slova++;
	}
	return (slova);
}

int		ft_bukv(char const *s, char c)
{
	size_t	ls;
	size_t	i;
	int		bukv;

	ls = ft_strlen(s);
	i = 0;
	bukv = 0;
	while (ls > i)
	{
		while (*s == c && ls > i)
		{
			bukv = 0;
			s++;
			i++;
		}
		while (*s != c && ls > i)
		{
			bukv++;
			s++;
			i++;
		}
		if (bukv != 0)
			return (bukv);
	}
	return (bukv);
}

char	**free_sp(char **arr, int i)
{
	int	j;

	j = -1;
	while (++j < i)
		free(arr[j]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		slova;
	int		bukv;
	char	**arr;
	int		i;
	int		k;

	i = -1;
	k = -1;
	if (!s)
		return (NULL);
	slova = ft_slova(s, c);
	if (((arr = ft_calloc((slova + 2), sizeof(char*))) != NULL))
		while (++i < slova)
		{
			bukv = ft_bukv(s, c);
			if ((arr[i] = ft_calloc((bukv + 1), 1)) == NULL)
				return (free_sp(arr, i));
			while (*s && *s == c)
				s++;
			while (++k < bukv)
				arr[i][k] = *s++;
			k = -1;
		}
	return (arr);
}
