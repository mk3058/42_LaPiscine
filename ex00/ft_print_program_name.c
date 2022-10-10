/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:30:33 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/10 20:36:47 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, (str + index), 1);
		index++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr(argv[0]);
	return (0);
}
