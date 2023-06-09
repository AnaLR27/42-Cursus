/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:01:23 by alorenzo          #+#    #+#             */
/*   Updated: 2023/06/10 13:04:48 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ndigit(long n)
{
	size_t	digit;

	digit = 1;
	if (n >= 0 && n <= 9)
		return (digit);
	else if (n < 0)
	{
		n = -n;
		digit++;
	}
	while (n > 9)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*strn;
	size_t	digits;
	long	nb;

	nb = n;
	digits = ft_ndigit(nb);
	strn = (char *)malloc(sizeof (char) * (digits + 1));
	if (!strn)
		return (0);
	strn[digits--] = 0;
	if (nb < 0)
	{
		strn[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		strn[0] = '0';
	while (nb > 0)
	{
		strn[digits] = (char)((nb % 10) + 48);
		digits--;
		nb = nb / 10;
	}
	return (strn);
}
