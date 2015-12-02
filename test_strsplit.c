/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:17:46 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:26:53 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strsplit_1()
{
	char	**ptr;

	ptr = ft_strsplit("{bonjour{{les{{{etudiants{{", '{');
	if (!strcmp(ptr[0], "bonjour") && !strcmp(ptr[1], "les") && !strcmp(ptr[2], "etudiants"))
		return (0);
	return (1);
}

void		test_strsplit()
{
	ft_putstr("TEST STRSPLIT : ");
	if (!test_strsplit_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
