/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:26:17 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/17 21:41:56 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	str_to_lower_case(char *str);
void	char_to_upper_case(char *ch);
int		find_type(char *ch);

char	*ft_strcapitalize(char *str)
{
	int	i;

	str_to_lower_case(str);
	if (find_type(str) <= 1)
		char_to_upper_case(str);
	i = 0;
	while (str[i])
	{
		if (find_type(str + i) == 3)
		{
			char_to_upper_case(str + i + 1);
		}
		i++;
	}
	return (str);
}

void	str_to_lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	char_to_upper_case(char *ch)
{
	if ('a' <= *ch && *ch <= 'z' && *ch != '\0')
	{
		*ch -= 32;
	}
}

int	find_type(char *ch)
{
	if ('a' <= *ch && *ch <= 'z')
		return (0);
	if ('A' <= *ch && *ch <= 'Z')
		return (1);
	if ('0' <= *ch && *ch <= '9')
		return (2);
	else
		return (3);
}
