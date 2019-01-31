/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:49 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:50 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_isprint(void)
{
	int		i;

	i = 0;
	while (i < 256)
	{
		if (ft_isprint((char)i) != isprint((char)i))
		{
			test_error("ft_isprint ", i);
			return ;
		}
		i++;
	}
	test_succes("ft_isprint");
}
