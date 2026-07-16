/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   inter.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 16:58:47 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 17:40:20 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char *buf, int len, char c)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (buf[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char buffer[256];
		int i;
		int j;
		int len;

		i = 0;
		len = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[1][i] != argv[2][j] && argv[2][j])
				j++;
			if (argv[1][i] == argv[2][j] && !is_double(buffer, len, argv[2][j]))
			{
				buffer[len] = argv[1][i];
				write(1, &argv[1][i], 1);
				len++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

