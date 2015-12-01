/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:54:43 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/01 09:00:58 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strlen_1()
{
	char	ptr[50] = "qwertyuiopasdfghjklzxcvbnm";

	return (strlen(ptr) - ft_strlen(ptr));
}

void		test_strlen()
{
	ft_putendl("TEST STRLEN :");
	if (!test_strlen_1())
		ft_putendl("ok :)");
	ft_putchar('\n');
}
