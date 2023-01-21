/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:27:56 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/09 21:44:36 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	convert_to_int(char *inp, int *res);
int	check_duplicate(char *inp);

int	my_atoi(char *input, int *res)
{
	int	res_ind;

	if (check_duplicate(input) == -1)
		return (-1);
	res_ind = convert_to_int(input, res);
	if (res_ind != 16)
		return (-1);
	else
		return (0);
}

int	convert_to_int(char *inp, int *res)
{
	int	inp_ind;
	int	res_ind;

	inp_ind = 0;
	res_ind = 0;
	while (inp[inp_ind])
	{
		if ('1' <= inp[inp_ind] && inp[inp_ind] <= '4')
		{
			if (!(inp[inp_ind + 1] == ' ' || inp[inp_ind + 1] == '\0'))
				return (-1);
			res[res_ind++] = inp[inp_ind] - '0';
		}
		else
		{
			if (inp[inp_ind] != ' ')
				return (-1);
		}
		inp_ind++;
	}
	return (res_ind);
}

int	check_duplicate(char *inp)
{
	int	index;

	index = 0;
	if (!('1' <= inp[0] && inp[0] <= '4'))
		return (-1);
	while (inp[index + 1])
	{
		if (inp[index] == inp[index + 1])
			return (-1);
		index++;
	}
	if (!('1' <= inp[index] && inp[index] <= '4'))
		return (-1);
	return (0);
}
