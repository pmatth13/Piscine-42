/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   wdmatch.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 18:13:02 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 18:44:04 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (argc == 3)
	{
		while (argv[1][len])
			len++;
		while (argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (i == len)
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
}
