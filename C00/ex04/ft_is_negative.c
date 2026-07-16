/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_negative.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 15:10:34 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/25 10:18:52 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	if (n >= 0)
		ft_putchar('P');
}

/*int	main(void)
{
	int a = -25;
	int b = 25;
	ft_is_negative(a);
	ft_is_negative(b);
	return (0);
}*/
