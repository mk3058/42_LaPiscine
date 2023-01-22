/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:28:56 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 19:01:55 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"

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

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
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

void	check_op(char c, int *op)
{
	if (c == '+')
		*op = ADD;
	else if (c == '-')
		*op = SUB;
	else if (c == '*')
		*op = MUL;
	else if (c == '/')
		*op = DIV;
	else if (c == '%')
		*op = MOD;
	else
		*op = ERR;
}

void	set_arr(t_op_func func[])
{
	func[0] = &add;
	func[1] = &sub;
	func[2] = &mul;
	func[3] = &div;
	func[4] = &mod;
}
