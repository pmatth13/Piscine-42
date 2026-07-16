void	ft_putchar(char c);

void	check_border(int l, int y, int c, int x)
{
	if ((l == 1) && (c == 1))
		ft_putchar('/');
	else if ((l == 1) && (c == x))
		ft_putchar('\\');
	else if ((l == y) && (c == 1))
		ft_putchar('\\');
	else if ((l == y) && (c == x))
		ft_putchar('/');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 || l ==y) && (c == 1 || c == x))
				check_border(c, x, l, y);
			else if (l == 1 || l ==y ||c == 1 || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}