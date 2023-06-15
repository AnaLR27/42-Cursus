/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:56:27 by alorenzo          #+#    #+#             */
/*   Updated: 2023/06/15 14:48:29 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	x;
	size_t	len;

	str = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str)
		return (NULL);
	x = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			str[x++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	str[x] = 0;
	return (str);
}
