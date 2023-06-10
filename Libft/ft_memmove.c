/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:09:51 by alorenzo          #+#    #+#             */
/*   Updated: 2023/05/25 20:16:15 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	strd = (char *)dest;
	strs = (char *)src;
	i = 0;
	if (!strd && !strs)
		return (0);
	if (strd > strs)
	{
		while (n-- > 0)
			strd[n] = strs[n];
	}
	else
	{
		while (i < n)
		{
			strd[i] = strs[i];
			i++;
		}
	}
	return (dest);
}
