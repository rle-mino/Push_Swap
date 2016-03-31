/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 17:46:14 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 00:35:32 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		push_ra(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		i;

	if (!(*a))
		return ;
	i = -1;
	(void)b;
	tmp = ft_memalloc(sizeof(int) * count[0]);
	tmp[count[0] - 1] = (*a)[0];
	while (++i < count[0] - 1)
		tmp[i] = (*a)[i + 1];
	free_me = *a;
	*a = tmp;
	free(free_me);
}

void		push_rb(int **a, int **b, int *count)
{
	int		*tmp;
	int		*free_me;
	int		i;

	if (!(*b))
		return ;
	i = -1;
	(void)a;
	tmp = ft_memalloc(sizeof(int) * count[1]);
	tmp[count[1] - 1] = (*b)[0];
	while (++i < count[1] - 1)
		tmp[i] = (*b)[i + 1];
	free_me = *b;
	*b = tmp;
	free(free_me);
}

void	push_rr(int **a, int **b, int *count)
{
	push_ra(a, b, count);
	push_rb(a, b, count);
}
