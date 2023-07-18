/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:00:52 by alorenzo          #+#    #+#             */
/*   Updated: 2023/07/18 13:34:52 by alorenzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list	*aux;

	if (*lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		*lst = NULL;
	}
}
