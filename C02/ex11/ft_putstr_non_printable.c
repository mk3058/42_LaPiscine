/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:44:21 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/03 21:17:03 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_decimal_to_hexa(char *arr, unsigned char input);

void	ft_putstr_non_printable(char *str)
{
	char	hexa[3];
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(32 <= str[index] && str[index] <= 126))
		{
			convert_decimal_to_hexa(hexa, str[index]);
			write(1, hexa, 3);
		}
		else
		{
			write(1, (str + index), 1);
		}
		index++;
	}
}

void	convert_decimal_to_hexa(char *arr, unsigned char input)
{
	int	decimal;
	int	div;
	int	mod;

	decimal = (int)input;
	div = decimal / 16;
	mod = decimal % 16;
	arr[0] = '\\';
	if (div <= 9)
		arr[1] = (div + '0');
	else
		arr[1] = 'a' + (div - 10);
	if (mod <= 9)
	{
		arr[2] = (mod + '0');
	}
	else
	{
		arr[2] = 'a' + (mod - 10);
	}
}
