/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:45:18 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 12:48:39 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_tolower_1()
{
	return (tolower('p') - ft_tolower('p'));
}

void		test_tolower()
{
	ft_putstr("TEST TOLOWER : ");
	if (!test_tolower_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
