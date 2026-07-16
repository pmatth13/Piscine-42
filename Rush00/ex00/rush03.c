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
				check_border(c, x);
			else if (l == 1 || l ==y ||c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}