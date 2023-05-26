/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:26:13 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/24 13:27:04 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content)
{
	content: The content to create the node with.
Return value The new node
External functs. malloc
Description Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
