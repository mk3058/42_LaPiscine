/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:44:00 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:33 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr(DIVZERO);
		return (-1);
	}
	else
		return (a / b);
}

int	mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr(MODZERO);
		return (-1);
	}
	else
		return (a % b);
}
