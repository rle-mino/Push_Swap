/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 11:19:01 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 20:39:17 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		push_sa(int **a, int **b, int *count)
{
	(void)b;
	if (!*a || count[0] < 2)
		return ;
	(*a)[0] ^= (*a)[1];
	(*a)[1] ^= (*a)[0];
	(*a)[0] ^= (*a)[1];
}

void		push_sb(int **a, int **b, int *count)
{
	(void)a;
	if (!*b || count[1] < 2)
		return ;
	(*b)[0] ^= (*b)[1];
	(*b)[1] ^= (*b)[0];
	(*b)[0] ^= (*b)[1];
}

void		push_ss(int **a, int **b, int *count)
{
	push_sa(a, b, count);
	push_sb(a, b, count);
}
