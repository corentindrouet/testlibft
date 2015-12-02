/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:26:54 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:12:26 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memchr_1()
{
	char	norm[20] = "bonjour";
	char	*result1;
	char	*result2;

	result1 = memchr(norm, 'j', 8);
	result2 = ft_memchr(norm, 'j', 8);
	return (strcmp(result1, result2));
}

static int	test_memchr_2()
{
	char	norm[20] = "bonjour";
	char	*result1;
	char	*result2;

	result1 = memchr(norm, 'j', 3);
	result2 = memchr(norm, 'j', 3);
	if (!result1 && !result2)
		return (0);
	return(1);
}

void		test_memchr()
{
	ft_putstr("TEST MEMCHR : ");
	if (!test_memchr_1() && !test_memchr_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
