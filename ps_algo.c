/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 18:02:15 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/01 19:27:58 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

void		ps_algo(int *a, int *b, int *count)
{
	char	*result;

	(void)b;
	result = ft_memalloc(1);
	if (check_rotate(a, count))
	{
		full_rotate(a, count, &result);
		fpf("%s\n", result);
		return ;
	}
	while (!check(a, count))
	{
		return ;
	}
}
