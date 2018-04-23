/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:34 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:35 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_isascii(void)
{
	int		i;

	i = 0;
	while (i < 256)
	{
		if (ft_isascii((char)i) != isascii((char)i))
		{
			test_error("ft_isascii ", i);
			return ;
		}
		i++;
	}
	test_succes("ft_isascii");
}
