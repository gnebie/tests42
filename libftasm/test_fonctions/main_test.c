/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:32:21 by gnebie            #+#    #+#             */
/*   Updated: 2018/05/04 15:13:55 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_error(char *str, int i)
{
	printf("\033[31m\tError : %s \n \t\t %i \033[0m \n", str, i);
}

void test_succes(char *str)
{
	printf("\033[33m\tSucces: %s \033[0m \n", str);
}

int main(void)
{
	test_cat();
	test_bzero();
	test_strlen();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_memalloc();
	test_memchr();
	test_memcpm();
	test_memcpy();
	test_memset();
	test_puts();
	test_strcat();
	test_strcpm();
	test_strdup();
	test_strncat();
	test_swap();
	test_tolower();
	test_toupper();
	return (0);
}
