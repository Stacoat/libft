/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 16:17:38 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/17 15:16:51 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstrs(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i > 0 && str[i] == c && str[i - 1] != c)
			count++;
		if (str[i + 1] == '\0' && str[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_countwords(const char *str, char c, int i)
{
	int		count;

	count = 0;
	while (str[i] != c && str[i])
	{
		i++;
		count++;
	}
	return (count);
}

static char	*ft_fillstr(const char *src, char c, int *i)
{
	int		j;
	char	*str;
	int		index;

	j = 0;
	index = *i;
	str = malloc(sizeof(char) * (ft_countwords(src, c, index) + 1));
	if (str == NULL)
		return (NULL);
	while (src[*i] != c && src[*i])
	{
		str[j] = src[*i];
		*i += 1;
		j++;
	}
	str[j] = '\0';
	return (str);
}

static void	*free_array(char **array, int y)
{
	while (y >= 0)
	{
		free(array[y]);
		y--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		y;
	int		i;

	if (!s)
		return (NULL);
	array = malloc(sizeof (char *) * (ft_countstrs(s, c) + 1));
	if (array == NULL)
		return (NULL);
	y = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		array[y] = ft_fillstr(s, c, &i);
		if (array[y++] == NULL)
			return (free_array(array, --y));
		while (s[i] == c && s[i])
			i++;
	}
	array[y] = NULL;
	return (array);
}
