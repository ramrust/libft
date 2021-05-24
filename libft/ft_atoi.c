/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 17:39:28 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/13 21:45:55 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int i;
	int k;
	int z;

	i = 0;
	k = 1;
	z = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			k = -k;
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
		return (0);
	while (str[i] > 47 && str[i] < 58)
	{
		z = (z * 10 + (str[i] - 48));
		i++;
	}
	return (k * z);
}