/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 07:39:32 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:14:35 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memcpy_1()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memcpy(norm, src, 5);
	result2 = ft_memcpy(ft, src, 5);
	return (memcmp(result1, result2, 7));
}

static int	test_memcpy_2()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memcpy(norm, src, 10);
	result2 = ft_memcpy(ft, src, 10);
	return (memcmp(result1, result2, 10));
}

static int	test_memcpy_3()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "";
	char	*result1;
	char	*result2;

	result1 = memcpy(norm, src, 3);
	result2 = ft_memcpy(ft, src, 3);
	return (memcmp(result1, result2, 7));
}

static int	test_memcpy_4()
{
	char	norm[20] = "";
	char	ft[20] = "";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memcpy(norm, src, 5);
	result2 = ft_memcpy(ft, src, 5);
	return (memcmp(result1, result2, 6));
}

void		test_memcpy()
{
	ft_putstr("TEST MEMCPY :");
	if (!test_memcpy_1() && !test_memcpy_2() && !test_memcpy_3() && !test_memcpy_4())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
