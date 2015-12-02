/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:39:08 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 10:16:58 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strlcat_1()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	lcat[10] = "essai";
	size_t	ret1;
	size_t	ret2;

	ret1 = strlcat(result1, lcat, 9);
	ret2 = ft_strlcat(result2, lcat, 9);
	ft_putstr("strlcat : ");
	ft_putstr(result1);
	ft_putstr(" | return : ");
	ft_putnbr(ret1);
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strlcat : ");
	ft_putstr(result2);
	ft_putstr(" | return : ");
	ft_putnbr(ret2);
	ft_putchar('\n');
	if (ret1 == ret2)
		return (strcmp(result1, result2));
	return (1);
}

static int	test_strlcat_2()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	lcat[10] = "essai";
	size_t	ret1;
	size_t	ret2;

	ret1 = strlcat(result1, lcat, 6);
	ret2 = ft_strlcat(result2, lcat, 6);
	ft_putstr("strlcat : ");
	ft_putstr(result1);
	ft_putstr(" | return : ");
	ft_putnbr(ret1);
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strlcat : ");
	ft_putstr(result2);
	ft_putstr(" | return : ");
	ft_putnbr(ret2);
	ft_putchar('\n');
	if (ret1 == ret2)
		return (strcmp(result1, result2));
	return (1);
}

static int	test_strlcat_3()
{
	char	result1[30] = "b\0\0\0";
	char	result2[30] = "b\0\0\0";
	char	lcat[10] = "essai";
	size_t	ret1;
	size_t	ret2;

	ret1 = strlcat(result1, lcat, 3);
	ret2 = ft_strlcat(result2, lcat, 3);
	ft_putstr("strlcat : ");
	ft_putstr(result1);
	ft_putstr(" | return : ");
	ft_putnbr(ret1);
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strlcat : ");
	ft_putstr(result2);
	ft_putstr(" | return : ");
	ft_putnbr(ret2);
	ft_putchar('\n');
	if (ret1 == ret2)
		return (strcmp(result1, result2));
	return (1);
}

void		test_strlcat()
{
	ft_putendl("TEST STRLCAT :");
	if (!test_strlcat_1() && !test_strlcat_2() && !test_strlcat_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
