/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:37:10 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/14 20:20:12 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	convert_to_n_base(long nbr, char *base, char *result, int size);
int		ft_numlen(long nbr, int n_system);
int		radix_check(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	de_num;
	char	*result;
	int		n_system;
	int		size;

	if (radix_check(base_from) || radix_check(base_to))
		return (0);
	n_system = ft_strlen(base_to);
	de_num = ft_atoi_base(nbr, base_from);
	size = ft_numlen(de_num, n_system) + 1;
	result = (char *)malloc(sizeof(char) * size);
	convert_to_n_base(de_num, base_to, result, size - 1);
	return (result);
}

void	convert_to_n_base(long nbr, char *base, char *result, int size)
{
	int	n_system;

	n_system = ft_strlen(base);
	result[size] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= (-1);
	}
	else if (nbr == 0)
	{
		result[0] = base[0];
	}
	while (nbr != 0)
	{
		result[--size] = base[nbr % n_system];
		nbr /= n_system;
	}
}

int	ft_numlen(long nbr, int n_system)
{
	int	cnt;

	cnt = 0;
	if (nbr < 0)
	{
		cnt++;
		nbr *= (-1);
	}
	else if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= n_system;
		cnt++;
	}
	return (cnt);
}
