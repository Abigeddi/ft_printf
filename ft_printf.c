/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:22:00 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/29 23:31:52 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_apres(char *s, va_list valist, int *len, int index)
{
	if (s[index] == 'd' || s[index] == 'i')
		ft_putnbr(va_arg(valist, int), len);
	else if (s[index] == 'c')
		ft_putchar(va_arg(valist, int));
	else if (s[index] == 's')
		ft_putstr(va_arg(valist, char *), len);
	else if (s[index] == '%')
	{
		ft_putchar('%');
		(*len)++;
	}
	else if (s[index] == 'x')
		ft_putlowhex(va_arg(valist, unsigned int), len);
	else if (s[index] == 'X')
		ft_putuphex(va_arg(valist, unsigned int), len);
	else if (s[index] == 'p')
	{
		write (1, "0x", 2);
		(*len)++;
		(*len)++;
		ft_putpointer(va_arg(valist, unsigned long), len);
	}
	else if (s[index] == 'u')
		ft_putud(va_arg(valist, unsigned int), len);
}

int	ft_printf(char *s, ...)
{
	int			i;
	va_list		valist;
	int			len;

	i = 0;
	len = 0;
	va_start(valist, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_apres(s, valist, &len, i);
		}
		else
		{
			ft_putchar(s[i]);
			len++;
			i++;
		}
	}
	va_end(valist);
	return (len);
}

// int main() 
// {
//     char *str = "hello";
// 	char *tmp;
// 	int len ;
//    	len = ft_printf("dfgdf----------%d%%%%%s%p\n\n\n\n",48,str,tmp);
//     int lenx = printf("dfgdf----------%d%%%%%s%p\n\n\n\n",48,str,tmp);
// 	printf ("%d\n",lenx);
// 	printf("%d",len);
// }