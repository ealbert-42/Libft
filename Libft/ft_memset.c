/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:02:13 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/26 15:22:48 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*tmp;
	unsigned char	fill;

	tmp = (char *)b;
	i = 0;
	fill = c;
	while (tmp[i])
		i++;
	while (len != 0)
	{
		tmp[i] = fill;
		i++;
		len--;
	}
	return ((void *)b);
}