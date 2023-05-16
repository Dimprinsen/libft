/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:37:12 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/09 00:12:12 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = 0;
	if (size == 0)
	{
		while (src[l] != '\0')
			l++;
		return (l);
	}
	while (l < size - 1 && src[l] != '\0')
	{
		dst[l] = src[l];
		l++;
	}
	if (l < size)
		dst[l] = '\0';
	while (src[l] != '\0')
		l++;
	return (l);
}
