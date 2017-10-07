/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:53:57 by smatias-          #+#    #+#             */
/*   Updated: 2017/01/12 10:54:11 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*aux;

	while (*alst)
	{
		aux = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = aux;
	}
}
