/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:17:33 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/11 20:19:43 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	re_power(int *res, int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	re_power(&res, nb, power);
	return (res);
}

void	re_power(int *res, int nb, int power)
{
	if (power > 0)
	{
		*res *= nb;
		re_power(res, nb, power - 1);
	}
}
