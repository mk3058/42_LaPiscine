/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:04:07 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 18:36:02 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_atoi(char *input, int *res);
void	print_error(void);
int		find_all_comb(int (*input)[4], int *cond, int row_ind, int col_ind);
void	initialize_array(int (*arr)[4]);

int	main(int argc, char *argv[])
{
	int	condition[16];
	int	result_arr[4][4];
	int	atoi_res;

	if (argc != 2)
	{
		print_error();
		return (0);
	}
	initialize_array(result_arr);
	atoi_res = my_atoi(argv[1], condition);
	if (atoi_res != 0)
	{
		print_error();
		return (0);
	}
	find_all_comb(result_arr, condition, 0, 0);
	if (condition[0] != -1)
	{
		print_error();
		return (0);
	}
	return (0);
}

void	initialize_array(int (*arr)[4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			arr[row][col] = 0;
			col++;
		}
		row++;
	}
}
