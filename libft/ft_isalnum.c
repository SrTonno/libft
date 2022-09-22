/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:28:06 by tvillare          #+#    #+#             */
/*   Updated: 2022/09/14 17:14:48 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int carac)
{
	if ((48 <= carac && 57 >= carac)
		|| (65 <= carac && 90 >= carac)
		|| (97 <= carac && 122 >= carac))
		return (1);
	else
		return (0);
}
