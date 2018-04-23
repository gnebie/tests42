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

void test_strcat(void)
{
	char 	str1[STRING_SIZE];
	char 	str2[STRING_SIZE];
	char 	dest1[STRING_SIZE + STRING_SIZE];
	char 	dest2[STRING_SIZE + STRING_SIZE];
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
	if (tmp != ft_strcat(dest1, str1))
		test_error("ft_strcat pointeur", 0);
	strcat(dest2, str2);
	i = memcmp(dest1, dest2, STRING_SIZE * 2);
	if (i)
		test_error("ft_strcat", 0);
	else
		test_succes("ft_strcat");
}
