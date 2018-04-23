/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:56 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:57 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_memcpy(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	char 	dest1[STRING_SIZE];
	char 	dest2[STRING_SIZE];
	void	*tmp;
	int		i;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		str2[i] = '1';
		i++;
	}
	tmp = dest1;
	if (tmp != ft_memcpy(dest1, str1, STRING_SIZE))
		test_error("memcpy pointeur", 0);
	memcpy(dest2, str2, STRING_SIZE);
	i = memcmp(dest1, dest2, STRING_SIZE);
	if (i)
		test_error("memcpy", 0);
	else
		test_succes("memcpy");
}
