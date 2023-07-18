/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:38:24 by alorenzo          #+#    #+#             */
/*   Updated: 2023/07/18 13:40:43 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (lst)
	{
		aux = lst;
		while (aux)
		{
			f(aux->content);
			aux = aux->next;
		}
	}
}
