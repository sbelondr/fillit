/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:09:52 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/28 11:38:32 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	ft_alpha(int nb)
{
	char	c;

	c = 55 + nb;
	return (c);
}

char		*ft_convert_base(int nb, int base)
{
	int		result;
	char	*str;
	char	c;

	str = ft_strnew(1);
	if (nb != 0)
	{
		result = nb % base;
		str = ft_convert_base(nb /= base, base);
		if (base > 9 && result > 9)
		{
			c = ft_alpha(result);
			str = ft_chrjoin_end(str, c);
		}
		else
			str = ft_strjoin(str, ft_itoa(result));
	}
	return (str);
}
