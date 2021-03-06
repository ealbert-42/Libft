/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:06:56 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:36:29 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints the 's' string in the 'fd' file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int		i;

	if (fd < 1)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
