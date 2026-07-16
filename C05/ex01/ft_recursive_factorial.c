/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/04 17:26:32 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/04 17:42:38 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
