/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:37:55 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/13 17:42:19 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		index;

	index = 0;
	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	while (index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[size] = '\0';
	return (dest);
}
