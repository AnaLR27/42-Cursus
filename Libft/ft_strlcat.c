/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:24:35 by alorenzo          #+#    #+#             */
/*   Updated: 2023/04/24 20:26:32 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	count2;
	size_t			srclength;
	size_t			destlength;

	count = 0;
	count2 = 0;
	srclength = ft_strlen(src);
	destlength = ft_strlen(dst);
	if (destlength >= dstsize)
		return (srclength + dstsize);
	while (dst[count] != '\0')
		count++;
	while (src[count2] != '\0' && count < (dstsize - 1))
		dst[count++] = src[count2++];
	dst[count] = '\0';
	return (srclength + destlength);
}
