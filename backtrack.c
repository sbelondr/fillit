/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:29:10 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/29 15:16:08 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <inttypes.h>

long		ft_init(long *result, size_t size)
{
	size_t	i;

	i = -1;
	if (!(result = (long)malloc(sizeof(long))))
		return (0);
	while (++i < size)
		result[i] = 2222222222222222;
	return (result);
}

char		*backtrack(const long *pieces, const size_t size)
{
	size_t	i;
	long	*result;

	i = -1;
	if ((result = ft_init(result, size)) == 0)
		return (NULL);
	while (++i < size)
		;


	return (NULL);	
}
