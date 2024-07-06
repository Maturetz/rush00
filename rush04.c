/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 22:42:38 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/06 12:57:54 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x, int xv)
{
	ft_putchar('A');
	while (xv <= x - 2)
	{
		ft_putchar('B');
		xv++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	ft_print_bottom(int x, int xv)
{
	ft_putchar('C');
	while (xv <= x - 2)
	{
		ft_putchar('B');
		xv++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	ft_print_square(int x, int xv, int y, int yv)
{
	ft_print_top(x, xv);
	while (yv <= y - 2)
	{
		ft_putchar('B');
		while (xv <= x - 2)
		{
			ft_putchar(' ');
			xv++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		xv = 1;
		yv++;
	}
	ft_print_bottom(x, xv);
}

void	ft_print_high_line(int y, int yv)
{
	ft_putchar('A');
	ft_putchar('\n');
	while (yv <= y - 2)
	{
		ft_putchar('B');
		ft_putchar('\n');
		yv++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

/*yv = y variable & xv = x variable*/
void	rush(int x, int y)
{
	int	xv;
	int	yv;

	xv = 1;
	yv = 1;
	if (x == 1 && y == 1)
		ft_putchar('A');
	if (x > 1 && y == 1)
		ft_print_top(x, xv);
	if (x == 1 && y > 1)
		ft_print_high_line(y, yv);
	if (x > 1 && y > 1)
		ft_print_square(y, yv, x, xv);
}
