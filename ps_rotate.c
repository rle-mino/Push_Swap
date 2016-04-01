/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 18:10:02 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 19:26:51 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		full_rotate(int *a, int *count, char **result)
{
	int	ref;
	int	i;

	i = 1;
	ref = a[0];
	while (ref < a[i])
	{
		ref = a[i];
		i++;
	}
	if (count[0] / i < count[0] / 2)
		while (!check(a, count))
		{
			push_rra(&a, NULL, count);
			add_move(result, P_RRA);
		}
	else
		while (!check(a, count))
		{
			push_ra(&a, NULL, count);
			add_move(result, P_RA);
		}
}
