/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabras <sabras@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:35:53 by sabras            #+#    #+#             */
/*   Updated: 2024/05/18 19:09:48 by sabras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		printed_chars;

	printf("--------- TEST 1 ---------\n");
	printed_chars = printf("printf:    %p\n", &printed_chars);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %p\n", &printed_chars);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 2 ---------\n");
	printed_chars = printf("printf:    %p\n");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %p\n");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 3 ---------\n");
	printed_chars = printf("printf:    %p\n", 42);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %p\n", 42);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 4 ---------\n");
	printed_chars = printf("printf:    %c\n", 'A');
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %c\n", 'A');
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 5 ---------\n");
	printed_chars = printf("printf:    %s\n", "42born2code");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %s\n", "42born2code");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 6 ---------\n");
	printed_chars = printf("printf:    %d\n", INT_MIN - 1);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %d\n", INT_MIN - 1);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 7 ---------\n");
	printed_chars = printf("printf:    %d\n", INT_MAX + 1);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %d\n", INT_MAX + 1);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 8 ---------\n");
	printed_chars = printf("printf:    %u\n", UINT_MAX);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %u\n", UINT_MAX);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 9 ---------\n");
	printed_chars = printf("printf:    %u\n", UINT_MAX + 1);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %u\n", UINT_MAX + 1);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 10 ---------\n");
	printed_chars = printf("printf:    %x\n", 42);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %x\n", 42);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 11 ---------\n");
	printed_chars = printf("printf:    %X\n", 42);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %X\n", 42);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 12 ---------\n");
	printed_chars = printf("printf:    %x\n", -42);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %x\n", -42);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 13 ---------\n");
	printed_chars = printf("printf:    %d\n");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %d\n");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 14 ---------\n");
	printed_chars = printf("printf:    %s %d %s\t%c\n", "The best school is ", 42, "Paris", '.');
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %s %d %s\t%c\n", "The best school is ", 42, "Paris", '.');
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 15 ---------\n");
	printed_chars = printf("printf:    %c\n", "Code");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %c\n", "Code");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 16 ---------\n");
	printed_chars = printf("printf:    %c\n", 'C');
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %c\n", 'C');
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 17 ---------\n");
	printed_chars = printf("printf:    %c\n", 0);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %c\n", 0);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 18 ---------\n");
	printed_chars = printf("printf:    %s %s\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %s %s\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 19 ---------\n");
	printed_chars = printf("printf:    %p %p\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %p %p\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 20 ---------\n");
	printed_chars = printf("printf:    %x %x\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %x %x\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 21 ---------\n");
	printed_chars = printf("printf:    %X %X\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %X %X\n", 0, 0);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 22 ---------\n");
	printed_chars = printf("printf:    %\n");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %\n");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 23 ---------\n");
	printed_chars = printf("printf:    %% %%\n");
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %% %%\n");
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 24 ---------\n");
	printed_chars = printf("printf:    %x\n", INT_MIN);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %x\n", INT_MIN);
	printf("return: %d\n", printed_chars);
	printf("--------- TEST 25 ---------\n");
	printed_chars = printf("printf:    %x\n", LONG_MAX);
	printf("return: %d\n", printed_chars);
	printed_chars = ft_printf("ft_printf: %x\n", LONG_MAX);
	printf("return: %d\n", printed_chars);
	return (0);
}
