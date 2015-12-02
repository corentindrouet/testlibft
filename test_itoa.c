/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:01:28 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:15:40 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_itoa_1()
{
	return (strcmp(ft_itoa(-2147483648), "-2147483648"));
}

void		test_itoa()
{
	ft_putstr("TEST ITOA : ");
	if (!test_itoa_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
