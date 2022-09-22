/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:04:06 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/20 17:04:30 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	quitar_espacios(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	return (i);
}

int	no_numero(const char *str, int i)
{
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

int	num_final(const char *str, int i, int z, int sig)
{
	int	num;
	int	sub;

	sub = 1;
	num = 0;
	z--;
	while (i <= z)
	{
		num = num + ((str[z] - '0') * sub);
		sub = sub * 10;
		z--;
	}
	if (sig == 1)
		num = num * -1;
	return (num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	suma;
	int	final;
	int	z;

	i = quitar_espacios(str);
	suma = 0;
	signo = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			suma++;
		else if (str[i] == '-')
			signo++;
		i++;
	}
	if ((suma >= 1 && signo >= 1) || (suma > 1) || (signo > 1))
		return (0);
	if (str[i] < 48 || str[i] > 57)
		return (0);
	if (str[i] < 48 || str[i] > 57)
		return (0);
	z = no_numero(str, i);
	final = num_final(str, i, z, signo);
	//if (final > 2147483647 || final < -2147483648)
	//	return (0);
	return (final);
}
