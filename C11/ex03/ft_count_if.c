/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:33:34 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 18:34:38 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	cnt;
	int	index;

	cnt = 0;
	index = 0;
	while (index < length)
	{
		if (f(tab[index++]) != 0)
			cnt++;
	}
	return (cnt);
}
