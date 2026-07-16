/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   union.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/15 11:21:21 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/15 12:05:15 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_double(char *buf, int len, char c)
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
	int	i;
	int len;
	char buf[256];

	i = 0;
	len = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!is_double(buf, len, argv[1][i]))
			{
				buf[len] = argv[1][i];
				write(1, &argv[1][i], 1);
				len++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!is_double(buf, len, argv[2][i]))
			{
				buf[len] = argv[2][i];
				write(1, &argv[2][i], 1);
				len++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
