/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:13:40 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 16:59:57 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnbr(int nbr, int *printed_chars)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10, printed_chars);
	ft_putchar(nbr % 10 + '0', printed_chars);
}

int	ft_putint(int nbr, int *printed_chars)
{
	if (nbr > INT_MAX)
		return (0);
	if (nbr < 0)
	{
		ft_putchar('-', printed_chars);
		nbr = -nbr;
	}
	ft_putnbr(nbr, printed_chars);
	return (1);
}
