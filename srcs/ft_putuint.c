/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:56:09 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 17:00:10 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putnbr(unsigned int nbr, int *printed_chars)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10, printed_chars);
	ft_putchar(nbr % 10 + '0', printed_chars);
}

int	ft_putuint(unsigned int nbr, int *printed_chars)
{
	if (nbr > UINT_MAX)
		return (0);
	ft_putnbr(nbr, printed_chars);
	return (1);
}
