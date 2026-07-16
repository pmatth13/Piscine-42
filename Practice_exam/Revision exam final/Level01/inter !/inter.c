/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   inter.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 13:31:45 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/13 14:04:27 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i;
		int	j;
		int	k;

		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j] && argv[2][j] != argv[1][i])
				j++;
			k = 0;
			while (k < i && argv[1][k] != argv[1][i])
				k++;
			if (argv[2][j] && k == i)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
