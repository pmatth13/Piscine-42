/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                            :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: mpiervit <mpiervit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 11:47:12 by psaudell          #+#    #+#             */
/*   Updated: 2026/06/27 18:41:01 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_border(int l, int y)
{
	if (l == 1)
		ft_putchar('A');
	else if (l == y)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y)
	{
		c = 2;
		check_border(l, y);
		while (c <= x)
		{
			if (c == x)
				check_border(l, y);
			else if (l == 1 || l == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
