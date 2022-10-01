/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 22:11:26 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/01 22:25:53 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cnt;
	int	tmp;

	cnt = 0;
	while (cnt <= (size / 2))
	{
		tmp = tab[cnt];
		tab[cnt] = tab[size - 1 - cnt];
		tab[size - 1 - cnt] = tmp;
	}
}
