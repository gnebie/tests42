/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbasic1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:31:26 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/17 19:06:24 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

static void	test_basics(void)
{
	char	*str;
	size_t	size;

	size = 16;
	ft_printf("test malloc size %lu\n", size);
	str = malloc(size);
	str[0] = '7';
	ft_printf("test show_alloc_mem \n");
	show_alloc_mem();
	ft_printf("test show_alloc_mem_ex\n");
	show_alloc_mem_ex(0);
	ft_printf("test realloc simple modification de la size à 1024\n", str);
	str = realloc(str, 1024);
	ft_printf("free str\n");
	free(str);
	ft_printf("test calloc simple size 16 * 16\n");
	str = calloc(16, 16);
	ft_printf("test reallocf simple size 16 \n");
	str = reallocf(str, 16);
	ft_printf("free str\n");
	free(str);
}

static void	test_basic2(void)
{
	char	*tab[4096];
	size_t	size;

	size = 0;
	ft_printf("test 4096 malloc de taille différentes\n");
	while (size < 4096)
	{
		tab[size] = malloc(size);
		if (tab[size])
			tab[size][0] = 'G';
		size++;
	}
	ft_printf("free des 4096 malloc de taille différentes\n");
	while (size)
	{
		size--;
		free(tab[size]);
	}
	show_alloc_mem();
}

static int	test_basic3(void)
{
	size_t		a;
	char		*ptr;

	a = 4096;
	ptr = malloc(a);
	while (a && ptr && a < 4096 * 128 * 128)
	{
		ft_printf("ptr : %p \n a %lu\n", ptr, a);
		ptr = realloc(ptr, a);
		ft_printf("realloc %p a %lu\n", ptr, a);
		ptr[a - 2] = 42;
		ft_printf("ajout de 42 %p, a %lu\n", ptr, a);
		free(ptr);
		ft_printf("free %p a %lu\n", ptr, a);
		ptr = malloc(a);
		ft_printf("malloc %p a %lu\n", ptr, a);
		ptr[a - 2] = 42;
		a *= 8;
	}
	ft_printf("ptr : %p \n a %lu\n", ptr, a);
	free(ptr);
	return (0);
}

int			main(void)
{
	int i;

	i = 0;
	test_basics();
	test_basic2();
	test_basic3();
	mallochistory_printhistory(1);
	mallochistory_writehistory("testhistory.txt");
	return (EXIT_SUCCESS);
}
