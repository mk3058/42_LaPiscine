/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namhooki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:51:15 by namhooki          #+#    #+#             */
/*   Updated: 2022/10/02 20:56:02 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	func1(int a);
void	func2(int a);
void	func3(int a);
void	ft_putchar(char c);
void	illegal_argument_error(void);

void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		if (b < 2)
			func1(a);
		else if (b == 2)
		{
			func1(a);
			func3(a);
		}
		else
		{
			func1(a);
			while (b - 2 > 0)
			{
				func2(a);
				b--;
			}
			func3(a);
		}
	}
	else
		illegal_argument_error();
}

void	func1(int a)
{
	if (a < 2)
		ft_putchar('/');
	else if (a == 2)
	{
		ft_putchar('/');
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('/');
		while (a - 2 > 0)
		{
			ft_putchar('*');
			a--;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	func2(int a)
{
	if (a < 2)
		ft_putchar('*');
	else if (a == 2)
	{
		ft_putchar('*');
		ft_putchar('*');
	}
	else
	{
		ft_putchar('*');
		while (a - 2 > 0)
		{
			ft_putchar(' ');
			a--;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	func3(int a)
{
	if (a < 2)
		ft_putchar('\\');
	else if (a == 2)
	{
		ft_putchar('\\');
		ft_putchar('/');
	}
	else
	{
		ft_putchar('\\');
		while (a - 2 > 0)
		{
			ft_putchar('*');
			a--;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}
