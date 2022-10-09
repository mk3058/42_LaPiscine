/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:33:38 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/08 08:20:22 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_to_n_base(long nbr, int n_system, char *base);
int		radix_check(int nbr, char *base);
int		ft_strlen(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;

	if (radix_check(ft_strlen(base), base))
		return ;
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= (-1);
	}
	convert_to_n_base(num, ft_strlen(base), base);
}

void	convert_to_n_base(long nbr, int n_system, char *base)
{
	int	div;
	int	mod;

	div = nbr / n_system;
	mod = nbr % n_system;
	if (div != 0)
		convert_to_n_base(div, n_system, base);
	write(1, base + mod, 1);
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
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
