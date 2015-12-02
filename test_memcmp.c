/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:37:32 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:11:37 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memcmp_1()
{
	char	s1[20] = "bonjour";

	if (!memcmp(s1, "bonjour", 7) && !ft_memcmp(s1, "bonjour", 7))
		return (0);
	return (1);
}

static int	test_memcmp_2()
{
	char	s1[20] = "bonjour\200";

	if (memcmp(s1, "bonjour", 8) == ft_memcmp(s1, "bonjour", 8))
		return (0);
	return (1);
}

static int	test_memcmp_3()
{
	char	s1[20] = "bonjour";

	if (!memcmp(s1, "bonsoir", 3) && !ft_memcmp(s1, "bonsoir", 3))
		return (0);
	return (1);
}

void		test_memcmp()
{
	ft_putstr("TEST MEMCMP : ");
	if (!test_memcmp_1() && !test_memcmp_2() && !test_memcmp_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
