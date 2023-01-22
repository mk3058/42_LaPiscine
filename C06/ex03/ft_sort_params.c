/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:51:25 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/10 21:18:19 by minkyuki         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		res = s1[index] - s2[index];
		if (res != 0)
			return (res);
		index++;
	}
	return (0);
}

void	sort(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
