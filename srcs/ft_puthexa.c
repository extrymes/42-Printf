/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:12:41 by sabras            #+#    #+#             */
/*   Updated: 2024/05/22 19:14:10 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_puthexa(unsigned long value, char *base, int *printed)
{
	if (value >= 16)
		ft_puthexa(value / 16, base, printed);
	ft_putchar(base[value % 16], printed);
}
