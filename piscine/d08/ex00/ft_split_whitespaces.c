/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 10:17:00 by tryan             #+#    #+#             */
/*   Updated: 2018/03/22 11:55:09 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	**ft_split_whitespaces(char *str)
{
	int		numwords;
	int		word;
	char	**table;
	char	*ptr;
	int		len;

	word = 0;
	numwords = count_words(str) + 1;
	table = (char**)malloc(sizeof(table) * numwords);
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else
		{
			len = ft_strlen(str);
			table[word] = (char*)malloc(sizeof(ptr) * len);
			str = ft_strcpy(table[word], str);
			word++;
		}
	}
	table[word] = (void *)0;
	return (table);
}

int		count_words(char *str)
{
	int		i;
	int		numwords;

	i = 0;
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		numwords = 1;
	else
		numwords = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
				numwords++;
		}
		else
			i++;
	}
	return (numwords);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src && (*src != ' ' && *src != '\t' && *src != '\n'))
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (src);
}
