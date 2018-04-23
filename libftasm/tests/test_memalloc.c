/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:39 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:39 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_memalloc(void)
{
	char	*str1;
	int		i;

	str1 = ft_memalloc(STRING_SIZE);
	i = 0;
	while (i < STRING_SIZE)
	{
		if (str1[i] != 0)
		{
			test_error("memalloc", i);
			return ;
		}
		str1[i] = 42;
		i++;
	}
	test_succes("ft_memealloc");
}
