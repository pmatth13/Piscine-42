/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   first_word.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/12 16:06:21 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/12 16:19:17 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		if ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		while (argv[1][i] != '\0' && !((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}	
