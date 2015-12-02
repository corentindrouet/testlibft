/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:57:01 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 11:07:46 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strncmp_1()
{
	return (strncmp("abcd", "abcd", 5) - ft_strncmp("abcd", "abcd", 5));
}

static int	test_strncmp_2()
{
	return (strncmp("abcd", "abcde", 5) - ft_strncmp("abcd", "abcde", 5));
}

static int	test_strncmp_3()
{
	return (strncmp("abcd", "abcde", 3) - ft_strncmp("abcd", "abcde", 3));
}

void		test_strncmp()
{
	ft_putendl("TEST STRNCMP");
	if (!test_strncmp_1() && !test_strncmp_2() && !test_strncmp_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
