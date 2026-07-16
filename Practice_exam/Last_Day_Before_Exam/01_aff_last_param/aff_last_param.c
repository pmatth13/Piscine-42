/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_last_param.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 11:21:23 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 11:26:26 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 2)
	{
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
