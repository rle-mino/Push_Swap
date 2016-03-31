/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 18:12:51 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 00:35:42 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		push_rra(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		j;

	(void)b;
	tmp = ft_memalloc(sizeof(int) * count[0]);
	j = 0;
	tmp[0] = (*a)[count[0] - 1];
	while (++j < count[0])
		tmp[j] = (*a)[j - 1];
	free_me = *a;
	*a = tmp;
	free(free_me);
}

void		push_rrb(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		j;

	(void)a;
	tmp = ft_memalloc(sizeof(int) * count[1]);
	j = 0;
	tmp[0] = (*b)[count[1] - 1];
	while (++j < count[1])
		tmp[j] = (*b)[j - 1];
	free_me = *b;
	*b = tmp;
	free(free_me);
}

void		push_rrr(int **a, int **b, int *count)
{
	push_rra(a, b, count);
	push_rrb(a, b, count);
}
