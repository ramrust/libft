/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:51:23 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/24 16:40:57 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lennew;
	size_t	i;
	char	*new;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	lennew = ft_strlen(s1) + ft_strlen(s2);
	if (!(new = malloc(sizeof(char) * (lennew + 1))))
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	--i;
	i = ft_strlcat(new, s2, lennew + 1);
	new[i] = '\0';
	return (new);
}
