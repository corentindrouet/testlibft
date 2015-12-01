/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:37:32 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/01 08:54:20 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memcmp_1()
{
	char	s1[20] = "bonjour";

	ft_putstr("s1 : ");
	ft_putstr(s1);
	ft_putstr(" | s2 : bonjour | n = 7");
	ft_putstr(" |-|||-| ");
	if (!memcmp(s1, "bonjour", 7) && !ft_memcmp(s1, "bonjour", 7))
	{
		ft_putstr("retour : ");
		ft_putnbr(ft_memcmp(s1, "bonjour", 7));
		ft_putchar('\n');
		return (0);
	}
	ft_putstr("retour : ");
	ft_putnbr(ft_memcmp(s1, "bonjour", 7));
	ft_putchar('\n');
	return (1);
}

static int	test_memcmp_2()
{
	char	s1[20] = "bonjour\200";

	ft_putstr("s1 : ");
	ft_putstr(s1);
	ft_putstr(" | s2 : bonjour | n = 8");
	ft_putstr(" |-|||-| ");
	if (memcmp(s1, "bonjour", 8) == ft_memcmp(s1, "bonjour", 8))
	{
		ft_putstr("retour : ");
		ft_putnbr(ft_memcmp(s1, "bonjour", 8));
		ft_putchar('\n');
		return (0);
	}
	ft_putstr("retour : ");
	ft_putnbr(ft_memcmp(s1, "bonjour", 8));
	ft_putchar('\n');
	return (1);
}

static int	test_memcmp_3()
{
	char	s1[20] = "bonjour";

	ft_putstr("s1 : ");
	ft_putstr(s1);
	ft_putstr(" | s2 : bonsoir | n = 3");
	ft_putstr(" |-|||-| ");
	if (!memcmp(s1, "bonsoir", 3) && !ft_memcmp(s1, "bonsoir", 3))
	{
		ft_putstr("retour : ");
		ft_putnbr(ft_memcmp(s1, "bonsoir", 3));
		ft_putchar('\n');
		return (0);
	}
	ft_putstr("retour : ");
	ft_putnbr(ft_memcmp(s1, "bonsoir", 8));
	ft_putchar('\n');
	return (1);
}

void		test_memcmp()
{
	ft_putendl("TEST MEMCMP :");
	if (!test_memcmp_1() && !test_memcmp_2() && !test_memcmp_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
