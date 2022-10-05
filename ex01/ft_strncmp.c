/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:26:25 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 18:57:04 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	res;
	unsigned int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (index >= n)
			break ;
		res = s1[index] - s2[index];
		if (res != 0)
			return ((int)res);
		index++;
	}
	return (0);
}
