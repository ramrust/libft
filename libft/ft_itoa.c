/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 00:05:14 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/25 18:30:31 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		itoalen(int n)
{
	int		len;
	long	k;

	len = 1;
	k = n;
	if (n < 0)
	{
		len++;
		k = -n;
	}
	while ((k = k / 10) != 0)
		len++;
	return (len);
}

int		ft_pow(int n)
{
	int		stepen;
	long	k;

	stepen = 1;
	k = n;
	if (n < 0)
		k = -n;
	while ((k = k / 10) != 0)
		stepen = stepen * 10;
	return (stepen);
}

void	init(long *copy, int *stepen, int *n, int *z)
{
	*copy = *n;
	*stepen = ft_pow(*n);
	*n = itoalen(*n);
	*z = 0;
}

char	*ft_itoa(int n)
{
	long	copy;
	int		z;
	int		stepen;
	char	*new;
	long	num;

	init(&copy, &stepen, &n, &z);
	if (!(new = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	if (copy < 0 && n-- && (copy = -copy))
		new[z++] = 45;
	num = copy;
	while (n > 0 && n--)
	{
		copy = num / stepen;
		new[z++] = copy + 48;
		if (copy % stepen == 0)
			copy = copy / stepen;
		else
			num = num % stepen;
		stepen /= 10;
	}
	new[z] = '\0';
	return (new);
}
