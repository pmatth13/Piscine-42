/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_reverse_alphabet.c                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 14:24:13 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/25 09:35:40 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z';
	while (i <= 'z' && i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
