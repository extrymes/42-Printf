/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:50:45 by sabras            #+#    #+#             */
/*   Updated: 2024/05/16 20:12:06 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE "0123456789abcdef"
# define BASE_LEN 16
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_print_data(va_list args, const char c, int *printed_chars);
int		ft_putchar(int c, int *printed_chars);
int		ft_putstr(char *str, int *printed_chars);
void	ft_puthexa(unsigned long value, int *printed_chars);
int		ft_putptr(unsigned long int value, int *printed_chars);
int		ft_putint(int nbr, int *printed_chars);
int		ft_putuint(unsigned int nbr, int *printed_chars);

#endif
