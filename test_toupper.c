/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:40:02 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 12:45:00 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_toupper_1()
{
	return (toupper('p') - ft_toupper('p'));
}

void		test_toupper()
{
	ft_putstr("TEST TOUPPER : ");
	if (!test_toupper_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");

}
