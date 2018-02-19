/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:10:58 by vzamyati          #+#    #+#             */
/*   Updated: 2017/12/02 15:11:00 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_power(int x, int y)
{
	int		res;

	res = 1;
	while (y != 0)
	{
		res *= x;
		y--;
	}
	return (res);
}
