/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:13:35 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 09:21:26 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strncpy_1()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strncpy(result1, cpy, 7);
	ft_putstr("strncpy : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strncpy(result2, cpy, 7);
	ft_putstr("ft_strncpy : ");
	ft_putendl(result2);
	return (memcmp(result1, result2, 8));
}

static int	test_strncpy_2()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strncpy(result1, cpy, 3);
	ft_putstr("strncpy : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strncpy(result2, cpy, 3);
	ft_putstr("ft_strncpy : ");
	ft_putendl(result2);
	return (memcmp(result1, result2, 7));
}

void		test_strncpy()
{
	ft_putendl("TEST STRNCPY :");
	if (!test_strncpy_1() && !test_strncpy_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
