/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:21:42 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/11 20:25:39 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	set_position(int board[10][10], int r, int *cnt);
int		check_position(int board[10][10], int r, int c);
int		abs(int i);
void	print(int board[10][10]);

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	cnt;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	cnt = 0;
	set_position(board, 0, &cnt);
	return (cnt);
}

void	set_position(int board[10][10], int r, int *cnt)
{
	int	c;

	c = 0;
	while (c < 10)
	{
		board[r][c] = 1;
		if (check_position(board, r, c))
		{
			if (r != 9)
				set_position(board, r + 1, cnt);
			else
			{
				*cnt = *cnt + 1;
				print(board);
			}
		}
		board[r][c] = 0;
		c++;
	}
}

int	check_position(int board[10][10], int r, int c)
{
	int	br;
	int	bc;

	br = 0;
	while (br < r)
	{
		if (board[br][c] != 0)
			return (0);
		br++;
	}
	br = 0;
	while (br < r)
	{
		bc = 0;
		while (bc < 10)
		{
			if (abs(br - r) == abs(bc - c) && board[br][bc] == 1)
				return (0);
			bc++;
		}
		br++;
	}
	return (1);
}

int	abs(int i)
{
	if (i < 0)
		i *= (-1);
	return (i);
}

void	print(int board[10][10])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	col = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			if (board[row][col] == 1)
			{
				c = col + '0';
				write(1, &c, 1);
			}
			col++;
		}
		row++;
	}
	write(1, "\n", 1);
}
