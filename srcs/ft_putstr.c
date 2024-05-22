/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:14:01 by sabras            #+#    #+#             */
/*   Updated: 2024/05/22 19:17:18 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *str, int *printed)
{
	if (!str)
		return (ft_putstr("(null)", printed));
	while (*str)
		ft_putchar(*(str++), printed);
}
