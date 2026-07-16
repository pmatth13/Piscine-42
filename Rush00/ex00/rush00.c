/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush00.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 18:46:40 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/27 18:46:47 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_border(int l, int y)
{
	if (l == 1)
		ft_putchar('o');
	else if (l == y)
		ft_putchar('o');
	else
		ft_putchar('|');
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
				ft_putchar('-');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}