/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rulrike <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:28:12 by rulrike           #+#    #+#             */
/*   Updated: 2020/11/20 22:31:35 by rulrike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s && fd > 0)
	{
		while (*(s + i) != '\0')
		{
			write(fd, (s + i), 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}
