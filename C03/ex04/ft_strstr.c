/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:07:51 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/05 18:46:09 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, char *to_find, int start);
int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int		index;

	if (ft_strlen(to_find) == 0)
		return (str);
	index = 0;
	while (str[index])
	{
		if (str[index] == to_find[0])
		{
			if (check(str, to_find, index))
			{
				return (str + index);
			}
		}
		index++;
	}
	return (0);
}

int	check(char *str, char *to_find, int start)
{
	int	index;

	index = 0;
	while (to_find[index])
	{
		if (str[start + index] != to_find[index])
			return (0);
		index++;
	}
	return (1);
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
