/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:13:33 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/01 08:25:59 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_memmove_1()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	src[20] = "aurevoir";
	char	*result1;
	char	*result2;

	result1 = memmove(norm, src, 5);
	ft_putstr("retour : ");
	ft_putstr(result1);
	result2 = ft_memmove(ft, src, 5);
	ft_putstr(" |-|||-| ");
	ft_putstr("retour : ");
	ft_putendl(result2);
	return (memcmp(result1, result2, 7));
}

static int	test_memmove_2()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	*src;
	char	*result1;
	char	*result2;

	src = &norm[1];
	result1 = memmove(norm, src, 5);
	ft_putstr("retour : ");
	ft_putstr(result1);
	src = &ft[1];
	result2 = ft_memmove(ft, src, 5);
	ft_putstr(" |-|||-| ");
	ft_putstr("retour : ");
	ft_putendl(result2);
	return (memcmp(result1, result2, 7));
}

static int	test_memmove_3()
{
	char	norm[20] = "bonjour";
	char	ft[20] = "bonjour";
	char	*src;
	char	*result1;
	char	*result2;

	src = &norm[4];
	result1 = memmove(norm, src, 3);
	ft_putstr("retour : ");
	ft_putstr(result1);
	src = &ft[4];
	result2 = ft_memmove(ft, src, 3);
	ft_putstr(" |-|||-| ");
	ft_putstr("retour : ");
	ft_putendl(result2);
	return (memcmp(result1, result2, 7));
}

void		test_memmove()
{
	ft_putendl("TEST MEMMOVE :");
	if (!test_memmove_1() && !test_memmove_2() && !test_memmove_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
