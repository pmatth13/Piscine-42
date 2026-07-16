/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   search_and_replace.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 12:07:48 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 12:25:04 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int allowed(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i == 1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (argc == 4 && allowed(argv[2]) && allowed(argv[3]))
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
				argv[1][i] = argv[3][k];
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
