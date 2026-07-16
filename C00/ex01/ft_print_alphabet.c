/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_alphabet.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 12:44:45 by psaudell       #+#    #+#                */
/*   Updated: 2026/06/26 14:54:57 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
