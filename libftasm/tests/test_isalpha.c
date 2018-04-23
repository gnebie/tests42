/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:27 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:28 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_isalpha(void)
{
	int		i;

	i = 0;
	while (i < 256)
	{
	//	printf("alpha ret : %i\n", ft_isalpha((char)i));
		if (ft_isalpha((char)i) != isalpha((char)i))
		{
			test_error("ft_isalpha  ", i);
			return ;
		}
		i++;
	}
	test_succes("ft_isalpha");
}
