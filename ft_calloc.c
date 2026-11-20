/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:46:11 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/15 18:09:31 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nbyte;
	int		*ptr;
	size_t	i;

	i = 0;
	if (nmemb <= 0 || size <= 0)
		return (malloc(1));
	nbyte = nmemb * size;
	if (nmemb != nbyte / size && size != nbyte / nmemb)
		return (NULL);
	ptr = malloc(nbyte);
	if (ptr == NULL)
		return (NULL);
	ft_bzero((void *)ptr, nbyte);
	return (ptr);
}
