/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:50:26 by minkyuki          #+#    #+#             */
/*   Updated: 2022/09/29 09:30:00 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while ('0' <= i && i <= '9')
	{
		j = (char)(i + 1);
		while (i < j && j <= '9')
		{	
			k = (char)(j + 1);
			while (j < k && k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (!(i == '7' && j == '8' && k == '9'))
					write(1, ", ", 2);
				k = (char)(k + 1);
			}
			j = (char)(j + 1);
		}
		i = (char)(i + 1);
	}
}
