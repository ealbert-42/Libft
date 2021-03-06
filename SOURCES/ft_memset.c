/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:02:13 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:31:07 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Replace len bytes of b memory address with 'c' bytes.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
	{
		*tmp = (unsigned char)c;
		tmp++;
	}
	return (b);
}
