/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:34:52 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/10 21:50:51 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbyte)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = 0;
	if (d <= s)
	{
		while (i < nbyte)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (i < nbyte)
		{
			d[nbyte - 1 - i] = s[nbyte - 1 - i];
			i++;
		}
	}
	return (dest);
}
