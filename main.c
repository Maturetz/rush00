/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 22:44:35 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/06 12:46:20 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_error(int e);
void	rush(int x, int y);

int	ft_nbr_check(int x, int y)
{
	if (y <= 0 && x > 0)
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

int	main(void)
{
	int	x;
	int	y;
	int	checker;

	x = 100;
	y = 100;
	checker = ft_nbr_check(x, y);
	if (checker <= 0)
		return (0);
	else
		rush(x, y);
	return (0);
}
