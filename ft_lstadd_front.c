/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmrober <emmrober@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 13:46:06 by emmrober          #+#    #+#             */
/*   Updated: 2026/11/20 14:28:27 by emmrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//make "new" next points to the lst which point to the head list
//new->next = *lst;
//and then make lst point to the new head list "new"
//*lst = new;
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
