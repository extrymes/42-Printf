/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:49:41 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 17:37:38 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_print_data(va_list args, const char c, int *printed_chars)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int), printed_chars));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *), printed_chars));
	if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long int), printed_chars));
	if (c == 'd' || c == 'i')
		return (ft_putint(va_arg(args, int), printed_chars));
	if (c == 'u')
		return (ft_putuint(va_arg(args, unsigned int), printed_chars));
	if (c == '%')
		return (ft_putchar('%', printed_chars));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed_chars;
	int		i;

	va_start(args, str);
	printed_chars = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			if (!ft_print_data(args, str[++i], &printed_chars))
				return (-1);
			continue ;
		}
		ft_putchar(str[i], &printed_chars);
	}
	va_end(args);
	return (printed_chars);
}
