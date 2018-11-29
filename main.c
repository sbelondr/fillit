/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llenotre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:17:12 by llenotre          #+#    #+#             */
/*   Updated: 2018/11/29 16:53:38 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(void)
{
	// TODO
	t_piece	*pieces;

	pieces = (t_piece*)malloc(sizeof(t_piece));
	pieces[0] = 1000100010001000;
	pieces[1] = 1111000000000000;
	pieces[2] = 110110000000000;
	pieces[3] = 1110000100000000;
	pieces[4] = 0;

	if (pieces)
		backtrack(pieces, 4);
	return (0);
}
