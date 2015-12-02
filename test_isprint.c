/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:29:37 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 12:53:31 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_isprint_1()
{
	return (isprint(20) - ft_isprint(20));
}

static int	test_isprint_2()
{
	return (isprint(48) - ft_isprint(48));
}

void		test_isprint()
{
	ft_putstr("TEST ISPRINT : ");
	if (!test_isprint_1() && !test_isprint_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :)");
}
