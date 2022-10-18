/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:33:50 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 18:40:51 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort(char **tab, int size, int (*cmp)(char*, char*));

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	sort(tab, size, cmp);
}

void	sort(char **tab, int size, int (*cmp)(char*, char*))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
