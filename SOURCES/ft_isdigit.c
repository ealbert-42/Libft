/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:47:07 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:35:25 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if 'c' is an ASCII number. Returns 0 if it isn't.
*/

int		ft_isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	return (0);
}
