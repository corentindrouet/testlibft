/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:57:32 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 17:02:00 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <stdlib.h>

static int	test_memdel_1()
{
	int	*i;

	i = (int*)malloc(sizeof(int));
	*i = 5;
	ft_memdel((void**)&i);
	if (i == NULL)
		return (0);
	return (1);
}

void		test_memdel()
{
	ft_putstr("TEST MEMDEL : ");
	if (!test_memdel_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
