/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:14:01 by sabras            #+#    #+#             */
/*   Updated: 2024/05/17 18:35:46 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void	ft_putstr(char *str, int *printed_chars)
{
	if (!str)
		return (ft_putstr("(null)", printed_chars));
	while (*str)
		ft_putchar(*(str++), printed_chars);
}
