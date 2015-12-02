/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:48:16 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:16:16 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memset_1()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	char	*result1;
	char	*result2;

	result1 = memset(norm, 't', 3);
	result2 = ft_memset(re, 't', 3);
	return (memcmp(result1, result2, 7));
}

static int	test_memset_2()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	char	*result1;
	char	*result2;

	result1 = memset(norm, 't', 9);
	result2 = ft_memset(re, 't', 9);
	return (memcmp(result1, result2, 9));
}

static int	test_memset_3()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	char	*result1;
	char	*result2;

	result1 = memset(norm, '\0', 9);
	result2 = ft_memset(re, '\0', 9);
	return (memcmp(result1, result2, 9));
}

void		test_memset()
{
	ft_putstr("TEST MEMSET : ");
	if (!test_memset_1() && !test_memset_2() && !test_memset_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
