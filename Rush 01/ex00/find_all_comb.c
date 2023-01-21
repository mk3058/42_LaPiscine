/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_answer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:05:15 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 18:09:07 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_column(int (*arr)[4], int column);
int		check_row(int (*arr)[4], int row);
int		check(int (*input)[4], int row, int col);
int		check_condition(int (*input)[4], int *cond);
void	print_array(int (*input)[4]);

int	find_all_comb(int (*input)[4], int *cond, int row_ind, int col_ind)
{
	int	num;

	num = 1;
	while (num <= 4)
	{
		input[row_ind][col_ind] = num;
		if (check(input, row_ind, col_ind))
		{
			if (row_ind == 3 && col_ind == 3)
			{
				if (check_condition(input, cond))
				{
					print_array(input);
					cond[0] = -1;
				}
			}
			else if (col_ind == 3)
				find_all_comb(input, cond, row_ind + 1, 0);
			else
				find_all_comb(input, cond, row_ind, col_ind + 1);
		}
		input[row_ind][col_ind] = 0;
		num++;
	}
	return (0);
}

int	check(int (*input)[4], int row, int col)
{
	int	res;

	res = 1;
	if (row < 1)
		res = check_row(input, row);
	else
	{
		if (check_row(input, row) && check_column(input, col))
			res = 1;
		else
			res = 0;
	}
	return (res);
}

int	check_row(int (*arr)[4], int row)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < 3)
	{
		index2 = index1 + 1;
		if (arr[row][index2] == 0)
			break ;
		while (index2 < 4)
		{
			if (arr[row][index1] == arr[row][index2])
				return (0);
			index2++;
		}
		index1++;
	}
	return (1);
}

int	check_column(int (*arr)[4], int column)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (index1 < 3)
	{
		index2 = index1 + 1;
		if (arr[index2][column] == '\0')
			break ;
		while (index2 < 4)
		{
			if (arr[index1][column] == arr[index2][column])
				return (0);
			index2++;
		}
		index1++;
	}
	return (1);
}
