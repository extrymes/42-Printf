/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:13:40 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 18:39:48 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnbr(long nbr, int *printed_chars);

void	ft_putint(int nbr, int *printed_chars)
{
	long	lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		ft_putchar('-', printed_chars);
		lnbr = -lnbr;
	}
	ft_putnbr(lnbr, printed_chars);
}

static void	ft_putnbr(long nbr, int *printed_chars)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10, printed_chars);
	ft_putchar(nbr % 10 + '0', printed_chars);
}
