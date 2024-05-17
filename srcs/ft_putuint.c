/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:56:09 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 18:40:42 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putuint(unsigned int nbr, int *printed_chars)
{
	if (nbr >= 10)
		ft_putuint(nbr / 10, printed_chars);
	ft_putchar(nbr % 10 + '0', printed_chars);
}
