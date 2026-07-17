/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   inter.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/16 15:32:59 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/16 16:10:38 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_double(char *buf, int len, char c)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (c == buf[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char buf[256];
	int len;
	int i;
	int j;

	i = 0;
	len = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j] && argv[2][j] != argv[1][i])
				j++;
			if (argv[2][j] && !is_double(buf, len, argv[1][i]))
			{
				buf[len] = argv[1][i];
				len++;
				write(1, &argv[1][i] ,1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}			
