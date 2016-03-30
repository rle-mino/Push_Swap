/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 11:29:58 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 18:59:34 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		push_pa(int **a, int **b, int *count)
{
	int *tmp;
	int	*free_me;
	int	i;

	i = -1;
	if (count[1] < 1)
		return ;
	tmp = ft_memalloc(sizeof(int) * (count[0] + 1));
	tmp[0] = *b[0];
	while (++i < count[0] + 1)
		tmp[i + 1] = (*a)[i];
	free_me = *a;
	*a = tmp;
	free(free_me);
	count[0]++;
	tmp = ft_memalloc(sizeof(int) * (count[1] - 1));
	i = -1;
	while (++i < count[1])
		tmp[i] = (*b)[i + 1];
	free_me = *b;
	*b = tmp;
	free(free_me);
	count[1]--;
}

void		push_pb(int **a, int **b, int *count)
{
	int *tmp;
	int	*free_me;
	int	i;

	i = -1;
	if (count[0] < 1)
		return ;
	tmp = ft_memalloc(sizeof(int) * (count[1] + 1));
	tmp[0] = *a[0];
	while (++i < count[1] + 1)
		tmp[i + 1] = (*b)[i];
	free_me = *b;
	*b = tmp;
	free(free_me);
	count[1]++;
	tmp = ft_memalloc(sizeof(int) * (count[0] - 1));
	i = -1;
	while (++i < count[0])
		tmp[i] = (*a)[i + 1];
	free_me = *a;
	*a = tmp;
	free(free_me);
	count[0]--;
}
