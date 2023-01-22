/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:17:45 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/15 17:43:13 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;
	int			size;

	i = 0;
	stock_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	stock_str[ac].str = 0;
	while (i < ac)
	{
		size = ft_strlen(av[i]) + 1;
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = (char *)malloc(sizeof(char) * size);
		if (stock_str[i].copy == 0)
			return (0);
		ft_strcpy(stock_str[i].copy, av[i]);
		i++;
	}
	return (stock_str);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (1)
	{
		dest[n] = src[n];
		if (src[n] == '\0')
			break ;
		n++;
	}
	return (dest);
}
