/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:17:15 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/13 16:08:02 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((unsigned char)c == 0)
		return ((char *) s + i);
	while (i > 0)
	{
		if (s[i - 1] == (unsigned char)c)
			return ((char *) s + i - 1);
		i--;
	}
	return (NULL);
}
