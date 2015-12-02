/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 09:12:12 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 09:10:40 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strcpy_1()
{
	char	result1[20] = "bonjour";
	char	result2[20] = "bonjour";
	char	cpy[20] = "essai";

	strcpy(result1, cpy);
	ft_putstr("strcpy : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strcpy(result2, cpy);
	ft_putstr("ft_strcpy : ");
	ft_putendl(result2);
	return (strcmp(result1, result2));
}

void		test_strcpy()
{
	ft_putendl("TEST STRCPY :");
	if (!test_strcpy_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
