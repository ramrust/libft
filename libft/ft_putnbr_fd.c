/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:31:42 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/24 17:03:44 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pechat(int k, long int j, long int nbl, int fd)
{
	char	c;

	j = nbl;
	while (k > 0)
	{
		j = nbl / k;
		c = j + 48;
		write(fd, &c, 1);
		if (j % k == 0)
			j = j / k;
		else
			nbl = nbl % k;
		k /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int			k;
	long int	j;
	long int	nbl;

	k = 1;
	j = n;
	nbl = n;
	if (j < 0)
	{
		write(fd, "-", 1);
		j = j * (-1);
		nbl = -nbl;
	}
	while ((j = j / 10) > 0)
		k *= 10;
	ft_pechat(k, j, nbl, fd);
}
