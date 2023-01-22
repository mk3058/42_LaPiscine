/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:50:37 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/11 20:17:33 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	re_factorial(int *res, int nb);

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	re_factorial(&res, nb);
	return (res);
}

void	re_factorial(int *res, int nb)
{
	if (nb > 1)
	{
		*res *= nb;
		re_factorial(res, nb - 1);
	}
}
