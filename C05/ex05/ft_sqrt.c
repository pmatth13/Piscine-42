/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/05 20:55:27 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/05 21:02:43 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
