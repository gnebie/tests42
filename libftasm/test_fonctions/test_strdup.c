/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:39 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:39 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_strdup(void)
{
	char	*str1;
	char	*str2;
	char	*test = "test 1 - 2 1 - 2";
	int		i;

	i = 0;
	while (i < 256)
	{
		str1 = ft_strdup(test);
		str2 = strdup(test);
		if (!str1 || !str2)
		{
			test_error("ft_strdup", 0);
			return ;
		}
		str1[0] = 'T';
		str2[0] = 'T';
		str1[15] = '9';
		str2[15] = '9';
		if (memcmp(str1, str2, 16))
		{
			test_error("ft_strdup", 0);
			return ;
		}
		free(str1);
		free(str2);
		str1 = NULL;
		str2 = NULL;
		i++;
	}
	test_succes("ft_strdup");
}
