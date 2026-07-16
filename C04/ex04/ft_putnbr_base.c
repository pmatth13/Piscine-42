/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 12:59:31 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/02 17:54:15 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	number;

	number = nbr;
	base_len = 0;
	if (ft_checkbase(base) == 0)
		return ;
	while (base[base_len])
		base_len++;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= base_len)
	{
		ft_putnbr_base(number / base_len, base);
	}
	ft_putchar(base[number % base_len]);
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
//	ft_putnbr_base(1000, "01");
//	ft_putnbr_base(1000, "012345689");
//	ft_putnbr_base(1000, "0123456789abcdefa");
}*/
