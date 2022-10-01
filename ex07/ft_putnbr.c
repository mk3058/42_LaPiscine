/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:27:17 by minkyuki          #+#    #+#             */
/*   Updated: 2022/09/30 19:51:22 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	input;
	int		digit;
	char	num;

	input = nb;
	if (input < 0)
	{
		write(1, "-", 1);
		input *= (-1);
	}
	digit = input % 10;
	input /= 10;
	num = (char)(48 + digit);
	if (input != 0)
		ft_putnbr(input);
	write(1, &num, 1);
}
