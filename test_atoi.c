/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:09:11 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 11:18:02 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_atoi_1()
{
	int	result1;
	int	result2;

	result1 = atoi("123456789");
	result2 = ft_atoi("123456789");
	return (result1 - result2);
}

static int	test_atoi_2()
{
	int result1;
	int	result2;

	result1 = atoi("   \r\t \n  \v \f   1234");
	result2 = ft_atoi("   \r\t \n  \v \f   1234");
	return (result1 - result2);
}

static int	test_atoi_3()
{
	int result1;
	int	result2;

	result1 = atoi("1234bonjour");
	result2 = ft_atoi("1234bonjour");
	return (result1 - result2);
}

static int	test_atoi_4()
{
	int result1;
	int	result2;

	result1 = atoi("  \t -1234bonjour");
	result2 = ft_atoi("  \t -1234bonjour");
	return (result1 - result2);
}

void		test_atoi()
{
	ft_putendl("TEST ATOI :");
	if (!test_atoi_1() && !test_atoi_2() && !test_atoi_3() && !test_atoi_4())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
