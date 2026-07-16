/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_a.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 10:40:52 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 10:53:54 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "a", 1);
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
