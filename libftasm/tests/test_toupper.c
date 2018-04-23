/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:42:17 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:42:19 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_toupper(void)
{
	int			i;

	i = 0;
	while (i < 256)
	{
		if (toupper(i) != ft_toupper(i))
		{
			test_error("ft_toupper", i);
			return ;
		}
		i++;
	}
	test_succes("ft_toupper");
}
