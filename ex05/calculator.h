/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:27:56 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 19:01:27 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR_H
# define CALCULATOR_H

# include <unistd.h>

typedef int(*t_op_func)(int, int);

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		input_check(int op, int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	check_op(char c, int *op);
void	set_arr(t_op_func func[]);

# define ADD 0
# define SUB 1
# define MUL 2
# define DIV 3
# define MOD 4
# define ERR -1
# define DIVZERO "Stop : division by zero"
# define MODZERO "Stop : modulo by zero"

#endif
