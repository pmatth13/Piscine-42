/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 18:35:54 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/26 09:51:26 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int a = 4;
	int b = 9;
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}*/
