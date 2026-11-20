/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:50:12 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/17 15:15:51 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*strim;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_ischarset((char *)set, s1[start]))
		start++;
	while (start < end && ft_ischarset((char *)set, s1[end - 1]))
		end--;
	strim = malloc(
			sizeof(char) * (end - start + 1)
			);
	if (strim == NULL)
		return (NULL);
	while (start < end)
		strim[i++] = s1[start++];
	strim[i] = '\0';
	return (strim);
}
