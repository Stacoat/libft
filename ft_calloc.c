/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrobert <emrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:46:11 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/22 11:24:31 by emrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nbyte;
	int		*ptr;

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
