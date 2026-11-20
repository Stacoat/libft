/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:30:58 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/12 16:20:20 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	occ;
	unsigned char	*str;
	size_t			i;

	occ = c;
	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == occ)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
