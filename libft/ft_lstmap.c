/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:40:17 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/30 21:22:16 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pnt;
	t_list	*tmp;
	int		i;

	if (!lst || !del || !f)
		return (NULL);
	i = 0;
	pnt = ft_calloc(ft_lstsize(lst), sizeof(t_list) + 1);
	if (!pnt)
		return (NULL);
	tmp = lst;
	pnt = tmp;
	while (tmp)
	{
		pnt[i++] = f(tmp->);
		tmp = tmp->next;
	}
	ft_lstclear(&lst, del);
	return(pnt);
}
