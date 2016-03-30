/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 15:06:54 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 11:16:37 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int		ps_legit(char *nb)
{
	int		i;

	i = 0;
	if (nb[0] == '-')
		i++;
	if (nb[0] == '-' && !nb[1])
		return (0);
	while (nb[i])
	{
		if (!ft_isdigit(nb[i]))
			return (0);
		i++;
	}
	if (i > 11 || (i > 10 && nb[0] != '-'))
		return (0);
	if (i == 10 && nb[0] != '-' && ft_atoi(nb) <= 0)
		return (0);
	if (i == 11 && ft_atoi(nb) >= 0)
		return (0);
	return (1);
}

int		*ps_parsing(char **av, int ac)
{
	int	i;
	int	*tab;

	if (!(tab = (int *)ft_memalloc(sizeof(int) * ac - 1)))
		ps_error();
	i = -1;
	while (av[++i])
	{
		if (ps_legit(av[i]) == 0)
			ps_error();
		tab[i] = ft_atoi(av[i]);
	}
	return (tab);
}
