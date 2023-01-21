/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:33:54 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 16:19:56 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int (*input)[4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = input[row][col] + '0';
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			col++;
		}
		row++;
	}
}
