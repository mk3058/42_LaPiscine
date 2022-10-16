/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:59:07 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/14 20:25:50 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_delim(char *str, char *charset, int *delim);
void	split_str(char *str, int *delim, char **split, int portion_num);
char	*ft_strcpy(char *dest, char *src, int del1, int del2);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	int		*delim;
	int		portion_num;
	char	**split;

	delim = (int *)malloc(sizeof(int) * (ft_strlen(str) + 2));
	portion_num = find_delim(str, charset, delim) + 1;
	if (portion_num - 1 == ft_strlen(str))
	{
		split = (char **)malloc(sizeof(char *) * 1);
		split[0] = 0;
		return (split);
	}
	split = (char **)malloc(sizeof(char *) * (portion_num + 1));
	split[0] = 0;
	split_str(str, delim, split, portion_num);
	return (split);
}

int	find_delim(char *str, char *charset, int *delim)
{
	int	str_i;
	int	charset_i;
	int	delim_i;

	str_i = 0;
	charset_i = 0;
	delim_i = 1;
	delim[0] = -1;
	while (str[str_i])
	{
		charset_i = 0;
		while (charset[charset_i])
		{
			if (str[str_i] == charset[charset_i])
			{
				delim[delim_i++] = str_i;
				break ;
			}
			charset_i++;
		}
		str_i++;
	}
	delim[delim_i++] = ft_strlen(str);
	return (delim_i - 2);
}

void	split_str(char *str, int *delim, char **split, int portion_num)
{
	int	size;
	int	index;
	int	del_ind;

	index = 0;
	del_ind = 0;
	while (index < portion_num)
	{
		if (delim[del_ind] == ft_strlen(str))
		{
			if (index != portion_num - 1)
				split[index] = 0;
			break ;
		}
		size = delim[del_ind + 1] - delim[del_ind];
		if (size != 1)
		{
			split[index] = (char *)malloc(sizeof(char) * size);
			split[index][0] = '\0';
			ft_strcpy(split[index], str, delim[del_ind], delim[del_ind + 1]);
			index++;
			split[index] = 0;
		}
		del_ind++;
	}
}

char	*ft_strcpy(char *dest, char *src, int del1, int del2)
{
	int	index;

	index = 0;
	while (++del1 < del2)
	{
		dest[index] = src[del1];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}
