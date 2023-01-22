/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:27:26 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/14 20:24:37 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
long	convert_to_decimal(char *str, char *base, int index);
int		find_start_index(char *str, int *is_minus);
int		radix_check(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int		is_minus;
	int		index;
	long	result;

	is_minus = 1;
	index = find_start_index(str, &is_minus);
	result = convert_to_decimal(str, base, index);
	return ((int)(result * is_minus));
}

long	convert_to_decimal(char *str, char *base, int index)
{
	long	result;
	int		n_system;
	int		base_index;
	int		flag;

	result = 0;
	flag = 1;
	n_system = ft_strlen(base);
	while (str[index] && flag)
	{
		base_index = 0;
		flag = 0;
		while (base[base_index])
		{
			if (str[index] == base[base_index])
			{
				flag = 1;
				result *= n_system;
				result += base_index;
			}
			base_index++;
		}
		index++;
	}
	return (result);
}

int	find_start_index(char *str, int *is_minus)
{
	int	i;

	i = 0;
	while ((8 < str[i] && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*is_minus = *is_minus * (-1);
		i++;
	}
	return (i);
}

int	radix_check(char *base)
{
	int	i;
	int	j;
	int	n_system;

	i = 0;
	n_system = ft_strlen(base);
	if (n_system <= 1)
		return (1);
	while (i < n_system)
	{
		j = i + 1;
		while (j < n_system)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
