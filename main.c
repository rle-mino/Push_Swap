/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:35:26 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 11:16:56 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int		main(int ac, char **av)
{
	int		*tab;
	char	**arg;

	if (ac < 2)
		return (ps_error());
	arg = stack_to_mem(av, ac);
	if (!(tab = ps_parsing(arg, ac)))
		return (ps_error());
}
