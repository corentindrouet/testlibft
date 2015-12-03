/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:06:16 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:10:33 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void		test_strdel()
{
	char	*ptr;

	ft_putstr("TEST STRDEL : ");
	ptr = (char*)malloc(5);
	ft_strdel(&ptr);
	if (!ptr)
		ft_putendl("ok :)");
	else
	{
		ft_putendl("not ok :(");
		free(ptr);
	}
}
