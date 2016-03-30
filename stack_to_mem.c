/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_to_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/30 11:03:52 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 11:13:29 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puswap.h"

char		**stack_to_mem(char **av, int ac)
{
	char	**arg;
	int		i;

	i = 1;
	if (!(arg = (char **)ft_memalloc(sizeof(char *) * ac)))
		return (NULL);
	while (av[i])
	{
		arg[i - 1] = ft_strdup(av[i]);
		i++;
	}
	arg[i - 1] = NULL;
	return (arg);
}
