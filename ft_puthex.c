/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:46:26 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/29 23:47:01 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putlowhex(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putlowhex(nb / 16, len);
		ft_putlowhex(nb % 16, len);
	}
	return (0);
}

unsigned int	ft_putuphex(unsigned int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putuphex(nb / 16, len);
		ft_putuphex(nb % 16, len);
	}
	return (0);
}

unsigned long	ft_putpointer(unsigned long nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_putpointer(nb / 16, len);
		ft_putpointer(nb % 16, len);
	}
	return (0);
}
