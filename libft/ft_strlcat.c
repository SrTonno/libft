/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:09:52 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/28 17:24:35 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	if (dst == NULL && dstsize == 0)
		return (0);
	d = ft_strlen (dst);
	s = ft_strlen ((char *)src);
	if (dstsize <= d)
		return (dstsize + s);
	while (src[i] != '\0' && (d + i) < (dstsize - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char d[] = "HOLA";
	char s[] = "ADIOS";
	size_t a;
	a = strlcat(d, s, 0);
	printf("%zu - %s\n", a, d);
	return(0);
}
*/
