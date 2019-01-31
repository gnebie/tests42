/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:16 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:19 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_isalnum(void)
{
	int		i;

	i = 0;
	while (i < 256)
	{
		if (ft_isalnum((char)i) != isalnum((char)i))
		{
			test_error("is alnum ", i);
			return ;
		}
		i++;
	}
	test_succes("test_isalnum");
}
