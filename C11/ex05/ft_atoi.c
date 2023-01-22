/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:48:01 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 09:39:54 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"

int	find_type(char c);
int	find_start_index(char *str, int *minus_cnt);

int	ft_atoi(char *str)
{
	int		start_index;
	long	result;
	int		minus_cnt;

	result = 0;
	minus_cnt = 0;
	start_index = find_start_index(str, &minus_cnt);
	while ((start_index >= 0) && (find_type(str[start_index]) == 2))
	{
		result *= 10;
		result += str[start_index] - '0';
		start_index++;
	}
	if (minus_cnt % 2 == 1)
		result *= (-1);
	return ((int)result);
}

int	find_start_index(char *str, int *minus_cnt)
{
	int	index;

	index = 0;
	while (find_type(str[index]) == 3)
		index++;
	while (str[index])
	{
		if (find_type(str[index]) == 1)
			*minus_cnt = *minus_cnt + 1;
		else if (find_type(str[index]) > 1)
			return (index);
		index++;
	}
	return (-1);
}

int	find_type(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if ('0' <= c && c <= '9')
		return (2);
	else if ((9 <= c && c <= 13) || c == 32)
		return (3);
	else
		return (4);
}
