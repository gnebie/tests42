/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:41:08 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:41:11 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <fcntl.h>

void test_cat(void)
{
	int ret = 0;
	printf("test de cat \n");
	printf("retour %i ", ft_cat(0));
	printf("\n\ntest de cat with test_cat.txt\n");
//	int fd = open("/Users/gnebie/tests42/textedetest_lesmiserables.txt", O_RDONLY);
	int fd = open("testcat.txt", O_RDONLY);
	printf("fd = %i \n\n", fd);
	if ((ret = ft_cat(fd)) == -1)
		exit(-1);
	printf("\n\nfin des tests de cat with test_cat.txt  %i  %i\n\n\n", ret, fd);
	return ;
}
