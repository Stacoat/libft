/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 15:07:58 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/18 18:02:28 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	lint(long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

static int	verif_nbr(char *str, long int *nbr, int *i)
{
	if (*nbr == 0)
	{
		str[*i] = '0';
		*i = *i + 1;
	}
	else if (*nbr < 0)
	{
		*nbr *= -1;
		return (-1);
	}
	return (1);
}

char	*ft_itoa(int n)
{
	char		*str;
	char		c;
	int			i;
	long int	nbr;
	int			signe;

	i = 0;
	nbr = n;
	signe = 1;
	str = malloc(sizeof(char) * (lint(nbr) + 1));
	if (str == NULL)
		return (NULL);
	signe = verif_nbr(str, &nbr, &i);
	while (nbr > 0)
	{
		c = nbr % 10;
		str[i++] = c + 48;
		nbr = nbr / 10;
	}
	if (signe < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
