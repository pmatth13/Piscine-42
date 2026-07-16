/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 12:27:56 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/01 20:13:34 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = '0' + (nb % 10);
	write(1, &c, 1);
}

/*int main(void)
{
	ft_putnbr(5160);
	write(1, "\n", 1);
	ft_putnbr(-58854);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
}*/
