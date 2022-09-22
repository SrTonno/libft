/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:20:16 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/21 12:30:31 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pnt;
	size_t	pp;


	pp = size * count;
	if (pp / size != count)
		return (NULL);
	pnt = malloc(pp);
	if (pnt == NULL)
		return (pnt);
	ft_bzero(pnt, pp);
	return (pnt);
}
