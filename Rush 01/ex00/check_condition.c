/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_condition.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:10:07 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 21:37:27 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_check_l(int (*input)[4], int *cond, int row);
int	row_check_r(int (*input)[4], int *cond, int row);
int	col_check_u(int (*input)[4], int *cond, int col);
int	col_check_d(int (*input)[4], int *cond, int col);

int	check_condition(int (*input)[4], int *cond)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (row_check_l(input, cond, index) || row_check_r(input, cond, index))
			return (0);
		if (col_check_u(input, cond, index) || col_check_d(input, cond, index))
			return (0);
		index++;
	}
	return (1);
}

int	row_check_l(int (*input)[4], int *cond, int row)
{
	int	max;
	int	seen;
	int	index;

	index = 0;
	max = 0;
	seen = 1;
	while (input[row][index] != 4)
	{
		if (input[row][index] > max)
		{
			max = input[row][index];
			seen++;
		}
		index++;
	}
	if (seen == cond[8 + row])
		return (0);
	else
		return (1);
}

int	row_check_r(int (*input)[4], int *cond, int row)
{
	int	max;
	int	seen;
	int	index;

	index = 0;
	max = 0;
	seen = 1;
	while (input[row][3 - index] != 4)
	{
		if (input[row][3 - index] > max)
		{
			max = input[row][3 - index];
			seen++;
		}
		index++;
	}
	if (seen == cond[12 + row])
		return (0);
	else
		return (1);
}

int	col_check_u(int (*input)[4], int *cond, int col)
{
	int	max;
	int	seen;
	int	index;

	index = 0;
	max = 0;
	seen = 1;
	while (input[index][col] != 4)
	{
		if (input[index][col] > max)
		{
			max = input[index][col];
			seen++;
		}
		index++;
	}
	if (seen == cond[col])
		return (0);
	else
		return (1);
}

int	col_check_d(int (*input)[4], int *cond, int col)
{
	int	max;
	int	seen;
	int	index;

	index = 0;
	max = 0;
	seen = 1;
	while (input[3 - index][col] != 4)
	{
		if (input[3 - index][col] > max)
		{
			max = input[3 - index][col];
			seen++;
		}
		index++;
	}
	if (seen == cond[4 + col])
		return (0);
	else
		return (1);
}
