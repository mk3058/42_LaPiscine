/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:22:55 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 11:04:37 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	index;

	dest_length = (unsigned int)ft_strlen(dest);
	src_length = (unsigned int)ft_strlen(src);
	index = 0;
	if (size <= dest_length)
		return (src_length + size);
	while (dest_length + index < size - 1)
	{
		if (!src[index])
			break ;
		dest[dest_length + index] = src[index];
		index++;
	}
	dest[dest_length + index] = '\0';
	return (dest_length + src_length);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
