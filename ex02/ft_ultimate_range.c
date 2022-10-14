/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:46:01 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/14 19:22:35 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	size;
	int			index;

	index = 0;
	if (max <= min)
	{
		range = 0;
		return (0);
	}
	size = (long long)max - (long long)min;
	range[0] = (int *)malloc(sizeof(int) * size);
	if (range[0] == 0)
		return (-1);
	while (min < max)
		range[0][index++] = min++;
	return (size);
}
