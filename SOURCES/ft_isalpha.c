/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:52:05 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:35:45 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if 'c' is an ASCII letter. Returns 0 if it isn't.
*/

int		ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c < 123 && c > 96))
		return (1);
	return (0);
}
