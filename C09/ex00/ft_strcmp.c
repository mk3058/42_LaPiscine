/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:38:48 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 10:44:08 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
