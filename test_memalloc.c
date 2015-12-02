/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:50:25 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:56:59 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memalloc_1()
{
	int	*i;

	i = ft_memalloc(sizeof(int));
	*i = 5;
	if (*i == 5)
	{
		free(i);
		return (0);
	}
	return (1);
}

void		test_memalloc()
{
	ft_putstr("TEST MEMALLOC : ");
	if (!test_memalloc_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
