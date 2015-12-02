/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:42:25 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:00:45 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static void	test_putendl_1()
{
	ft_putendl("bonjour");
}

void		test_putendl()
{
	ft_putstr("TEST PUTENDL : ");
	test_putendl_1();
}
