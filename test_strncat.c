/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:29:26 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 09:38:44 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strncat_1()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	ncat[10] = "essai";

	strncat(result1, ncat, 3);
	ft_putstr("strncat : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strncat(result2, ncat, 3);
	ft_putstr("ft_strncat : ");
	ft_putendl(result2);
	return (strcmp(result1, result2));
}

static int	test_strncat_2()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	ncat[10] = "essai";

	strncat(result1, ncat, 8);
	ft_putstr("strncat : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strncat(result2, ncat, 8);
	ft_putstr("ft_strncat : ");
	ft_putendl(result2);
	return (strcmp(result1, result2));
}

void		test_strncat()
{
	ft_putendl("TEST STRNCAT :");
	if (!test_strncat_1() && !test_strncat_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
