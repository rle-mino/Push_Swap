/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 13:39:14 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 15:56:19 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int			check(int *a, int *count)
{
	int		i;
	int		cmp;

	i = 0;
	cmp = a[i];
	while (++i < count[0])
	{
		if (cmp > a[i])
			return (0);
		cmp = a[i];
	}
	return (1);
}

int			check_rotate(int *a, int *count)
{
	int		ref;
	int		i;
	int		j;
	int		*cpy;

	ref = a[0];
	i = 0;
	j = -1;
	cpy = ft_memalloc(sizeof(int) * count[0]);
	while (++j < count[0])
		cpy[j] = a[j];
	while (++i < count[0])
	{
		push_ra(&cpy, NULL, count);
		if (check(cpy, count))
			return (1);
	}
	return (0);
}
