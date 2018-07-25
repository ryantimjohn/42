/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:40:15 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 11:40:17 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*getnextword(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*nextword;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] != c && s[i + j])
		j++;
	if (!(nextword = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (s[i] != c && s[i])
		nextword[k++] = s[i++];
	nextword[k] = '\0';
	return (nextword);
}

static unsigned int	wordcount(char const *s, char c)
{
	unsigned int	numwords;

	numwords = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			numwords++;
		while (*s != c && *s)
			s++;
	}
	return (numwords);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	numwords;
	char			**output;
	unsigned int	i;
	unsigned int	l;
	char			*nextword;

	if (!(s))
		return (NULL);
	numwords = (wordcount(s, c) + 1);
	if (!(output = (char **)malloc(sizeof(char*) * (numwords + 1))))
		return (NULL);
	i = 0;
	l = 0;
	while (--numwords > 0 && s[i])
	{
		while (s[i] == c)
			i++;
		if (!(nextword = getnextword(s + i, c)))
			return (NULL);
		output[l++] = nextword;
		while (s[i] != c && s[i])
			i++;
	}
	output[l] = (NULL);
	return (output);
}
