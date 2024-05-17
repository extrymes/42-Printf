/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:12:41 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 21:29:00 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthexa(unsigned long value, int *printed_chars)
{
	if (value >= BASE_LEN)
		ft_puthexa(value / BASE_LEN, printed_chars);
	ft_putchar(BASE[value % BASE_LEN], printed_chars);
}
