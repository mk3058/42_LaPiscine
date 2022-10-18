/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:11:28 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/19 08:44:34 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	print_hex_addr(long long addr);
void	print_hex_str(char *str);
void	convert_to_hex(long long  nbr, char *res, int index);
void	ft_putstr(char *str);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int loop;

	i = 0;
	loop = size / 16 + (size % 16 > 0);
	while (i < loop)
	{
		print_hex_addr((long long)addr + (16 * i));
		print_hex_str(addr + (16 * i));
		ft_putstr(addr + (16 * i));
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}

void print_hex_addr(long long addr)
{
	char addr_hex[17];

	addr_hex[16] = 0;
	convert_to_hex(addr, addr_hex, 15);
	ft_putstr(addr_hex);
	write(1, ":", 1);
}

void print_hex_str(char *str)
{
	int index;
	char hex_str[3];

	index = 0;
	hex_str[2] = 0;
	while (index < 16 && str[index])
	{	
		if(index % 2 == 0)
			write(1, " ", 1);
		convert_to_hex(str[index], hex_str, 1);
		ft_putstr(hex_str);
		index++;
	}
	while (index < 16)
	{
		if(index % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		index++;
	}
	write(1, " ", 1);
}

void	convert_to_hex(long long  nbr, char *res, int index)
{
	int	mod;
	int i;

	i = 0;
	mod = nbr % 16;
	if (nbr > 0)
	{
	if(mod < 10)
			res[index] = mod + '0';
		else
			res[index] = ('a' + (mod - 10));
		convert_to_hex(nbr / 16, res, index - 1);
	}
	else
	{
		while (i <= index)
		{
			res[i] = '0';
			i++;
		}
	}
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (index < 16 && str[index])
	{
		if (32 <= str[index] && str[index] <= 126)
			write(1, (str + index), 1);
		else
			write(1, ".", 1);
		index++;
	}
}
