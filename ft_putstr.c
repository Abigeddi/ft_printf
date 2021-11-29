/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:18:56 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/29 23:00:07 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (1, &s[i], 1);
		(*len)++;
		i++;
	}
	return (0);
}
