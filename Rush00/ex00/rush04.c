void	ft_putchar(char c);

void	check_border(int c, int x)
{
	if (c == 1)
		ft_putchar('A');
	else if (c == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	check_border_rev(int c, int x)
{
	if (c == 1)
		ft_putchar('C');
	else if (c == x)
		ft_putchar('A');
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
				check_border_rev(l, y);
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