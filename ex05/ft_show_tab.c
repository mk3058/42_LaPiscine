/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:35:09 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/16 07:54:13 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putnbr(par[index].size);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		index++;
	}
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, (str + index), 1);
		index++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	long	input;
	int		digit;
	char	num;

	input = nb;
	if (input < 0)
	{
		write(1, "-", 1);
		input *= (-1);
	}
	digit = input % 10;
	input /= 10;
	num = (char)(48 + digit);
	if (input != 0)
		ft_putnbr(input);
	write(1, &num, 1);
}
