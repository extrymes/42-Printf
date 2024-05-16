/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:03:53 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 16:03:28 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnbr(unsigned long int nbr, const char *base, unsigned long int base_len, int *printed_chars)
{
	if (nbr >= base_len)
		ft_putnbr(nbr / base_len, base, base_len, printed_chars);
	ft_putchar(base[nbr % base_len], printed_chars);
}

int	ft_putptr(unsigned long int value, int *printed_chars)
{
	const char			*base = "0123456789abcdef";
	unsigned long int	base_len = 16;

	ft_putstr("0x", printed_chars);
	ft_putnbr(value, base, base_len, printed_chars);
	return (1);
}
