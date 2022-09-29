/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:01:10 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/29 14:48:55 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)s + i);
}
/*
char	*ft_strchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s;
	while (*aux != (unsigned char)c)
	{
		if (*aux == '\0')
			return (0);
		aux++;
	}
	return (aux);
}
*/
