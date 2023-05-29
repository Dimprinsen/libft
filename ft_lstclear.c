/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:18:36 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/29 22:24:29 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	node = *lst;
	while (node)
	{
		tmp = node->next;
		ft_lstdelone(node, del);
		node = tmp;
	}
	*lst = NULL;
}
