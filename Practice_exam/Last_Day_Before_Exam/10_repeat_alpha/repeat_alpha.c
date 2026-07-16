/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   repeat_alpha.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 11:47:57 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 12:05:02 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int	repeat;

	i = 0;
	repeat = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' + 1;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = argv[1][i] - 'A' + 1;
			else
				repeat = 1;
			while (j < repeat)
			{
				write (1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
