/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrobert <emrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:48:32 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/22 12:44:58 by emrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	//		test 1 : just del content and free lst
	if (!lst)
		return ;
	del(lst->content);
	free (lst);
	
	//		test 2 : supossed lst is the "head". Make lst point to next and nodetofree to del content and free the node
	// t_list	*nodetofree;
	
	// if (!lst)
	//  	return ;
	// nodetofree = lst;
	// lst = lst->next;
	// del(nodetofree->content);
	// free (nodetofree);
	
	//		test 3 : again if lst = "head". Make nextnode point to next, lst to del and free. And lst point to the next node
	// t_list	*nextnode;
	
	// if (!lst)
	// 	return ;
	// nextnode = lst->next;
	// del(lst->content);
	// free (lst);
	// lst = nextnode;
}
