/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfail.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:07:36 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/12 22:28:28 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

int		main(void)
{
	char	*s;
	size_t	size;

	size = 0;
	s = malloc(0);
	ft_printf("s = %p malloc 0\n", s);
	s = realloc(s, 1);
	ft_printf("s = %p realloc 0 1\n", s);
	s = realloc(s, 0);
	ft_printf("s = realloc s 0 %p\n", s);
	free(0);
	ft_printf("free 0\n", s);
	free((void *)-1);
	ft_printf("free -1\n", s);
	free((void *)10);
	ft_printf("free 10 erreur attendue\n", s);
	free(s);
	ft_printf("free s\n", s);
	mallochistory_printhistory(1);
	return (EXIT_SUCCESS);
}
