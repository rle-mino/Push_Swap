/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 18:12:51 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 20:34:50 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		push_rra(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		i;
	int		j;

	(void)b;
	tmp = ft_memalloc(sizeof(int) * count[0]);
	j = -1;
	i = count[0];
	while (++j < count[0])
		tmp[j] = (*a)[--i];
	free_me = *a;
	*a = tmp;
	free(free_me);
}

void		push_rrb(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		i;
	int		j;

	(void)a;
	tmp = ft_memalloc(sizeof(int) * count[1]);
	j = -1;
	i = count[1];
	while (++j < count[1])
		tmp[j] = (*b)[--i];
	free_me = *b;
	*b = tmp;
	free(free_me);
}

void		push_rrr(int **a, int **b, int *count)
{
	push_rra(a, b, count);
	push_rrb(a, b, count);
}
