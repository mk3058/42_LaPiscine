/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:36:02 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/02 20:58:04 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int a, int b);
int		my_atoi(char *str);
void	input_error(void);

int	main(int argc, char *argv[])
{
	int		a;
	int		b;

	if (argc == 3)
	{
		a = my_atoi(argv[1]);
		b = my_atoi(argv[2]);
		rush(a, b);
	}
	else
		input_error();
	return (0);
}

int	my_atoi(char *str)
{
	int		num;
	int		cnt;
	int		cnt_zero;

	num = 0;
	cnt = 0;
	cnt_zero = 0;
	while (str[cnt_zero])
	{
		if (str[cnt_zero] < '0' || str[cnt_zero] > '9')
			return (0);
		cnt_zero++;
	}
	while (str[cnt] && (str[cnt] >= '0' && str[cnt] <= '9'))
	{	
		num = num * 10 + (str[cnt] - '0');
		cnt++;
	}
	return (num);
}
