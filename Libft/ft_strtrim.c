/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:34:15 by alorenzo          #+#    #+#             */
/*   Updated: 2023/06/15 14:48:05 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) != 0 && s1[start] != 0)
		start++;
	while (ft_strchr(set, s1[end]) != 0 && end > start)
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
