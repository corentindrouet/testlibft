/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 07:56:45 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:06:03 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void		test_strnew()
{
	char	*ptr;

	ft_putstr("TEST STRNEW : ");
	ptr = NULL;
	ptr = ft_strnew(5);
	if (ptr)
	{
		strcpy(ptr, "aaaaa");
		if (ptr[4] == 'a')
			ft_putendl("ok :)");
		else
			ft_putendl("not ok :(");
	}
	else
		ft_putendl("not ok :(");
	free(ptr);
}
