/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:13:35 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:07:38 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strncpy_1()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strncpy(result1, cpy, 7);
	strncpy(result2, cpy, 7);
	return (memcmp(result1, result2, 8));
}

static int	test_strncpy_2()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strncpy(result1, cpy, 3);
	strncpy(result2, cpy, 3);
	return (memcmp(result1, result2, 7));
}

void		test_strncpy()
{
	ft_putstr("TEST STRNCPY : ");
	if (!test_strncpy_1() && !test_strncpy_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
