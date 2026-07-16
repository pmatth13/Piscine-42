/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   range.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/15 17:35:33 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/15 17:47:56 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
