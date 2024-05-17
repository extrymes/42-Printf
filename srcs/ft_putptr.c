/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:03:53 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 21:52:32 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putptr(unsigned long value, int *printed_chars)
{
	if (!value)
		return (ft_putstr("(nil)", printed_chars));
	ft_putstr("0x", printed_chars);
	ft_puthexa(value, printed_chars);
}
