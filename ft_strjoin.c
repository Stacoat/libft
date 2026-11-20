/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:10:44 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/16 14:38:48 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		lens1;
	int		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	join = malloc (sizeof(char) * (lens1 + lens2 + 1));
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, (lens1 + 1));
	ft_strlcat(join, s2, (lens2 + lens1 + 1));
	return (join);
}
