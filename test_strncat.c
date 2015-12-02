/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:29:26 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:09:01 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strncat_1()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	ncat[10] = "essai";

	strncat(result1, ncat, 3);
	strncat(result2, ncat, 3);
	return (strcmp(result1, result2));
}

static int	test_strncat_2()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	ncat[10] = "essai";

	strncat(result1, ncat, 8);
	strncat(result2, ncat, 8);
	return (strcmp(result1, result2));
}

void		test_strncat()
{
	ft_putstr("TEST STRNCAT : ");
	if (!test_strncat_1() && !test_strncat_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
