/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putud.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:14:46 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/29 23:49:22 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putud(unsigned int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putud(nb / 10, len);
		ft_putud(nb % 10, len);
	}
	return (0);
}
