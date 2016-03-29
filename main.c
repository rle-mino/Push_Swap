/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:35:26 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/29 19:26:05 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int		main(int ac, char **av)
{
	int		*tab;
	if (ac < 2)
		return (ps_error());
	if (!(tab = ps_parsing(av + 1, ac)))
		return (ps_error());
	for (int i = 0; i < ac - 1; i++)
		fpf("tab[i] = %d\n", tab[i]);
}
