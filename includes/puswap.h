/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puswap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:49:46 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/30 21:16:10 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSWAP_H
# define PUSWAP_H

# include "libft.h"

#define DEBUG fpf("%d - %s - %s\n", __LINE__, __func__, __FILE__);

int			ps_error(void);
int			*ps_parsing(char **av, int ac);
char		**stack_to_mem(char **av, int ac);
void		push_sa(int **a, int **b, int *count);
void		push_sb(int **a, int **b, int *count);
void		push_ss(int **a, int **b, int *count);
void		push_pa(int **a, int **b, int *count);
void		push_pb(int **a, int **b, int *count);
void		push_ra(int **a, int **b, int *count);
void		push_rb(int **a, int **b, int *count);
void		push_rr(int **a, int **b, int *count);
void		push_rra(int **a, int **b, int *count);
void		push_rrb(int **a, int **b, int *count);
void		push_rrr(int **a, int **b, int *count);

#endif
