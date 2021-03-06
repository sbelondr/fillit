/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelondr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 10:35:42 by sbelondr          #+#    #+#             */
/*   Updated: 2018/11/29 10:38:42 by sbelondr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb, int sq)
{
	int	result;

	result = nb;

	while (--sq)
		result *= nb;
	return (result);
}
