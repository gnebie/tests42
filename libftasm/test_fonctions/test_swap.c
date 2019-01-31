/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:16 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:19 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

void test_swap(void)
{
	int		i = 42;
	int		j = 23;

	int		tmpi = i;
	int		tmpj = j;
	ft_swap(&i, &j);
	if (i != tmpj || j != tmpi)
	{
		test_error("test_swap ", i);
		return ;
	}
	test_succes("test_swap");
}
