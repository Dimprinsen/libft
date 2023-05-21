/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:46:53 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/18 16:21:36 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = ft_strlen(s);
	dup = malloc(i + 1);
	if (!dup)
		return (NULL);
	dup[i] = 0;
	while (i--)
		dup[i] = s[i];
	return (dup);
}
