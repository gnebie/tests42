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

void write_line(char *str, size_t size)
{
	printf("size ask %lu\n",size - 1);
	write (1, "[", 1);
	write (1, str, size);
	write (1, "]\n", 2);
}

void test_memcpy(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	char 	dest1[STRING_SIZE];
	char 	dest2[STRING_SIZE];
	void	*tmp;
	int		i;
	int		j = 0;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		str2[i] = '1';
		dest1[i] = '8';
		dest2[i] = '8';
		i++;
	}
	tmp = dest1;
	while (j < STRING_SIZE)
	{
		if (tmp != ft_memcpy(dest1, str1, j))
			return test_error("memcpy pointeur", j);
		memcpy(dest2, str2, j);
		if (memcmp(dest1, dest2, STRING_SIZE))
		{
			test_error("memcpy", j);
			write_line(dest1, j + 1);
			write_line(dest2, j + 1);
			return ;
		}
		++j;
	}
	test_succes("memcpy");
}
