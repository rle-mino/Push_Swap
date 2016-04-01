/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 18:02:15 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/02 01:48:14 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		min_to_b(int **a, int **b, int *count, char **result)
{
	static int		call = 0;

	call++;
	while (count[2] < count[0])
	{
		if (count[2] < count[0] / 2)
		{
			push_ra(a, NULL, count);
			add_move(result, P_RA);
		}
		else
		{
			push_rra(a, NULL, count);
			add_move(result, P_RA);
		}
		count[2] += 1;
	}
	push_pb(a, b, count);
	add_move(result, P_PB);
}

int			check_min(int *a, int *count)
{
	int		i;
	int		ref;
	int		pos;

	i = 0;
	pos = count[0];
	ref = a[0];
	while (++i < count[0])
	{
		if (ref > a[i])
		{
			ref = a[i];
			pos = count[0] - 1;
		}
	}
	return (pos);
}

void		ps_algo(int *a, int *b, int *count)
{
	char	*result;

	(void)b;
	result = ft_memalloc(1);
	while (count[1] || !check(a, count))
	{
		fpf("______STACK A______\n");
		for (int i = 0; i < count[0]; i++)
			fpf("a[%d] = %d\n", i, a[i]);
		fpf("______STACK B______\n");
		for (int j = 0; j < count[1]; j++)
			fpf("b[%d] = %d\n", j, b[j]);
		if (!count[1] && check_rotate(a, count))
		{
			full_rotate(a, count, &result);
			break ;
		}
		if (count[0] == 1)
			break ;
		count[2] = check_min(a, count);
		min_to_b(&a, &b, count, &result);
	}
	fpf("%s\n", result);
}
