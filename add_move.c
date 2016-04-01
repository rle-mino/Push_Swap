/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 18:38:47 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 19:23:01 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

int			get_move(int move)
{
	if (move == P_SA)
		return (0);
	if (move == P_SB)
		return (1);
	if (move == P_SS)
		return (2);
	if (move == P_PA)
		return (3);
	if (move == P_PB)
		return (4);
	if (move == P_RA)
		return (5);
	if (move == P_RB)
		return (6);
	if (move == P_RR)
		return (7);
	if (move == P_RRA)
		return (8);
	if (move == P_RRB)
		return (9);
	if (move == P_RRR)
		return (10);
	return (0);
}

void		add_move(char **result, int move)
{
	static char	mvs[][4] = {"sa", "sb", "ss", "pa", "pb", "ra", "rb", "rr", \
							"rra", "rrb", "rrr"};
	int			i;
	char		*tmp;

	i = get_move(move);
	tmp = *result;
	if (**result)
	{
		*result = ft_strjoin(*result, " ");
		free(tmp);
		tmp = *result;
	}
	*result = ft_strjoin(*result, mvs[i]);
	free(tmp);
}
