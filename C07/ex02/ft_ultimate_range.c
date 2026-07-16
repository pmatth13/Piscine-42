/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_range.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/15 17:50:47 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/15 18:22:00 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (-1);
	i = 0;
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (len);
}
