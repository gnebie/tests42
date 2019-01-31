/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnebie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 04:38:07 by gnebie            #+#    #+#             */
/*   Updated: 2018/02/20 04:38:09 by gnebie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>


/*
** DEFINES
*/

# define STRING_SIZE 4098

void	ft_bzero(void *s, size_t n);
//void	ft_scat(const char *name);
int		ft_cat(int fd);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int		ft_memcmp(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memchr(const void *restrict src, char elem, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_puts(const char *s);
char 	*ft_strcat(char *restrict s1, const char *restrict s2);
char 	*ft_strdup(const char *s1);
int		ft_strcmp(char *restrict dst, const char *restrict src);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memalloc(size_t);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t size);
void	ft_swap(int *i, int *j);

void test_bzero(void);
void test_cat(void);
void test_isalnum(void);
void test_isalpha(void);
void test_isascii(void);
void test_isdigit(void);
void test_isprint(void);
void test_memcpy(void);
void test_puts(void);
void test_memset(void);
void test_strcat(void);
void test_strdup(void);
void test_strlen(void);
void test_tolower(void);
void test_toupper(void);
void test_error(char *str, int i);
void test_succes(char *str);
void test_memchr(void);
void test_memcpm(void);
void test_strcpm(void);
void test_memalloc(void);
void test_strncat(void);
void test_swap(void);

#endif
