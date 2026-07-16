/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   aff_a.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 14:28:08 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 14:53:23 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		write(1, "a", 1);
	else 
	{
		while (argv[1][i] && argv[1][i] != 'a')
			i++;
		if (argv[1][i] == 'a')
			write(1, "a" , 1);
	}
	write (1, "\n", 1);
}
