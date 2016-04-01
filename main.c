/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:35:26 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/02 00:32:06 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int		main(int ac, char **av)
{
	int		*tab;
	char	**arg;
	int		*count;

	if (ac < 2)
		return (ps_error());
	arg = stack_to_mem(av, ac);
	if (!(tab = ps_parsing(arg, ac)))
		return (ps_error());
	if (!(count = (int *)ft_memalloc(sizeof(int) * 3)))
		return (0);
	count[0] = ac - 1;
	count[1] = 0;
	ps_algo(tab, NULL, count);
}
