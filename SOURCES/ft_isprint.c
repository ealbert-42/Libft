/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:40:44 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:36:42 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if 'c' is a printable ASCII character. Returns 0 if it isn't.
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
