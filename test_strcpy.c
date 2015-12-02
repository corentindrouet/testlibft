/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 09:12:12 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:09:20 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strcpy_1()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strcpy(result1, cpy);
	ft_strcpy(result2, cpy);
	return (strcmp(result1, result2));
}

void		test_strcpy()
{
	ft_putstr("TEST STRCPY : ");
	if (!test_strcpy_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
