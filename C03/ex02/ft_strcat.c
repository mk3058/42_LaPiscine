/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:02:17 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 10:46:59 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_end(char *input);

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	dest_index = find_end(dest);
	src_index = 0;
	while (src[src_index])
	{
		dest[dest_index++] = src[src_index++];
	}
	dest[dest_index] = '\0';
	return (dest);
}

int	find_end(char *input)
{
	int	index;

	index = 0;
	while (1)
	{
		if (input[index] == '\0')
			return (index);
		index++;
	}
}
