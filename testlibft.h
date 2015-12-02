/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:42:15 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 12:00:14 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIBFT_H
# define TESTLIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

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

#endif
