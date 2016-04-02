/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puswap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:49:46 by rle-mino          #+#    #+#             */
/*   Updated: 2016/04/03 00:30:48 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSWAP_H
# define PUSWAP_H

# include "libft.h"

# define DEBUG fpf("%d - %s - %s\n", __LINE__, __func__, __FILE__);

enum
{
	P_SA,
	P_SB,
	P_SS,
	P_PA,
	P_PB,
	P_RA,
	P_RB,
	P_RR,
	P_RRA,
	P_RRB,
	P_RRR
};

int			ps_error(void);
char		**stack_to_mem(char **av, int ac);
void		add_move(char **result, int move);

#endif
