/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer_combn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:03:40 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/01 09:10:05 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_end(int *result_num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (result_num[i] != 10 - n + i)
			return (0);
		i++;
	}
	return (1);
}

void	print(int *result_num, int n)
{
	char	c;
	int		index;
	int		check;

	check = 0;
	index = 0;
	while (index < n)
	{
		c = result_num[index] + 48;
		write(1, &c, 1);
		index++;
	}
	if (! is_end(result_num, n))
		write(1, ", ", 2);
}

void	dfs(int n, int index, int start_with, int *result_num)
{
	while (start_with <= 10 - n + index)
	{
		result_num[index] = start_with;
		if (index == n - 1)
		{
			print(result_num, n);
		}
		else
		{
			dfs(n, index + 1, start_with + 1, result_num);
		}
		start_with++;
	}
}

void	ft_print_combn(int n)
{
	int	result_num[9];

	dfs(n, 0, 0, result_num);
}
