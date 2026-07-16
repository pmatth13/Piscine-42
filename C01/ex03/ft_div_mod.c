/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 14:30:05 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/26 09:52:51 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int div;
	int mod;
	ft_div_mod(10, 2, &div, &mod);
	printf("*div = %d\n", div);
	printf("*mod = %d\n", mod);
	return (0);
}*/
