/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 15:16:52 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/25 16:00:28 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*int	main(void)
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/
