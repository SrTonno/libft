/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:40:21 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/21 16:56:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nega(int n, int fd)
{
	if (n < 0)
	{
			n = n * -1;
			write(fd, "-", fd);
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

void ft_putnbr_fd(int n, int fd)
{
	char	list[10];

	//if (n < -2147483648 || n > 2147483647)
	if (n != -2147483648)
	{
		n = nega(n, fd);
		combert(n, fd, 0, list);
	}
	else
		write(fd, "-2147483648", 11);
}

int main()
{
	write(2, "/", 1);
	ft_putnbr_fd(-2147483648LL, 0);
}

