/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:11:51 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 18:40:04 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	find_end(char *input);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_index;
	unsigned int	src_index;

	dest_index = find_end(dest);
	src_index = 0;
	while (src_index < nb)
	{
		if (src[src_index] == '\0')
			break ;
		dest[dest_index++] = src[src_index++];
	}
	dest[dest_index] = '\0';
	return (dest);
}

unsigned int	find_end(char *input)
{
	unsigned int	index;

	index = 0;
	while (1)
	{
		if (input[index] == '\0')
			return (index);
		index++;
	}
}
