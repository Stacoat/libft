/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:40:41 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/15 18:23:12 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;

	i = 0;
	lend = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	else if (size <= lend)
		return (size + ft_strlen(src));
	while ((lend + i) < size - 1 && src[i] != '\0')
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + ft_strlen(src));
}
