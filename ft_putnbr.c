/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:09:47 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/29 23:03:58 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *len)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		(*len)++;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		(*len)++;
	}
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	return (0);
}
