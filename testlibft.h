/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:42:15 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 10:27:59 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIBFT_H
# define TESTLIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

void	test_tolower();
void	test_toupper();
void	test_memset();
void	test_bzero();
void	test_memcpy();
void	test_memccpy();
void	test_memmove();
void	test_memchr();
void	test_memcmp();
void	test_strlen();
void	test_strdup();
void	test_strcpy();
void	test_strncpy();
void	test_strcat();
void	test_strncat();
void	test_strlcat();
void	test_strchr();
void	test_strrchr();
void	test_strstr();
void	test_strnstr();
void	test_strcmp();
void	test_strncmp();
void	test_atoi();
void	test_isalpha();
void	test_isdigit();
void	test_isalnum();
void	test_isascii();
void	test_isprint();
void	test_putnbr_fd();
void	test_putendl_fd();
void	test_putstr_fd();
void	test_putchar_fd();
void	test_putendl();
void	test_itoa();
void	test_strsplit();
void	test_strtrim();
void	test_strjoin();
void	test_putnbr();
void	test_putstr();
void	test_putchar();
void	test_memalloc();
void	test_memdel();
void	test_strnew();
void	test_strdel();
void	test_strclr();
void	test_striter();
void	test_striteri();
void	test_strmap();
void	test_strmapi();
void	test_strequ();
void	test_strnequ();
void	test_strsub();

#endif
