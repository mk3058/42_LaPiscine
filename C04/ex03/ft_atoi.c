/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:41:20 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/08 14:46:31 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_start_index(int *minus_cnt, char *str);

int	ft_atoi(char *str)
{
	int		index;
	int		minus_cnt;
	long	result;

	minus_cnt = 0;
	index = get_start_index(&minus_cnt, str);
	result = 0;
	while ('0' <= str[index] && str[index] <= '9' && index > 0)
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	if (minus_cnt % 2 != 0)
		result *= (-1);
	return ((int)result);
}

int	get_start_index(int *minus_cnt, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == '-')
			*minus_cnt = *minus_cnt + 1;
		else if ('0' <= str[index] && str[index] <= '9')
			break ;
		else if (!(str[index] == ' ' || str[index] == '+'))
			return (-1);
		index++ ;
	}
	return (index);
}
