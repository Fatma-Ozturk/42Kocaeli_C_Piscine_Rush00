/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatmaozturk <faozturk@42kocaeli.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 11:10:48 by fatmaozturk       #+#    #+#             */
/*   Updated: 2022/03/19 11:14:32 by fatmaozturk      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	n;
	int	m;

	m = x;
	n = y;
	if (x < 1 || y < 1)
		return ;
	while (y > 0)
	{
		while (x > 0)
		{
			if ((x == 1 && 1 < y && y < n) || (x == m && 1 < y && y < n))
				ft_putchar('|');
			else if ((y == 1 && 1 < x && x < m) || (y == n && 1 < x && x < m))
				ft_putchar('-');
			else if (x != 1 && y != 1 && x != m && y != n)
				ft_putchar(' ');
			else
				ft_putchar('o');
			x--;
		}
		y--;
		ft_putchar('\n');
		x = m;
	}
}

int	main(void)
{
	rush(4, 4);
	return (0);
}
