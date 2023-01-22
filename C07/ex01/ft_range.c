/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:29:39 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/13 17:28:05 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*res;
	int			ind;
	long long	size;

	size = max - min;
	if (size <= 0)
		return (0);
	res = (int *)malloc(sizeof(int) * (size));
	if (res == 0)
		return (0);
	ind = 0;
	while (min < max)
		res[ind++] = min++;
	return (res);
}
