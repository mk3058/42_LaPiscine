/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:00:09 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 17:08:05 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	index;

	res = (int *)malloc(sizeof(int) * length);
	index = 0;
	while (index < length)
	{
		res[index] = f(tab[index]);
		index++;
	}
	return (res);
}
