/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puswap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 14:49:46 by rle-mino          #+#    #+#             */
/*   Updated: 2016/03/29 18:49:36 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSWAP_H
# define PUSWAP_H

# include "libft.h"

#define DEBUG fpf("%d - %s - %s\n", __LINE__, __func__, __FILE__);

int			ps_error(void);
int			*ps_parsing(char **av, int ac);

#endif
