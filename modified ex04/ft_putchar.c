/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 22:45:02 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/05 22:45:54 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(int e)
{
	if (e == -2)
		write (1, "Error y value <= 0\n", 19);
	if (e == -1)
		write (1, "Error x value <= 0\n", 19);
	if (e == 0)
		write (1, "Error Value entered for x and x <= 0\n", 38);
}
