/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:36:52 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/18 12:07:47 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	initial;
	int	index;

	if (length <= 2)
		return (1);
	index = 0;
	while (index < length - 1 && f(tab[index], tab[index + 1]) == 0)
		index++;
	initial = f(tab[index], tab[index + 1]);
	index++;
	while (index < length - 1)
	{
		if ((long long)initial * (long long)f(tab[index], tab[index + 1]) < 0)
			return (0);
		index++;
	}
	return (1);
}
