/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minkyuki <minkyuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:36:42 by minkyuki          #+#    #+#             */
/*   Updated: 2022/10/02 20:53:57 by minkyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	illegal_argument_error(void)
{
	write(1, "Please enter a 2 positive integers\n", 34);
}

void	input_error(void)
{
	write(1, "Enter 2 integer digits ex)1 3\n", 30);
}
