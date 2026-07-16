/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   union.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: psaudell <psaudell@student.42.fr>             +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 17:42:03 by psaudell       #+#    #+#                */
/*   Updated: 2026/07/14 12:21:55 by psaudell       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int is_double(char *buffer, int len, char c)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (buffer[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char buf[256];
		int	len;
		int	i;

		i = 0;
		len = 0;
		while (argv[1][i])
		{
			if (!is_double(buf, len, argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				buf[len] = argv[1][i];
				len ++;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!is_double(buf, len, argv[2][i]))
			{
				write(1, &argv[2][i], 1);
				buf[len] = argv[2][i];
				len++;
			}
			i++;
		}
		write(1, "\n", 1);
	}
}
