/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:41 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:43 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_isdigit(void)
{
	int		i;

	i = 0;
	while (i < 256)
	{
		if (ft_isdigit((char)i) != isdigit((char)i))
		{
			test_error("ft_isdigit ", i);
			return ;
		}
		i++;
	}
	test_succes("ft_isdigit");
}
