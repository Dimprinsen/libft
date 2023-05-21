/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:07:04 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/21 21:03:28 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi( const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;

	len = ft_strlen(s);
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	new[len] = 0;
	while (len--)
		new[len] = (*f)((unsigned int)len, s[len]);
	return (new);
}
