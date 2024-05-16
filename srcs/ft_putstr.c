/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 04:14:01 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 16:03:54 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str, int *printed_chars)
{
	size_t	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], printed_chars);
	return (1);
}
