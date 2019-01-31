/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:46 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:47 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_strncat(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	char 	dest1[STRING_SIZE + STRING_SIZE];
	char 	dest2[STRING_SIZE + STRING_SIZE];
	int		sizetocat =  STRING_SIZE * 2;
	void	*tmp;
	int		i;

	i = 0;
	while (i < STRING_SIZE)
	{
		str1[i] = '1';
		str2[i] = '1';
		dest1[i] = '2';
		dest2[i] = '2';
		i++;
	}
	str1[STRING_SIZE - 1] = 0;
	str2[STRING_SIZE - 1] = 0;
	dest1[STRING_SIZE - 1] = 0;
	dest2[STRING_SIZE - 1] = 0;
	tmp = dest1;
	if (tmp != ft_strncat(dest1, str1, sizetocat))
		test_error("ft_strcat pointeur ", 0);
	strncat(dest2, str2, sizetocat);
	i = memcmp(dest1, dest2, STRING_SIZE + STRING_SIZE - 1);
	if (i) {
			test_error("ft_strncat", i);
			printf("dest my %s\n", dest1);
			printf("dest tr %s\n", dest2);
	}
	else
		test_succes("ft_strncat");
}
