/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:38:34 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/21 19:31:24 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*pnt;
	int			i;
	//size_t		max_len;

	i = 0;
	//max_len = ft_strlen((char *)s);
	//if (max_len <= start)
		//return (NULL);
	pnt = ft_calloc(sizeof(char), (len + 1));
	if (pnt == NULL)
		return (NULL);
	if (start > 0)
		s = s + start;
	while (len--)
		pnt[i++] = (char)s++;
	pnt[i] = '\0';
	return (pnt);
}
