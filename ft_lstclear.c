/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrobert <emrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 12:46:33 by emrobert          #+#    #+#             */
/*   Updated: 2026/11/22 12:57:10 by emrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verif all header! emmrober != emrobert
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nodetodel;
	
	if (!lst || !*lst)
	 	return ;
	while(*lst == NULL)
	{
		nodetodel = *lst;
		*lst = (*lst)->next;
		del(nodetodel->content);
		free (nodetodel);
	}
}
