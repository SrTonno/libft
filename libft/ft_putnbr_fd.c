/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:40:21 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/26 19:32:26 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int nega(int n, int fd)
{
	if (n < 0)
	{
			n = n * -1;
			write(fd, "-", 1);
	}
	return (n);
}

void	combert(int nb, int fd, int i, char *list)
{
	int	mod;

	mod = nb % 10;
	nb = nb / 10;
	list[i] = mod + '0';
	i++;
	if (nb > 9)
		combert(nb, fd, i, list);

	else
	{
		if (nb != 0)
			list[i] = nb + '0';
		while (i >= 0)
		{
			write(fd, &list[i], 1);
			i--;
		}
	}
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (0 > n)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
/*
int	main(void)
{
	write(1, "/", 1);
	ft_putnbr_fd(21474, 1);
	return (0);
}
*/
