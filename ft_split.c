/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:58:12 by ttinnerh          #+#    #+#             */
/*   Updated: 2023/05/23 23:49:23 by ttinnerh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
	strs = NULL;
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
		{
			while (str[i] == c)
				i++;
		}
	}
	return (word);
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k] != '\0' && str[*k] == c)
		(*k)++;
	while (str[*k] != c && str[*k] != '\0')
		(*k)++;
	word = (char *)malloc(sizeof(char) * (*k - j + 1));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, &str[j], (*k - j + 1));
	return (word);
}

static void	ft_fill_strs(char *s, char c, char **strs, int wc)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			l = 0;
			strs[i] = ft_stralloc(s, c, &l);
			if (strs[i] == NULL)
			{
				ft_free(strs);
				return ;
			}
			i++;
			s += l - 1;
		}
		s++;
	}
	strs[wc] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		wc;

	if (s == NULL)
		return (NULL);
	wc = ft_wordcount((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (wc + 1));
	if (strs == NULL)
		return (NULL);
	ft_fill_strs((char *)s, c, strs, wc);
	return (strs);
}
