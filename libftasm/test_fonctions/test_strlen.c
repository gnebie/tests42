/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:33 by gnebie            #+#    #+#             */
/*   Updated: 2018/05/04 15:16:27 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_strlen(void)
{
	int		i;
	size_t	res1;
	size_t	res2;
	char	str[STRING_SIZE * 32];

	i = 0;
	while (i < STRING_SIZE * 32 - 1)
	{
		str[i] = (i % 126) ? i % 126 : '0';
		i++;
		str[i] = 0;
		res1 = ft_strlen(str);
		res2 = strlen(str);
		if (res1 != res2)
		{
			test_error("ft_strlen", i - 1);
			return ;
		}
	}
	test_succes("ft_strlen");
}
