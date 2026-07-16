/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 18:21:15 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/26 15:00:13 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	tmp;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		tmp = tab[e];
		tab[e] = tab[s];
		tab[s] = tmp;
		s++;
		e--;
	}
}

/*int	main(void)
{
	int array[] = {5, 4, 3, 2};
	int s;
	int size;
	
	size = 6;
	ft_rev_int_tab(array, 4);
	s = 0;
	while (s < size)
	{
		printf("%d", array[s]);
		s++;
	}
	return (0);
}*/
