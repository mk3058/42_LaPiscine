/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:12:46 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/11 20:23:55 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	i = 2;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
