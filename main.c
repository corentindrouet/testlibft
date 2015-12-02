/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:18:20 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 17:01:01 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

int	main(void)
{
	ft_putendl("PARTIE 1 :");
	test_memset();
	test_bzero();
	test_memcpy();
	test_memccpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_strlen();
	test_strdup();
	test_strcpy();
	test_strncpy();
	test_strcat();
	test_strncat();
	test_strlcat();
	test_strchr();
	test_strrchr();
	test_strstr();
	test_strnstr();
	test_strcmp();
	test_strncmp();
	test_atoi();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	ft_putendl("PARTIE 2 :");
	test_putnbr_fd();
	test_putendl_fd();
	test_putstr_fd();
	test_putchar_fd();
	test_putendl();
	test_itoa();
	test_strsplit();
	test_strtrim();
	test_strjoin();
	test_putnbr();
	test_putstr();
	test_putchar();
	test_memalloc();
	test_memdel();

	return (0);
}
