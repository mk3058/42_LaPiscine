/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:08:38 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 09:44:52 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_start_index(int *minus_cnt, char *str, char *base);
long	convert_to_decimal(char *str, char*base, int n_system, int index);
int		radix_check(int n_system, char *base);
int		ft_strlen(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int		start_index;
	int		n_system;
	int		minus_cnt;
	long	result;

	minus_cnt = 0;
	n_system = ft_strlen(base);
	start_index = get_start_index(&minus_cnt, str, base);
	if (radix_check(n_system, base) || start_index < 0)
		return (0);
	result = convert_to_decimal(str, base, n_system, start_index);
	if (minus_cnt % 2 != 0)
		result *= (-1);
	return ((int)result);
}

long	convert_to_decimal(char *str, char*base, int n_system, int index)
{
	int		base_index;
	long	result;
	int		flag;

	flag = 1;
	base_index = 0;
	result = 0;
	while (str[index] && flag)
	{
		flag = 0;
		base_index = 0;
		while (base[base_index])
		{
			if (str[index] == base[base_index])
			{
				result *= n_system;
				result += base_index;
				flag = 1;
				break ;
			}
			base_index++;
		}
		index++;
	}
	return (result);
}

int	get_start_index(int *minus_cnt, char *str, char *base)
{
	int	index;
	int	base_index;

	index = 0;
	while (str[index])
	{
		base_index = 0;
		if (str[index] == '-')
			*minus_cnt += 1;
		else if (!(str[index] == '+' || str[index] == ' '))
		{
			while (base[base_index])
			{
				if (base[base_index] == str[index])
					return (index);
				base_index++;
			}
		}
		index++;
	}
	return (-1);
}

int	radix_check(int n_system, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < n_system - 1)
	{
		j = i + 1;
		while (j < n_system)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}
