/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigeddi <abigeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:22:44 by abigeddi          #+#    #+#             */
/*   Updated: 2021/11/30 00:44:50 by abigeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int				ft_putchar(char c, int *len);
int				ft_putnbr(int n, int *len);
void			ft_putstr(char *s, int *len);
void			ft_apres(char *s, va_list valist, int *len, int index);
int				ft_printf(const char *s, ...);
unsigned int	ft_putlowhex(unsigned int nb, int *len);
unsigned int	ft_putuphex(unsigned int nb, int *len);
unsigned long	ft_putpointer(unsigned long nb, int *len);
unsigned int	ft_putud(unsigned int nb, int *len);
#endif