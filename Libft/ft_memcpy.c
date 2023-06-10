/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:05:52 by alorenzo          #+#    #+#             */
/*   Updated: 2023/05/25 18:29:20 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	strd = (char *)dest;
	strs = (char *)src;
	i = 0;
	if (!strd && !strs)
		return (0);
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return ((void *)strd);
}
