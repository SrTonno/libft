/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:16:13 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/20 12:27:33 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	buscador(const char *haystack, const char *needle, size_t i, size_t len)
{
	int	p;

	p = 0;
	while (needle[p] != '\0' )
	{
		if (haystack[i] != needle[p])
			return (0);
		i++;
		p++;
	}
	if (len < i)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (haystack == 0 && len == 0)
		return (0);
	else if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = buscador(haystack, needle, i, len);
			if (j == 1)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
