/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:49:41 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 21:53:33 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_print_data(va_list args, const char c, int *printed_chars);
static int	ft_is_valid_format(char c);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed_chars;

	va_start(args, str);
	printed_chars = 0;
	while (*str)
	{
		if (*str == '%' && ft_is_valid_format(*(str + 1)))
			ft_print_data(args, *(++str), &printed_chars);
		else
			ft_putchar(*str, &printed_chars);
		str++;
	}
	va_end(args);
	return (printed_chars);
}

static void	ft_print_data(va_list args, const char c, int *printed_chars)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int), printed_chars));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *), printed_chars));
	if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long), printed_chars));
	if (c == 'd' || c == 'i')
		return (ft_putint(va_arg(args, int), printed_chars));
	if (c == 'u')
		return (ft_putuint(va_arg(args, unsigned int), printed_chars));
	if (c == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), printed_chars));
	if (c == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), printed_chars));
	ft_putchar('%', printed_chars);
}

static int	ft_is_valid_format(char c)
{
	int	i;

	i = 0;
	while (FORMATS[i])
	{
		if (c == FORMATS[i])
			return (1);
		i++;
	}
	return (0);
}
