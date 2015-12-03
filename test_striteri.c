/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:14:46 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:28:43 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static void	test_striteri_1(unsigned int i, char *c)
{
	*c -= i;
}

void		test_striteri()
{
	void	(*f)(unsigned int, char*);
	char	ptr[20] = "bonjour";

	f = &test_striteri_1;
	ft_striteri(ptr, f);
	ft_putstr("TEST STRITERI : ");
	if (!strcmp(ptr, "bnlgkpl"))
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
