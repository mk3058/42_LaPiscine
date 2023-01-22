/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:22:19 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/01 09:25:19 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int num);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 99)
	{
		while (i < j && j <= 99)
		{
			print(i);
			write(1, " ", 1);
			print(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	print(int num)
{
	char	digit[2];

	digit[0] = '0';
	digit[1] = '0';
	digit[1] = (char)(48 + num % 10);
	digit[0] = (char)(48 + num / 10);
	write(1, digit, 2);
}
