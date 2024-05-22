/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:50:45 by sabras            #+#    #+#             */
/*   Updated: 2024/05/22 15:53:25 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FORMATS "cspdiuxX%"
# define BASE "0123456789abcdef"
# define BASE_LEN 16
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(int c, int *printed_chars);
void	ft_putstr(char *str, int *printed_chars);
void	ft_puthexa(unsigned long value, char *base, int *printed_chars);
void	ft_putptr(unsigned long value, int *printed_chars);
void	ft_putint(int nbr, int *printed_chars);
void	ft_putuint(unsigned int nbr, int *printed_chars);

#endif
