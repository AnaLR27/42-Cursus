/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:27:19 by alorenzo          #+#    #+#             */
/*   Updated: 2023/04/25 17:15:54 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cnt;

	cnt = ft_strlen(s);
	while (cnt > 0 && s[cnt] != (char)c)
		cnt--;
	if (s[cnt] == (char)c)
		return ((char *)&s[cnt]);
	return (0);
}
