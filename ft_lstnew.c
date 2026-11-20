/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:58:57 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/20 14:28:13 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//for a ptr, it can be written in this two ways
//nextnode->content = content; (usual)
//(*nextnode).content = content; (not usual)
//for a non ptr just a .
t_list	*ft_lstnew(void *content)
{
	t_list	*nextnode;

	nextnode = malloc(sizeof(t_list));
	if (!nextnode)
		return (NULL);
	nextnode->content = content;
	nextnode->next = NULL;
	return (nextnode);
}
