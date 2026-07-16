/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   max.c                                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 18:08:10 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 18:11:58 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;
	
	if (!tab || len == 0)
		return (0);
	max = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
