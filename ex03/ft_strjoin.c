/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:46:20 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/12 12:28:46 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
int		get_tot_length(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		index;

	index = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char) * 0);
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * get_tot_length(size, strs, sep));
	dest[0] = '\0';
	while (index < size)
	{
		ft_strcat(dest, *(strs + index));
		if (index != size - 1)
			ft_strcat(dest, sep);
		index++;
	}
	return (dest);
}

int	get_tot_length(int size, char **strs, char *sep)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (index < size)
	{
		length += ft_strlen(*(strs + index));
		index++;
	}
	length += (ft_strlen(sep) * (size - 1));
	return (length + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	src_index = 0;
	dest_index = ft_strlen(dest);
	while (src[src_index])
		dest[dest_index++] = src[src_index++];
	dest[dest_index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}
