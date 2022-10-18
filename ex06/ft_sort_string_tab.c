/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:12:29 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 17:07:23 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);
void	sort(int argc, char **argv);

void	ft_sort_string_tab(char **tab)
{
	int	size;

	size = 0;
	while (tab[size])
		size++;
	sort(size, tab);
}

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

void	sort(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1 - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
