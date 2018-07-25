/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tryan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 07:56:47 by tryan             #+#    #+#             */
/*   Updated: 2018/07/17 07:56:49 by tryan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	strt;
	unsigned int	end;
	char			*cpy;
	unsigned int	i;

	if (!(s))
		return (NULL);
	strt = 0;
	while ((s[strt] == ' ' || s[strt] == '\n' || s[strt] == '\t') && s[strt])
		strt++;
	if (!(s[strt]))
		return (ft_strdup(""));
	end = 0;
	while (s[end])
		end++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t' || s[end] == '\0')
			&& end > strt)
		end--;
	if (!(cpy = (char *)malloc(sizeof(char) * ((end - strt) + 2))))
		return (NULL);
	i = 0;
	while (strt <= end)
		cpy[i++] = s[strt++];
	cpy[i] = '\0';
	return (cpy);
}
