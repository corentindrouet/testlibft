/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:54:58 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:13:57 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memccpy_1()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memccpy(norm, src, 'j', 5);
	result2 = ft_memccpy(ft, src, 'j', 5);
	if (!strcmp(norm, ft))
		return (0);
	return (1);
}

static int	test_memccpy_2()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memccpy(norm, src, 'u', 5);
	result2 = ft_memccpy(ft, src, 'u', 5);
	if (!strcmp(result1, result2) && !strcmp(norm, ft))
		return (0);
	return (1);
}

static int	test_memccpy_3()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memccpy(norm, src, 'z', 10);
	result2 = ft_memccpy(ft, src, 'z', 10);
	if (!strcmp(norm, ft))
		return (0);
	return (1);
}

void		test_memccpy()
{
	ft_putstr("TEST MEMCCPY : ");
	if (!test_memccpy_1() && !test_memccpy_2() && !test_memccpy_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
