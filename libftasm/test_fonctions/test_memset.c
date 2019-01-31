/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:02 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:03 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_memset(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	void	*tmp;
	int		i;

	i = 0;
	while (i < 256)
	{
		tmp = str1;
		if (tmp != ft_memset(str1, i, STRING_SIZE))
			test_error("memset pointeur", 0);
		memset(str2, i, STRING_SIZE);
		if (memcmp(str1, str2, STRING_SIZE))
		{
			test_error("memset", i);
			return ;
		}
		i++;
	}
	test_succes("memset");
}
