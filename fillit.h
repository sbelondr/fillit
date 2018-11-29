/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:18:30 by llenotre          #+#    #+#             */
/*   Updated: 2018/11/29 15:05:26 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
/////////////////////
#include <stdio.h>

typedef uint16_t	t_piece;

t_piece	*read_file(const char *file);
int		check(const t_piece *pieces);

char	*backtrack(const long *pieces, const size_t size);

#endif
