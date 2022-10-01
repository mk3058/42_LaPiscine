/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namhooki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:51:15 by namhooki          #+#    #+#             */
/*   Updated: 2022/10/01 17:41:06 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./ft_putchar.c"

void	func1(int a);
void	func2(int a);

void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		if (b < 2)
			func1(a);
		else if (b == 2)
		{
			func1(a);
			func1(a);
		}
		else
		{
			func1(a);
			while (b - 2 > 0)
			{
				func2(a);
				b--;
			}
			func1(a);
		}
	}
	else
		illegal_argument_error();
}

void	func1(int a)
{
	if (a < 2)
		ft_putchar('A');
	else if (a == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
	}
	else
	{
		ft_putchar('A');
		while (a - 2 > 0)
		{
			ft_putchar('B');
			a--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	func2(int a)
{
	if (a < 2)
		ft_putchar('B');
	else if (a == 2)
	{
		ft_putchar('B');
		ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
		while (a - 2 > 0)
		{
			ft_putchar(' ');
			a--;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}
