/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 22:44:35 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/06 21:33:21 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_error(int e);
void	rush(int x, int y);

int	ft_nbr_check(int x, int y)
{
	if (x <= 0 && y > 0)
	{
		ft_error(-2);
		return (-2);
	}
	if (x <= 0 && y > 0)
	{
		ft_error(-1);
		return (-1);
	}
	if (y <= 0 && x <= 0)
	{
		ft_error(0);
		return (0);
	}
	else
		return (1);
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

int	main(void)
{
	int	x;
	int	y;
	int	checker;

	x = 10;
	y = 10;
	checker = ft_nbr_check(x, y);
	if (checker <= 0)
		return (0);
	else
		rush(x, y);
	return (0);
}
