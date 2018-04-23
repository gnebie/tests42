/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:24 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:25 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_tolower(void)
{
//	char		*strmaj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	char		*strmin = "abcdefghijklmnopqrstuvwxyz";
	int			i;

	i = 0;
	while (i < 256)
	{
		if (tolower(i) != ft_tolower(i))
		{
			test_error("ft_tolower", i);
			return ;
		}
		i++;
	}
	test_succes("ft_tolower");

}
