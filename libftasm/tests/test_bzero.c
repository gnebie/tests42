/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:40:56 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:02 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_bzero(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	int		i;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		str2[i] = '1';
		i++;
	}
	ft_bzero(str1, STRING_SIZE);
	bzero(str2, STRING_SIZE);
	i = memcmp(str1, str2, STRING_SIZE);
	if (i)
		test_error("bzero", 0);
	else
		test_succes("bzero");
}
