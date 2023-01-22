/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:28:04 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/18 11:16:06 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"

int	main(int argc, char **argv)
{
	int			a;
	int			b;
	int			res;
	int			op;
	t_op_func	func[5];

	check_op(argv[2][0], &op);
	if (input_check(op, argc, argv))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	set_arr(func);
	res = func[op](a, b);
	if (op >= 3 && res < 0)
		return (0);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}

int	input_check(int op, int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1 || op < 0)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}
